/* mpfr_printf -- printf function and friends.

Copyright 2007, 2008 Free Software Foundation, Inc.
Contributed by the Arenaire and Cacao projects, INRIA.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston,
MA 02110-1301, USA. */

/* The mpfr_printf-like functions are defined only if stdarg.h exist */
#ifdef HAVE_STDARG

#include <stdarg.h>
#include <errno.h>
#include "mpfr-impl.h"

#ifdef _MPFR_H_HAVE_FILE

/* Each printf-like function calls mpfr_vasprintf which
   - returns the number of characters in the returned string excluding the
   terminating null
   - returns -1 and sets the erange flag if the number of produced characters
   exceeds INT_MAX (in that case, also sets errno to EOVERFLOW in POSIX
   systems) */

#define GET_STR_VA(sz, str, fmt, ap)            \
  do                                            \
    {                                           \
      sz = mpfr_vasprintf (&(str), fmt, ap);    \
      if (sz < 0)                               \
        {                                       \
          if (str)                              \
            mpfr_free_str (str);                \
          return -1;                            \
        }                                       \
    } while (0)

#define GET_STR(sz, str, fmt)                   \
  do                                            \
    {                                           \
      va_list ap;                               \
      va_start(ap, fmt);                        \
      sz = mpfr_vasprintf (&(str), fmt, ap);    \
      va_end (ap);                              \
      if (sz < 0)                               \
        {                                       \
          if (str)                              \
            mpfr_free_str (str);                \
          return -1;                            \
        }                                       \
    } while (0)

int
mpfr_printf (const char *fmt, ...)
{
  char *str;
  int ret;

  GET_STR (ret, str, fmt);
  ret = printf ("%s", str);

  mpfr_free_str (str);
  return ret;
}

int
mpfr_vprintf (const char *fmt, va_list ap)
{
  char *str;
  int ret;

  GET_STR_VA (ret, str, fmt, ap);
  ret = printf ("%s", str);

  mpfr_free_str (str);
  return ret;
}


int
mpfr_fprintf (FILE *fp, const char *fmt, ...)
{
  char *str;
  int ret;

  GET_STR (ret, str, fmt);
  ret = fprintf (fp, "%s", str);

  mpfr_free_str (str);
  return ret;
}

int
mpfr_vfprintf (FILE *fp, const char *fmt, va_list ap)
{
  char *str;
  int ret;

  GET_STR_VA (ret, str, fmt, ap);
  ret = fprintf (fp, "%s", str);

  mpfr_free_str (str);
  return ret;
}
#endif /* _MPFR_H_HAVE_FILE */

int
mpfr_sprintf (char *buf, const char *fmt, ...)
{
  char *str;
  int ret;

  GET_STR (ret, str, fmt);
  ret = sprintf (buf, "%s", str);

  mpfr_free_str (str);
  return ret;
}

int
mpfr_vsprintf (char *buf, const char *fmt, va_list ap)
{
  char *str;
  int ret;

  GET_STR_VA (ret, str, fmt, ap);
  ret = sprintf (buf, "%s", str);

  mpfr_free_str (str);
  return ret;
}

int
mpfr_snprintf (char *buf, size_t size, const char *fmt, ...)
{
  char *str;
  int ret;
  size_t min_size;

  /* C99 allows SIZE to be null */
  if (size == 0)
    return 0;

  MPFR_ASSERTD (buf != NULL);

  GET_STR (ret, str, fmt);
  min_size = (size_t)ret < size ? (size_t)ret : size - 1;
  strncpy (buf, str, min_size);
  buf[min_size + 1] = '\0';

  mpfr_free_str (str);
  return ret;
}

int
mpfr_vsnprintf (char *buf, size_t size, const char *fmt, va_list ap)
{
  char *str;
  int ret;
  int min_size;

  /* C99 allows SIZE to be null */
  if (size == 0)
    return 0;

  MPFR_ASSERTD (buf != NULL);

  GET_STR_VA (ret, str, fmt, ap);
  min_size = (size_t)ret < size ? (size_t)ret : size - 1;
  strncpy (buf, str, min_size);
  buf[min_size + 1] = '\0';
  mpfr_free_str (str);
  return ret;
}

int
mpfr_asprintf (char **pp, const char *fmt, ...)
{
  int ret;

  GET_STR (ret, *pp, fmt);

  return ret;
}
#endif /* HAVE_STDARG */
