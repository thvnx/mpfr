/* mpfr_sqrt -- square root of a floating-point number

Copyright 1999-2016 Free Software Foundation, Inc.
Contributed by the AriC and Caramba projects, INRIA.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LESSER.  If not, see
http://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

#define MPFR_NEED_LONGLONG_H
#include "mpfr-impl.h"

static const unsigned short T1[] = {8160, 8098, 8037, 7977, 7919, 7861, 7805, 7751, 7697, 7644, 7593, 7542, 7493, 7445, 7397, 7350, 7304, 7260, 7215, 7172, 7129, 7088, 7047, 7006, 6966, 6927, 6889, 6851, 6814, 6778, 6742, 6706, 6671, 6637, 6603, 6570, 6537, 6505, 6473, 6442, 6411, 6381, 6351, 6321, 6292, 6263, 6235, 6206, 6179, 6152, 6125, 6098, 6072, 6046, 6020, 5995, 5970, 5946, 5921, 5897, 5874, 5850, 5827, 5804, 5781, 5759, 5737, 5715, 5693, 5672, 5651, 5630, 5609, 5589, 5569, 5549, 5529, 5509, 5490, 5471, 5452, 5433, 5415, 5396, 5378, 5360, 5342, 5324, 5307, 5290, 5273, 5256, 5239, 5222, 5206, 5189, 5173, 5157, 5141, 5125, 5110, 5094, 5079, 5064, 5049, 5034, 5019, 5004, 4990, 4975, 4961, 4947, 4933, 4919, 4905, 4892, 4878, 4865, 4851, 4838, 4825, 4812, 4799, 4786, 4773, 4761, 4748, 4736, 4724, 4711, 4699, 4687, 4675, 4663, 4652, 4640, 4628, 4617, 4605, 4594, 4583, 4572, 4561, 4550, 4539, 4528, 4517, 4506, 4496, 4485, 4475, 4464, 4454, 4444, 4434, 4423, 4413, 4403, 4394, 4384, 4374, 4364, 4355, 4345, 4335, 4326, 4317, 4307, 4298, 4289, 4280, 4271, 4262, 4253, 4244, 4235, 4226, 4217, 4208, 4200, 4191, 4183, 4174, 4166, 4157, 4149, 4141, 4132, 4124, 4116, 4108, 4100};

static const short T2[] = {420, 364, 308, 252, 196, 140, 84, 28, -31, -87, -141, -194, -248, -302, -356, -410, 307, 267, 226, 185, 145, 104, 63, 21, -24, -65, -105, -145, -185, -224, -263, -303, 237, 205, 174, 142, 111, 79, 48, 16, -16, -45, -75, -105, -136, -167, -198, -229, 187, 161, 136, 110, 85, 61, 36, 12, -15, -41, -67, -92, -117, -142, -167, -192, 159, 138, 117, 96, 76, 54, 33, 12, -10, -30, -51, -71, -92, -113, -134, -154, 130, 112, 95, 77, 60, 43, 26, 9, -10, -28, -46, -64, -81, -98, -116, -133, 115, 100, 85, 70, 54, 39, 23, 8, -7, -22, -37, -52, -66, -82, -96, -111, 99, 86, 73, 60, 46, 32, 19, 6, -8, -21, -34, -47, -60, -73, -86, -100, 86, 75, 63, 52, 40, 28, 17, 5, -7, -19, -31, -43, -54, -66, -78, -90, 77, 66, 56, 46, 35, 25, 16, 6, -5, -15, -26, -36, -47, -57, -67, -77, 70, 60, 51, 42, 33, 23, 14, 5, -5, -14, -24, -33, -43, -52, -62, -72, 65, 57, 49, 40, 31, 23, 14, 6, -3, -12, -20, -28, -37, -45, -54, -62};

static mp_limb_t
mpn_sqrtrem1 (mpfr_limb_ptr rp, mp_limb_t a0)
{
  mp_limb_t a = a0 >> (GMP_NUMB_BITS - 4);
  mp_limb_t b = (a0 >> (GMP_NUMB_BITS - 8)) & 0xf;
  mp_limb_t c = (a0 >> (GMP_NUMB_BITS - 12)) & 0xf;
  mp_limb_t x0, a1, t, y, x2;

  x0 = (T1[(a-4)*16+b] << 4) + T2[(a-4)*16+c];
  /* now x0 is a 16-bit approximation, with maximal error 2^(-9.46) */

  a1 = a0 >> (GMP_NUMB_BITS - 32);
  /* a1 has 32 bits, thus a1*x0^2 has 64 bits */
  t = (mp_limb_signed_t) (a1 * (x0 * x0)) >> 32;
  /* t has 32 bits now */
  x0 = (x0 << 15) - ((mp_limb_signed_t) (x0 * t) >> (17+1));

  /* now x0 is a 31-bit approximation (32 bits, 1 <= x0/2^31 <= 2),
     with maximal error 2^(-19.19). More precisely by exhaustive search
     on all 32-bit values of a1:
     -1.665416e-06 <= x0/2^31 - 1/sqrt(a1/2^32) <= 6.959122e-10,
     with the left worst case for a1=1326448622, x0=3864240766,
     and the right worst case for a1=1081715548, x0=4279108124. */

  /* we now use Karp-Markstein's trick to get a 32-bit approximation of the
     square root of a0:
     y = approx(a0*x0) [19-bit accuracy is enough]
     t = a - y^2 [target accuracy, high 19 bits are zero]
     y = y + x0/2 * t [target accuracy] */

  /* a1*x0^2 is near 2^94, thus a1*x0 is near 2^94/x0 */
  y = (a1 * x0) >> 31; /* y is near 2^63/x0, with 32 bits */
  t = (mp_limb_signed_t) (a0 - y * y) >> 14;
  /* t should have at most 64-14-19=31 significant bits */
  x0 = y + ((mp_limb_signed_t) (x0 * t) >> (49+1));

  /* x0 is now a 32-bit approximation of sqrt(a0) */

  x2 = x0 * x0;
  while (x2 + 2*x0 < a0)
    {
      x2 += 2*x0 + 1;
      x0++;
    }

  *rp = a0 - x2;
  return x0;
}

/* Return a (1+40)-bit approximation x0 of 2^72/sqrt(a0).
   Assume a0 >= 2^(GMP_NUMB_BITS-2), thus x0 has 41 bits.
   Assume GMP_NUMB_BITS=64.
*/
static mp_limb_t
mpn_rsqrtrem1 (mp_limb_t a0)
{
  mp_limb_t a = a0 >> (GMP_NUMB_BITS - 4);
  mp_limb_t b = (a0 >> (GMP_NUMB_BITS - 8)) & 0xf;
  mp_limb_t c = (a0 >> (GMP_NUMB_BITS - 12)) & 0xf;
  mp_limb_t x0, a1, t;

  MPFR_STAT_STATIC_ASSERT (GMP_NUMB_BITS == 64);

  x0 = (T1[(a-4)*16+b] << 4) + T2[(a-4)*16+c];
  /* now x0 is a 16-bit approximation, with maximal error 2^(-9.46):
     -2^(-9.46) <= x0/2^16 - 1/sqrt(a/2^4) <= 2^(-9.46) */

  a1 = a0 >> (GMP_NUMB_BITS - 32);
  /* a1 has 32 bits, thus a1*x0^2 has 64 bits */
  t = (mp_limb_signed_t) (-a1 * (x0 * x0)) >> 32;
  /* t has 32 bits now */
  x0 = (x0 << 15) + ((mp_limb_signed_t) (x0 * t) >> (17+1));
  /* now x0 is a 31-bit approximation (32 bits, 1 <= x0/2^31 <= 2),
     with maximal error 2^(-19.19) */

  a1 = a0 >> (GMP_NUMB_BITS - 40); /* a1 has 40 bits */
  t = (x0 * x0) >> 22; /* t has 40 bits */
  /* a1 * t has 80 bits, but we know the upper 19 bits cancel with 1 */
  t = (mp_limb_signed_t) (-a1 * t) >> 31; /* it remains 49 bits in theory,
                                             but t has only 31 bits at most */
  x0 = (x0 << 9) + ((mp_limb_signed_t) (x0 * t) >> (31+1+49-40));

  /* now x0 is a 1+40-bit approximation,
     more precisely we have (experimentally):
     -3.157551e-12 <= x0/2^40 - 2^32/sqrt(a0) <= 3.834848e-12
  */

  return x0;
}

/* Comments below are for GMP_NUMB_BITS=64 for simplicity, but the code is valid
   for any even value of GMP_NUMB_BITS.
   The algorithm used is the following, and uses Karp-Markstein's trick:
   - start from x, a 33-bit approximation of 2^64/sqrt(n1), with x <= 2^64/sqrt(n1)
   - y = floor(n1*x/2^64), which is an approximation of sqrt(n1)
   - t = n1 - y^2
   - u = (x * t) >> 33
   - y = (y << 32) + u
   Proof:
   * we know that Newton's iteration for the reciprocal square root,

                x' = x + (x/2) (1 - a*x^2),                         (1)

     if evaluated with infinite precision, always produces x' <= 1/sqrt(a).
     See for example Lemma 3.14 in "Modern Computer Arithmetic" by Brent and
     Zimmermann.

   * if we multiply both sides of equation (1) by a, and write y0 = a*x
     and y0' = a*x', we get:

                y0' = y0 + (x/2)*(a - y0^2)                         (2)

     and since x' <= 1/sqrt(a), y0' <= sqrt(a).

   * now assume we replace y0 in (2) by y = y0 - e for some e >= 0.
     Equation (2) becomes:

                y' = y0 + (x/2)*(a - y0^2) - e*(1-x*y0+x*e/2)       (3)

     Since y0 = a*x, the term 1-x*y0+x*e/2 equals 1-a*x^2+x*e/2,
     which is non-negative since x <= 1/sqrt(a). Thus y' <= y0' <= sqrt(a).

     In practice, we should ensure y <= n1*x/2^64, so that t and u are
     non-negative, so that all right shifts round towards -infinity.
*/
static mp_limb_t
mpn_sqrtrem2 (mpfr_limb_ptr sp, mpfr_limb_ptr rp, mpfr_limb_srcptr np)
{
  mp_limb_t x, y, t, high, low;

  x = mpn_rsqrtrem1 (np[1]);
  /* x is an approximation of 2^72/sqrt(n1), x has 41 bits */

  /* We know x/2^40 <= 2^32/sqrt(n1) + 3.9e-12 <= 2^32/sqrt(n1) + 2^(-37)
     thus n1*x/2^72 <= sqrt(n1) + 2^(-37)*n1/2^32 <= sqrt(n1) + 2^(-5). */

  /* compute y = floor(np[1]*x/2^72), cutting the upper 48 bits of n1 in two
     parts of 24 and 23 bits, which can be multiplied by x without overflow
     (warning: if we take 24 bits from low, it might overflow with x */
  high = np[1] >> 40; /* upper 24 bits from n1 */
  MPFR_ASSERTD((double) high * (double) x < 18446744073709551616.0);
  low = (np[1] >> 17) & 0x7fffff; /* next 23 bits */
  MPFR_ASSERTD((double) low * (double) x < 18446744073709551616.0);
  y = high * x + ((low * x) >> 23); /* y approximates n1*x/2^40 */
  /* y-1 takes into account the 2^(-31) error term, to ensure y <= sqrt(n1)
     after the right shift below */
  y = (y - 0x8000000) >> 32; /* the constant 0x8000000 = 2^(72-5-40) takes
                                into account the 2^(-5) error above, to ensure
                                y <= sqrt(n1) */
  /* y is an approximation of sqrt(n1), with y <= sqrt(n1) */

  t = np[1] - y * y;
  MPFR_ASSERTD((mp_limb_signed_t) t >= 0);

  /* we now compute t = (x * t) >> (40 + 1), but x * t might have
     more than 64 bits thus we cut t in two parts of 24 and 23 bits */
  high = t >> 23;
  low = t & 0x7fffff;
  MPFR_ASSERTD((double) high * (double) x < 18446744073709551616.0);
  MPFR_ASSERTD((double) low * (double) x < 18446744073709551616.0);
  t = high * x + ((low * x) >> 23); /* approximates t*x/2^23 */

  y = (y << (GMP_NUMB_BITS / 2)) + (t >> 18);
  if (y < (1UL << 63))
    y = 1UL << 63; /* the correction code below assumes y >= 2^63 */

  umul_ppmm (x, t, y, y);
  MPFR_ASSERTD(x < np[1] || (x == np[1] && t <= np[0])); /* y should not be too large */
  sub_ddmmss (x, t, np[1], np[0], x, t);

  /* Remainder x*2^GMP_NUMB_BITS+t should be <= 2*y (which implies x <= 1).
     If x = 1, it suffices to check t > 2*y mod 2^GMP_NUMB_BITS. */
  while (x > 1 || (x == 1 && t > 2 * y))
    {
      /* (y+1)^2 = y^2 + 2*y + 1 */
      x -= 1 + (t < (2 * y + 1));
      t -= 2 * y + 1;
      y ++;
      /* maximal number of loops observed is 3, for n1=4651405965214438987,
         n0=18443926066120424952, average is 0.576 */
    }

  sp[0] = y;
  rp[0] = t;
  return x;
}

/* Special code for prec(r), prec(u) < GMP_NUMB_BITS. */
static int
mpfr_sqrt1 (mpfr_ptr r, mpfr_srcptr u, mpfr_rnd_t rnd_mode)
{
  mpfr_prec_t p = MPFR_GET_PREC(r);
  mpfr_prec_t exp_u = MPFR_EXP(u), exp_r, sh = GMP_NUMB_BITS - p;
  mp_limb_t u0, r0, rb, sb, mask;
  mpfr_limb_ptr rp = MPFR_MANT(r);

  u0 = MPFR_MANT(u)[0];
  if (exp_u & 1)
    {
      u0 >>= 1;
      exp_u ++;
    }
  exp_r = exp_u >> 1;

  if (p < GMP_NUMB_BITS / 2)
    r0 = mpn_sqrtrem1 (&sb, u0) << (GMP_NUMB_BITS / 2);
  else
    {
      mp_limb_t sp[2];

      sp[0] = 0;
      sp[1] = u0;
      sb |= mpn_sqrtrem2 (&r0, &sb, sp);
    }

  rb = r0 & (MPFR_LIMB_ONE << (sh - 1));
  mask = MPFR_LIMB_MASK(sh);
  sb |= (r0 & mask) ^ rb;
  rp[0] = r0 & ~mask;

  /* rounding */
  if (exp_r > __gmpfr_emax)
    return mpfr_overflow (r, rnd_mode, 1);

  /* See comments in mpfr_divsp1 */
  if (exp_r < __gmpfr_emin)
    {
      if (rnd_mode == MPFR_RNDN)
        {
          if ((exp_r == __gmpfr_emin - 1) && (rp[0] == ~mask) && rb)
            goto rounding; /* no underflow */
          if (exp_r < __gmpfr_emin - 1 || (rp[0] == MPFR_LIMB_HIGHBIT && sb == 0))
            rnd_mode = MPFR_RNDZ;
        }
      else if (!MPFR_IS_LIKE_RNDZ(rnd_mode, 0))
        {
          if ((exp_r == __gmpfr_emin - 1) && (rp[0] == ~mask) && (rb | sb))
            goto rounding; /* no underflow */
        }
      return mpfr_underflow (r, rnd_mode, 1);
    }

 rounding:
  MPFR_EXP (r) = exp_r;
  if (rb == 0 && sb == 0)
    {
      MPFR_ASSERTD(exp_r >= __gmpfr_emin);
      MPFR_ASSERTD(exp_r <= __gmpfr_emax);
      return 0; /* idem than MPFR_RET(0) but faster */
    }
  else if (rnd_mode == MPFR_RNDN)
    {
      if (rb == 0 || (rb && sb == 0 &&
                      (rp[0] & (MPFR_LIMB_ONE << sh)) == 0))
        goto truncate;
      else
        goto add_one_ulp;
    }
  else if (MPFR_IS_LIKE_RNDZ(rnd_mode, 0))
    {
    truncate:
      MPFR_ASSERTD(exp_r >= __gmpfr_emin);
      MPFR_ASSERTD(exp_r <= __gmpfr_emax);
      MPFR_RET(-1);
    }
  else /* round away from zero */
    {
    add_one_ulp:
      rp[0] += MPFR_LIMB_ONE << sh;
      if (rp[0] == 0)
        {
          rp[0] = MPFR_LIMB_HIGHBIT;
          if (MPFR_UNLIKELY(exp_r + 1 > __gmpfr_emax))
            return mpfr_overflow (r, rnd_mode, 1);
          MPFR_ASSERTD(exp_r + 1 <= __gmpfr_emax);
          MPFR_ASSERTD(exp_r + 1 >= __gmpfr_emin);
          MPFR_SET_EXP (r, exp_r + 1);
        }
      MPFR_RET(1);
    }
}

int
mpfr_sqrt (mpfr_ptr r, mpfr_srcptr u, mpfr_rnd_t rnd_mode)
{
  mp_size_t rsize; /* number of limbs of r (plus 1 if exact limb multiple) */
  mp_size_t rrsize;
  mp_size_t usize; /* number of limbs of u */
  mp_size_t tsize; /* number of limbs of the sqrtrem remainder */
  mp_size_t k;
  mp_size_t l;
  mpfr_limb_ptr rp, rp0;
  mpfr_limb_ptr up;
  mpfr_limb_ptr sp;
  mp_limb_t sticky0; /* truncated part of input */
  mp_limb_t sticky1; /* truncated part of rp[0] */
  mp_limb_t sticky;
  int odd_exp;
  int sh; /* number of extra bits in rp[0] */
  int inexact; /* return ternary flag */
  mpfr_exp_t expr;
  MPFR_TMP_DECL(marker);

  MPFR_LOG_FUNC
    (("x[%Pu]=%.*Rg rnd=%d", mpfr_get_prec (u), mpfr_log_prec, u, rnd_mode),
     ("y[%Pu]=%.*Rg inexact=%d",
      mpfr_get_prec (r), mpfr_log_prec, r, inexact));

  if (MPFR_UNLIKELY(MPFR_IS_SINGULAR(u)))
    {
      if (MPFR_IS_NAN(u))
        {
          MPFR_SET_NAN(r);
          MPFR_RET_NAN;
        }
      else if (MPFR_IS_ZERO(u))
        {
          /* 0+ or 0- */
          MPFR_SET_SAME_SIGN(r, u);
          MPFR_SET_ZERO(r);
          MPFR_RET(0); /* zero is exact */
        }
      else
        {
          MPFR_ASSERTD(MPFR_IS_INF(u));
          /* sqrt(-Inf) = NAN */
          if (MPFR_IS_NEG(u))
            {
              MPFR_SET_NAN(r);
              MPFR_RET_NAN;
            }
          MPFR_SET_POS(r);
          MPFR_SET_INF(r);
          MPFR_RET(0);
        }
    }
  if (MPFR_UNLIKELY(MPFR_IS_NEG(u)))
    {
      MPFR_SET_NAN(r);
      MPFR_RET_NAN;
    }
  MPFR_SET_POS(r);

  if (MPFR_GET_PREC (r) < GMP_NUMB_BITS && MPFR_GET_PREC (u) < GMP_NUMB_BITS)
    return mpfr_sqrt1 (r, u, rnd_mode);

  MPFR_TMP_MARK (marker);
  MPFR_UNSIGNED_MINUS_MODULO (sh, MPFR_GET_PREC (r));
  if (sh == 0 && rnd_mode == MPFR_RNDN)
    sh = GMP_NUMB_BITS; /* ugly case */
  rsize = MPFR_LIMB_SIZE(r) + (sh == GMP_NUMB_BITS);
  /* rsize is the number of limbs of r + 1 if exact limb multiple and rounding
     to nearest, this is the number of wanted limbs for the square root */
  rrsize = rsize + rsize;
  usize = MPFR_LIMB_SIZE(u); /* number of limbs of u */
  rp0 = MPFR_MANT(r);
  rp = (sh < GMP_NUMB_BITS) ? rp0 : MPFR_TMP_LIMBS_ALLOC (rsize);
  up = MPFR_MANT(u);
  sticky0 = MPFR_LIMB_ZERO; /* truncated part of input */
  sticky1 = MPFR_LIMB_ZERO; /* truncated part of rp[0] */
  odd_exp = (unsigned int) MPFR_GET_EXP (u) & 1;
  inexact = -1; /* return ternary flag */

  sp = MPFR_TMP_LIMBS_ALLOC (rrsize);

  /* copy the most significant limbs of u to {sp, rrsize} */
  if (MPFR_LIKELY(usize <= rrsize)) /* in case r and u have the same precision,
                                       we have indeed rrsize = 2 * usize */
    {
      k = rrsize - usize;
      if (MPFR_LIKELY(k))
        MPN_ZERO (sp, k);
      if (odd_exp)
        {
          if (MPFR_LIKELY(k))
            sp[k - 1] = mpn_rshift (sp + k, up, usize, 1);
          else
            sticky0 = mpn_rshift (sp, up, usize, 1);
        }
      else
        MPN_COPY (sp + rrsize - usize, up, usize);
    }
  else /* usize > rrsize: truncate the input */
    {
      k = usize - rrsize;
      if (odd_exp)
        sticky0 = mpn_rshift (sp, up + k, rrsize, 1);
      else
        MPN_COPY (sp, up + k, rrsize);
      l = k;
      while (sticky0 == MPFR_LIMB_ZERO && l != 0)
        sticky0 = up[--l];
    }

  /* sticky0 is non-zero iff the truncated part of the input is non-zero */

  tsize = mpn_sqrtrem (rp, NULL, sp, rrsize);

  /* a return value of zero in mpn_sqrtrem indicates a perfect square */
  sticky = sticky0 || tsize != 0;

  /* truncate low bits of rp[0] */
  sticky1 = rp[0] & ((sh < GMP_NUMB_BITS) ? MPFR_LIMB_MASK(sh)
                     : ~MPFR_LIMB_ZERO);
  rp[0] -= sticky1;

  sticky = sticky || sticky1;

  expr = (MPFR_GET_EXP(u) + odd_exp) / 2;  /* exact */

  if (rnd_mode == MPFR_RNDZ || rnd_mode == MPFR_RNDD || sticky == MPFR_LIMB_ZERO)
    {
      inexact = (sticky == MPFR_LIMB_ZERO) ? 0 : -1;
      goto truncate;
    }
  else if (rnd_mode == MPFR_RNDN)
    {
      /* if sh < GMP_NUMB_BITS, the round bit is bit (sh-1) of sticky1
                  and the sticky bit is formed by the low sh-1 bits from
                  sticky1, together with the sqrtrem remainder and sticky0. */
      if (sh < GMP_NUMB_BITS)
        {
          if (sticky1 & (MPFR_LIMB_ONE << (sh - 1)))
            { /* round bit is set */
              if (sticky1 == (MPFR_LIMB_ONE << (sh - 1)) && tsize == 0
                  && sticky0 == 0)
                goto even_rule;
              else
                goto add_one_ulp;
            }
          else /* round bit is zero */
            goto truncate; /* with the default inexact=-1 */
        }
      else /* sh = GMP_NUMB_BITS: the round bit is the most significant bit
              of rp[0], and the remaining GMP_NUMB_BITS-1 bits contribute to
              the sticky bit */
        {
          if (sticky1 & MPFR_LIMB_HIGHBIT)
            { /* round bit is set */
              if (sticky1 == MPFR_LIMB_HIGHBIT && tsize == 0 && sticky0 == 0)
                goto even_rule;
              else
                goto add_one_ulp;
            }
          else /* round bit is zero */
            goto truncate; /* with the default inexact=-1 */
        }
    }
  else /* rnd_mode=GMP_RDNU, necessarily sticky <> 0, thus add 1 ulp */
    goto add_one_ulp;

 even_rule: /* has to set inexact */
  if (sh < GMP_NUMB_BITS)
    inexact = (rp[0] & (MPFR_LIMB_ONE << sh)) ? 1 : -1;
  else
    inexact = (rp[1] & MPFR_LIMB_ONE) ? 1 : -1;
  if (inexact == -1)
    goto truncate;
  /* else go through add_one_ulp */

 add_one_ulp:
  inexact = 1; /* always here */
  if (sh == GMP_NUMB_BITS)
    {
      rp ++;
      rsize --;
      sh = 0;
    }
  /* now rsize = MPFR_LIMB_SIZE(r) */
  if (mpn_add_1 (rp0, rp, rsize, MPFR_LIMB_ONE << sh))
    {
      expr ++;
      rp0[rsize - 1] = MPFR_LIMB_HIGHBIT;
    }
  goto end;

 truncate: /* inexact = 0 or -1 */
  if (sh == GMP_NUMB_BITS)
    MPN_COPY (rp0, rp + 1, rsize - 1);

 end:
  /* Do not use MPFR_SET_EXP because the range has not been checked yet. */
  MPFR_ASSERTN (expr >= MPFR_EMIN_MIN && expr <= MPFR_EMAX_MAX);
  MPFR_EXP (r) = expr;
  MPFR_TMP_FREE(marker);

  return mpfr_check_range (r, inexact, rnd_mode);
}
