/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012 Free Software Foundation, Inc.

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

/* Generated by MPFR's tuneup.c, 2011-07-31, gcc 4.3.2 */
/* generated on gcc40.fsffrance.org (IBM PowerPC 970 G5) with GMP 5.0.2 */


#define MPFR_MULHIGH_TAB  \
 -1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,10,11,12,13,12,13,16,14,18,18,18,18,18,20,20, \
 22,22,23,24,24,26,24,24,26,26,26,28,26,32,36,36, \
 32,36,36,36,36,36,36,36,36,36,36,40,40,36,44,44, \
 44,44,44,44,48,48,48,44,44,44,48,48,48,48,48,48, \
 52,52,52,52,52,52,63,57,57,63,63,63,63,63,63,63, \
 63,69,69,69,69,69,69,75,75,69,75,72,75,74,75,75, \
 75,75,75,75,75,75,81,81,81,81,81,93,93,93,93,93, \
 93,93,105,104,105,105,105,105,105,105,105,104,105,105,105,105, \
 105,105,105,105,105,105,105,105,105,105,105,105,105,105,105,105, \
 105,105,105,105,117,117,105,117,117,117,117,129,117,129,117,129, \
 129,129,129,129,129,129,129,129,129,129,129,129,129,129,141,129, \
 141,141,141,141,141,141,141,141,141,141,156,156,156,156,156,156, \
 156,156,156,156,156,156,156,156,156,156,156,156,156,172,172,172, \
 172,172,172,172,172,172,172,172,172,172,172,172,172,172,172,172, \
 188,172,172,188,172,188,188,188,188,188,188,188,188,188,188,187, \
 188,188,188,210,210,210,210,210,210,210,210,210,210,210,210,210, \
 210,210,210,210,210,210,210,210,210,210,210,210,210,210,210,210, \
 210,234,210,210,234,234,234,210,234,234,234,234,234,234,234,234, \
 234,234,234,234,234,258,234,234,258,234,258,258,258,258,258,258, \
 258,258,258,258,258,258,258,258,258,258,258,258,258,258,258,258, \
 258,258,258,258,258,257,258,258,282,282,282,282,282,281,282,282, \
 282,282,282,282,282,282,282,282,282,282,282,282,282,282,282,282, \
 312,282,282,312,282,282,282,312,312,312,312,282,312,312,312,312, \
 312,312,312,312,312,312,312,312,312,312,312,312,312,312,312,312, \
 312,312,312,312,344,344,344,344,344,344,344,344,344,344,344,344, \
 344,344,344,344,344,344,344,344,344,344,344,344,344,344,344,343, \
 344,343,344,344,344,344,344,344,344,344,344,344,376,376,376,376, \
 344,376,376,376,376,376,376,376,376,376,376,376,376,376,376,376, \
 376,376,376,376,376,376,376,376,376,376,376,376,376,376,376,376, \
 376,376,376,376,376,376,376,376,376,376,376,376,376,376,408,376, \
 408,408,408,408,376,376,408,408,376,408,408,408,408,376,408,408, \
 408,408,408,408,408,408,408,408,408,408,408,408,408,408,408,408, \
 408,408,408,408,408,408,408,408,408,408,408,448,448,408,408,407, \
 408,408,408,448,408,448,448,448,448,408,448,448,448,448,448,448, \
 448,448,448,448,448,448,448,496,496,496,496,496,496,496,448,496, \
 496,496,496,496,496,496,496,496,496,496,496,496,496,496,496,496, \
 496,496,496,496,496,496,496,496,496,496,496,496,496,496,496,496, \
 496,496,496,496,496,496,496,496,496,496,496,496,496,496,496,496, \
 496,496,496,496,496,496,496,496,496,496,496,496,496,496,496,496, \
 496,544,544,544,544,544,544,544,544,544,544,544,544,544,544,544, \
 544,544,544,544,544,544,544,544,544,544,543,544,544,544,544,544, \
 544,544,544,544,544,544,544,544,544,544,544,544,544,544,544,544, \
 544,544,544,544,544,544,544,544,544,544,544,544,544,544,544,544, \
 544,544,592,592,592,592,567,544,568,568,568,592,592,592,592,592, \
 592,592,568,592,592,592,592,592,592,592,592,592,592,592,592,592, \
 592,592,592,592,592,592,592,592,592,592,592,592,592,592,592,592, \
 592,592,592,592,592,592,592,592,592,591,592,592,592,592,592,592, \
 592,592,592,592,592,592,592,592,592,592,640,592,640,592,640,640, \
 640,640,639,640,640,640,640,639,640,639,640,640,639,640,640,639, \
 640,639,640,640,640,640,640,640,640,640,640,640,640,640,640,639, \
 640,639,640,639,639,640,640,639,639,640,640,640,736,736,736,736, \
 735,736,736,736,736,735,736,736,736,735,736,736,736,735,734,735, \
 736,735,736,736,736,736,736,736,736,736,736,736,736,736,736,735, \
 736,736,736,735,736,736,736,736,736,736,736,735,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,735,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,736,736,736,736,736,736,736,736,736, \
 736,736,735,736,736,736,735,736,832,832,831,831,832,832,832,831, \
 832,832,832,832,832,831,832,831,832,832,831,832,832,832,832,832, \
 832,832,832,831,832,832,832,832,832,832,832,832,832,831,832,832, \
 832,832,832,832,832,832,832,831,832,832,832,832,832,832,832,832, \
 832,832,831,832,832,832,832,831,832,830,832,832,832,832,832,832, \
 832,832,832,832,832,832,832,831,832,832,832,832,832,832,832,832, \
 832,832,832,832,832,832,832,832,832,832,832,832,832,832,832,832 \
  
#define MPFR_SQRHIGH_TAB  \
 -1,0,0,0,0,0,0,0,0,0,0,0,0,0,10,9, \
 10,10,12,12,12,12,14,13,14,14,15,15,16,16,17,17, \
 18,18,19,20,20,20,22,22,22,22,23,23,25,25,26,25, \
 26,26,27,27,28,28,29,29,30,30,31,31,32,32,33,34, \
 34,34,35,35,36,36,38,38,40,38,42,40,40,42,42,44, \
 42,42,44,44,44,44,46,46,46,46,50,48,52,48,50,52, \
 50,50,52,52,52,52,53,53,54,54,56,56,56,56,58,60, \
 58,58,60,60,60,60,63,63,63,63,63,63,66,66,66,72, \
 66,66,75,75,75,75,69,69,72,72,75,75,75,75,78,75, \
 75,75,75,75,78,78,78,81,78,81,81,81,81,81,81,87, \
 84,84,87,87,87,90,90,87,87,90,93,87,96,93,90,90, \
 99,96,102,99,96,93,99,93,99,96,96,96,96,99,99,99, \
 99,99,99,99,105,102,102,102,102,102,105,105,105,105,105,105, \
 111,111,111,111,111,111,117,111,111,111,111,111,123,117,117,123, \
 129,129,129,129,123,129,129,123,129,129,129,123,129,129,135,129, \
 129,129,135,135,129,135,134,135,135,135,135,135,135,141,135,129, \
 135,141,135,135,135,135,135,135,135,135,135,135,141,141,141,138, \
 138,141,141,141,141,141,141,141,147,144,147,146,147,147,146,147, \
 153,146,153,147,152,153,153,153,153,153,153,153,153,153,153,153, \
 164,164,164,164,164,172,164,171,172,172,172,172,172,172,172,164, \
 164,164,172,180,172,180,180,172,172,180,172,171,172,172,172,180, \
 180,180,180,180,180,180,180,188,188,187,187,188,188,188,180,196, \
 196,196,180,180,196,196,203,204,204,204,204,204,204,204,210,210, \
 188,188,188,210,188,188,222,222,204,196,222,222,222,222,204,222, \
 204,204,204,204,204,234,234,222,234,234,234,234,210,222,222,234, \
 246,246,222,222,222,222,246,222,222,234,258,258,258,258,234,258, \
 258,258,258,258,234,234,234,258,246,246,270,246,258,246,246,246, \
 246,246,258,258,258,258,258,258,258,258,258,258,258,258,258,258, \
 270,270,258,270,270,258,270,270,270,270,258,258,270,270,258,270, \
 258,258,258,258,258,258,258,270,257,258,258,270,258,270,258,270, \
 270,270,270,270,258,270,270,258,270,270,270,270,258,270,282,270, \
 270,270,270,270,270,270,270,270,270,270,270,282,270,282,282,282, \
 282,270,282,282,282,282,282,306,282,306,306,294,282,306,306,306, \
 312,306,294,306,306,306,306,306,270,306,306,306,306,306,306,282, \
 306,282,282,282,282,282,282,328,282,282,344,344,328,344,282,344, \
 344,282,328,344,344,344,344,306,306,306,344,306,306,306,344,344, \
 360,344,344,344,344,344,344,344,306,360,344,360,360,360,360,360, \
 360,360,360,360,360,360,360,360,328,344,344,344,344,344,344,344, \
 344,344,344,344,344,344,344,344,344,344,344,344,344,344,344,344, \
 344,344,344,344,360,344,344,360,360,360,360,360,360,360,360,360, \
 360,360,360,376,376,360,360,360,376,376,360,376,376,376,376,376, \
 376,376,376,376,376,376,376,376,392,392,392,408,408,376,408,408, \
 408,408,408,408,408,408,408,408,408,408,408,408,408,408,408,408, \
 408,408,408,408,408,408,408,408,408,424,408,408,424,408,408,424, \
 408,408,408,408,408,408,408,408,408,408,408,408,408,407,408,408, \
 408,407,407,408,408,408,424,408,408,408,408,408,408,408,408,408, \
 408,408,408,408,408,408,408,408,424,408,424,424,424,424,424,424, \
 424,424,424,424,424,424,408,408,408,408,408,407,440,440,408,408, \
 408,440,440,424,424,440,424,424,424,424,424,424,424,424,424,424, \
 424,424,424,440,440,408,440,440,440,472,440,440,472,440,440,440, \
 440,472,440,440,440,424,472,440,472,440,472,424,424,440,424,424, \
 424,440,440,424,440,440,440,472,472,440,440,472,440,472,472,472, \
 472,472,472,424,440,424,424,423,424,424,472,440,424,424,472,440, \
 440,440,440,440,440,472,440,472,440,440,472,440,440,440,472,440, \
 440,440,440,440,440,440,440,456,440,472,439,440,440,456,456,472, \
 472,472,472,471,471,472,472,472,472,472,472,472,471,472,472,472, \
 472,472,471,471,472,472,472,471,472,472,472,472,472,472,472,472, \
 472,472,472,471,472,472,472,472,472,471,472,472,472,472,472,472, \
 472,472,472,472,471,472,472,519,520,472,520,472,472,472,591,592, \
 520,520,520,520,520,592,592,592,592,568,592,592,520,520,520,592, \
 520,544,520,544,592,544,520,543,544,544,544,520,520,520,592,519, \
 568,568,592,592,592,592,568,592,568,568,592,568,568,592,568,592, \
 568,568,592,592,544,568,592,592,592,592,592,568,592,592,592,592, \
 592,592,591,592,592,592,592,592,592,592,592,568,592,592,592,568 \
  
#define MPFR_DIVHIGH_TAB  \
 0,1,2,3,4,5,6,7,6,9,8,9,10,8,12,13, \
 10,10,11,12,13,14,14,13,15,14,15,17,17,18,19,20, \
 21,21,19,21,20,20,23,21,22,22,23,24,25,24,26,28, \
 27,27,27,27,29,28,29,35,32,32,32,32,32,36,35,36, \
 36,36,36,36,36,36,39,40,40,40,43,40,47,40,43,42, \
 44,47,43,43,44,44,47,48,48,48,48,48,48,48,52,50, \
 52,52,52,52,52,52,56,55,64,64,55,64,64,64,64,64, \
 64,72,64,72,72,64,64,72,64,72,72,72,72,70,72,72, \
 72,72,72,72,72,72,72,72,72,72,72,72,80,72,80,80, \
 80,80,80,80,80,80,80,88,80,88,88,80,87,80,88,88, \
 88,88,88,96,88,88,88,96,88,96,96,96,88,96,96,96, \
 96,96,96,96,96,96,96,96,96,96,96,96,96,104,104,104, \
 104,104,100,104,104,104,104,103,104,102,104,104,104,104,112,120, \
 112,112,126,126,126,126,126,126,126,126,126,126,126,126,126,126, \
 144,126,126,128,144,144,128,126,144,144,144,144,144,144,144,128, \
 144,144,144,144,144,128,144,144,144,144,144,144,144,144,144,144, \
 144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144, \
 144,144,144,144,144,144,144,144,144,144,144,144,144,144,150,160, \
 160,156,150,156,160,160,160,160,160,156,160,160,160,160,160,160, \
 160,160,160,160,160,160,160,160,160,160,160,160,160,160,174,176, \
 176,176,176,192,186,192,174,176,192,192,192,192,192,174,192,192, \
 192,192,192,192,192,192,208,186,192,192,186,192,192,192,192,192, \
 192,192,192,192,192,192,192,208,192,208,192,192,208,192,208,208, \
 208,208,208,208,192,208,208,207,208,192,204,208,208,208,208,208, \
 208,208,208,208,208,208,208,208,208,208,208,208,208,208,208,208, \
 208,208,208,208,208,208,208,208,208,208,208,208,208,208,209,209, \
 256,220,216,216,256,252,256,240,240,252,252,256,224,252,256,256, \
 252,256,256,240,252,256,256,256,256,256,256,256,256,252,252,256, \
 256,256,252,256,252,256,256,256,288,288,254,256,256,288,288,288, \
 288,252,252,288,288,288,288,288,288,288,288,288,288,288,288,252, \
 288,288,288,288,288,288,288,288,288,288,256,288,288,288,252,257, \
 288,256,256,256,288,288,288,288,288,288,288,288,288,288,288,288, \
 288,288,288,288,288,288,288,288,288,288,288,288,288,288,288,288, \
 288,288,288,288,288,288,288,288,288,288,288,288,288,288,288,288, \
 288,288,288,288,288,288,288,288,288,288,288,288,288,288,288,288, \
 288,288,288,288,288,288,288,288,288,288,288,288,288,288,312,312, \
 312,300,312,312,312,312,312,312,312,320,312,312,312,312,312,312, \
 312,312,312,312,320,312,320,320,320,320,320,320,320,320,320,320, \
 312,344,320,312,344,320,312,312,320,344,320,336,342,344,344,344, \
 320,344,344,320,344,320,320,320,352,352,352,352,352,352,352,372, \
 372,368,368,384,344,372,368,384,369,368,384,372,370,368,376,370, \
 372,384,384,384,384,384,384,384,384,384,384,384,384,384,384,384, \
 384,384,372,372,384,372,384,344,368,368,384,384,384,408,384,372, \
 384,384,384,416,416,416,384,416,384,416,416,416,416,416,384,384, \
 384,384,384,415,384,384,416,416,416,384,384,384,384,416,384,384, \
 384,416,384,384,372,384,417,416,384,416,416,416,384,416,416,416, \
 416,416,416,384,384,416,416,384,384,384,416,416,417,416,416,416, \
 416,416,416,417,417,417,416,418,416,415,416,416,416,416,416,415, \
 416,417,417,416,417,416,415,416,416,416,416,417,416,413,416,416, \
 416,416,416,416,416,416,416,417,416,416,418,416,415,416,416,417, \
 416,416,416,416,416,416,416,416,416,416,417,416,416,416,416,415, \
 416,416,417,416,416,417,416,416,416,416,416,416,416,416,417,419, \
 419,420,420,444,420,420,432,512,468,504,456,456,456,456,514,512, \
 512,512,456,504,456,444,512,512,504,512,513,512,512,504,512,512, \
 512,512,513,513,512,512,513,504,512,512,513,512,512,504,512,512, \
 513,514,513,512,512,513,513,504,512,504,512,512,512,513,512,512, \
 510,512,512,512,512,512,512,512,513,512,515,512,513,512,504,512, \
 512,514,516,512,512,512,512,512,512,513,512,512,513,513,513,514, \
 515,512,512,504,564,512,512,512,512,512,512,576,561,512,576,564, \
 576,512,512,576,512,512,512,515,564,512,513,576,564,564,576,512, \
 512,510,512,564,576,576,512,576,576,514,576,576,512,564,576,576, \
 512,513,576,512,512,513,514,512,512,576,576,512,513,576,513,515, \
 552,552,576,512,512,512,564,513,564,576,576,576,564,576,564,576, \
 564,512,576,564,564,576,576,564,564,576,564,576,564,576,551,576 \
  
#define MPFR_MUL_THRESHOLD 1 /* limbs */
#define MPFR_SQR_THRESHOLD 5 /* limbs */
#define MPFR_DIV_THRESHOLD 17 /* limbs */
#define MPFR_EXP_2_THRESHOLD 966 /* bits */
#define MPFR_EXP_THRESHOLD 10924 /* bits */
#define MPFR_SINCOS_THRESHOLD 36978 /* bits */
#define MPFR_AI_THRESHOLD1 -12626 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 1377
#define MPFR_AI_THRESHOLD3 24323
/* Tuneup completed successfully, took 2598 seconds */
