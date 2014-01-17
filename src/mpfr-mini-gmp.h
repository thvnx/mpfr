/* mpfr-mini-gmp.h -- Interface header for mini-gmp.

Copyright 2014 Free Software Foundation, Inc.
Contributed by the AriC and Caramel projects, INRIA.

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

#include <stdlib.h> /* for size_t */
#include "gmp.h"

#ifndef gmp_version
extern const char * const gmp_version;
#endif

#ifndef __gmp_const
#define __gmp_const const
#endif

#ifndef GMP_NUMB_BITS
#define GMP_NUMB_BITS 64
#endif

#ifndef GMP_NUMB_MASK
#define GMP_NUMB_MASK (~((mp_limb_t) 0))
#endif

#ifndef mp_bits_per_limb
extern const int mp_bits_per_limb;
#endif

#ifndef __gmp_allocate_func
#define __gmp_allocate_func gmp_default_alloc
#define __gmp_reallocate_func gmp_default_realloc
#define __gmp_free_func gmp_default_free
#endif

#ifndef gmp_randinit_default
#define WANT_gmp_randinit_default
void gmp_randinit_default (gmp_randstate_t);
#endif

#ifndef gmp_randseed_ui
#define WANT_gmp_randseed_ui
void gmp_randseed_ui (gmp_randstate_t, unsigned long int);
#endif

#ifndef gmp_randclear
#define WANT_gmp_randclear
void gmp_randclear (gmp_randstate_t);
#endif

#ifndef gmp_default_alloc
#define WANT_gmp_default_alloc
void *gmp_default_alloc (size_t);
#endif

#ifndef gmp_default_realloc
#define WANT_gmp_default_realloc
void *gmp_default_realloc (void *, size_t, size_t);
#endif

#ifndef gmp_default_free
#define WANT_gmp_default_free
void gmp_default_free (void *, size_t);
#endif

#ifndef mpn_scan1
#define WANT_mpn_scan1
mp_bitcnt_t mpn_scan1 (const mp_limb_t *, mp_bitcnt_t);
#endif

#ifndef mpz_perfect_square_p
#define WANT_mpz_perfect_square_p
int mpz_perfect_square_p (const mpz_t);
#endif

#ifndef mpz_addmul_ui
#define WANT_mpz_addmul_ui
void mpz_addmul_ui (mpz_t, const mpz_t, unsigned long);
#endif

#ifndef mpn_divrem_1
#define WANT_mpn_divrem_1
mp_limb_t mpn_divrem_1 (mp_limb_t*, mp_size_t, mp_limb_t*, mp_size_t,
                        mp_limb_t);
#endif

#ifndef mpz_realloc2
#define WANT_mpz_realloc2
void mpz_realloc2 (mpz_t, mp_bitcnt_t);
#endif

#ifndef mpz_urandomb
#define WANT_mpz_urandomb
void mpz_urandomb (mpz_t, gmp_randstate_t, mp_bitcnt_t);
#endif

#ifndef mpn_zero
#define WANT_mpn_zero
void mpn_zero (mp_limb_t *, mp_size_t);
#endif

#ifndef mpn_popcount
#define WANT_mpn_popcount
mp_bitcnt_t mpn_popcount (const mp_limb_t *, mp_size_t);
#endif

#ifndef mpn_divrem
#define WANT_mpn_divrem
mp_limb_t mpn_divrem (mp_limb_t *, mp_size_t, mp_limb_t *,
                      mp_size_t, const mp_limb_t *, mp_size_t);
#endif

#ifndef mpz_submul
#define WANT_mpz_submul
void mpz_submul (mpz_t, const mpz_t, const mpz_t);
#endif

#ifndef mpz_addmul
#define WANT_mpz_addmul
void mpz_addmul (mpz_t, const mpz_t, const mpz_t);
#endif

#ifndef mpn_tdiv_qr
#define WANT_mpn_tdiv_qr
void mpn_tdiv_qr (mp_limb_t *, mp_limb_t *, mp_size_t,
                  const mp_limb_t *, mp_size_t, const mp_limb_t *, mp_size_t);
#endif

#ifndef mpn_sqrtrem
#define WANT_mpn_sqrtrem
mp_size_t mpn_sqrtrem (mp_limb_t *, mp_limb_t *, const mp_limb_t *, mp_size_t);
#endif

#ifndef mpz_dump
#define WANT_mpz_dump
void mpz_dump (mpz_t);
#endif

#ifndef mpz_rrandomb
#define mpz_rrandomb mpz_urandomb
#endif
