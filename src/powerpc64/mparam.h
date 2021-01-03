/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005-2021 Free Software Foundation, Inc.

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
https://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

/* Generated by MPFR's tuneup.c, 2018-02-22, gcc 4.8.5 */
/* generated on gcc110.fsffrance.org (POWER7) with GMP 6.1.2,
   where GMP uses -m64  -mtune=power7 -O3 */

#define MPFR_MULHIGH_TAB  \
 -1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,0,0,0,0,0,0,0,0,0,0,0,0,19,19,19, \
 21,21,22,24,24,24,24,24,24,24,24,24,30,30,32,42, \
 30,34,34,34,34,38,38,32,32,32,40,40,52,40,42,42, \
 42,52,52,52,52,48,48,48,48,52,52,52,52,52,52,52, \
 52,52,52,52,52,52,56,52,52,60,60,60,60,60,64,60, \
 64,68,68,68,68,68,68,68,68,75,68,74,68,78,75,74, \
 75,68,75,86,78,87,87,87,93,93,87,87,87,93,87,87, \
 87,99,86,87,87,87,99,90,92,93,84,99,99,74,93,99, \
 99,99,98,126,99,99,99,99,102,102,102,104,104,108,110,110, \
 108,111,111,114,114,117,117,117,117,117,122,123,123,123,123,123, \
 123,123,126,128,128,123,141,153,123,141,141,141,138,141,141,152, \
 153,153,120,153,152,153,153,153,152,162,153,117,153,153,153,153, \
 153,153,128,153,153,152,153,153,153,152,153,153,153,153,153,156, \
 156,152,153,153,153,153,153,153,153,153,153,153,153,153,153,177, \
 177,177,177,153,176,216,153,177,204,153,204,177,168,204,204,168, \
 204,204,204,204,204,177,204,204,204,204,204,204,202,204,204,204, \
 204,204,204,202,203,204,204,204,204,204,204,204,204,204,204,204, \
 204,204,203,204,204,204,204,204,204,204,204,204,204,204,204,204, \
 236,204,204,234,204,204,203,236,236,236,236,236,236,236,236,236, \
 236,236,235,236,235,236,236,236,236,236,236,236,236,236,236,236, \
 236,236,236,236,236,236,268,268,236,268,236,268,268,268,268,268, \
 268,268,268,266,267,268,267,268,268,268,268,268,267,268,268,268, \
 268,268,267,268,268,306,306,306,306,304,305,306,306,336,306,306, \
 236,305,306,306,306,306,306,306,306,306,306,306,306,306,306,306, \
 306,306,306,306,306,306,306,306,306,306,306,306,306,306,305,306, \
 306,306,306,306,306,306,306,306,330,306,306,305,306,306,306,305, \
 306,306,306,306,354,306,354,354,353,306,353,354,354,354,354,354, \
 354,354,353,354,354,354,353,354,354,354,354,354,354,354,354,354, \
 424,354,354,354,354,354,353,354,354,354,352,408,354,354,354,354, \
 354,408,408,354,408,408,408,407,408,408,408,408,408,408,407,408, \
 408,408,408,408,402,408,402,402,407,408,408,408,408,408,408,407, \
 408,408,408,408,408,408,408,408,408,408,408,408,408,408,408,408, \
 406,407,408,408,408,408,408,408,408,406,408,408,408,408,407,408, \
 408,408,407,408,408,407,408,408,408,408,408,407,407,408,408,408, \
 408,408,408,472,472,472,472,472,472,472,472,472,472,472,472,472, \
 472,472,472,472,472,472,472,472,471,472,472,472,472,472,472,472, \
 470,471,472,472,472,472,472,472,472,472,472,472,472,472,472,472, \
 472,472,471,472,472,470,472,472,472,472,470,471,472,472,472,472, \
 472,472,472,472,536,536,536,536,535,536,535,536,536,536,535,536, \
 536,536,536,535,536,536,536,534,535,536,536,536,536,536,536,536, \
 536,535,536,536,536,536,536,536,536,536,535,536,536,536,536,536, \
 536,536,535,535,536,535,536,536,536,536,536,535,536,536,536,536, \
 536,536,536,535,536,536,536,536,536,536,536,536,536,591,536,536, \
 536,536,592,590,536,591,592,592,592,591,591,592,592,591,592,592, \
 592,591,591,592,592,592,592,592,592,592,591,592,592,590,590,592, \
 592,592,590,591,592,592,592,592,592,592,592,592,592,592,592,592, \
 591,592,592,592,592,591,592,592,616,592,592,591,591,616,592,592, \
 592,592,616,616,616,592,616,616,592,616,592,616,640,616,616,591, \
 592,592,589,592,640,591,592,616,688,688,592,688,688,687,688,686, \
 688,688,688,688,687,688,688,688,686,687,688,688,688,687,688,688, \
 688,686,688,688,688,615,688,685,688,688,687,688,688,687,688,688, \
 688,688,686,687,688,688,688,688,688,688,688,688,688,687,687,688, \
 688,688,688,688,688,688,688,688,688,686,687,688,688,688,688,688, \
 688,688,712,736,736,688,686,736,688,736,688,736,687,735,736,736, \
 688,736,734,735,736,688,688,736,688,736,688,687,687,688,688,688, \
 688,736,736,688,688,736,736,736,736,736,784,736,688,736,736,782, \
 783,784,783,784,784,784,784,776,784,784,783,784,784,782,783,784, \
 784,784,784,783,784,784,783,784,784,784,784,784,784,784,784,784, \
 783,784,784,784,783,783,784,784,784,784,784,784,784,784,784,784, \
 784,784,784,783,784,784,783,783,784,784,784,782,783,784,784,783, \
 784,784,783,784,783,784,784,784,784,783,784,783,784,784,784,784, \
 784,784,783,784,784,783,784,784,784,783,784,784,784,784,784,783, \
 782,783,784,784,784,784,784,784,784,784,783,784,784,784,784,784 \

#define MPFR_SQRHIGH_TAB  \
 -1,0,-1,0,0,0,-1,-1,-1,7,8,-1,10,11,11,11, \
 11,11,11,11,13,13,13,13,15,15,15,15,16,17,19,19, \
 19,19,19,19,21,22,23,23,23,23,24,25,27,27,25,29, \
 27,27,29,29,31,31,31,31,31,38,38,38,38,38,38,38, \
 38,36,36,38,38,38,38,38,42,42,44,42,46,44,46,44, \
 45,46,46,46,46,46,50,54,50,50,52,52,54,54,54,50, \
 52,52,54,54,52,52,54,54,54,54,56,58,60,60,60,62, \
 60,62,62,64,64,64,76,75,76,76,76,72,75,76,76,76, \
 76,76,76,76,84,84,76,76,84,88,88,88,88,92,92,92, \
 92,92,92,84,92,76,92,92,88,92,92,92,88,90,92,92, \
 92,88,92,92,91,91,92,92,91,92,92,92,92,92,92,92, \
 92,92,95,111,111,111,111,110,111,111,111,111,111,111,111,111, \
 111,111,111,111,111,114,111,114,117,116,111,110,121,116,129,129, \
 134,135,135,135,129,135,192,135,135,135,135,135,135,135,135,135, \
 135,135,141,135,129,129,129,135,135,135,135,135,135,134,135,141, \
 140,141,141,135,144,135,160,184,147,141,147,153,147,152,153,159, \
 153,159,159,159,159,159,159,165,159,159,159,159,159,165,164,159, \
 159,159,158,159,159,159,177,171,177,159,159,177,158,177,159,159, \
 159,158,159,159,159,171,171,159,159,171,171,159,177,177,171,171, \
 177,174,177,159,177,177,171,177,176,177,171,171,177,177,176,171, \
 177,177,177,175,176,177,177,176,177,177,204,204,196,196,204,212, \
 204,188,212,212,196,196,211,212,212,212,212,212,212,212,211,212, \
 204,204,212,212,212,212,212,211,212,212,212,212,212,220,220,236, \
 220,220,220,228,228,228,220,236,228,228,228,236,236,244,234,235, \
 236,236,236,236,244,244,236,243,244,244,244,244,244,244,244,236, \
 244,244,227,236,243,236,244,236,236,236,244,244,244,244,244,244, \
 244,244,244,244,244,244,220,219,220,244,228,220,236,236,228,233, \
 236,235,236,236,236,240,236,244,236,236,244,244,242,243,244,243, \
 244,244,244,244,244,244,243,244,244,236,244,244,244,318,318,244, \
 244,244,318,318,318,270,244,318,244,244,270,270,270,270,318,318, \
 318,318,318,318,282,318,318,318,318,318,318,318,318,318,318,318, \
 294,293,294,318,294,294,305,306,306,306,294,305,306,317,306,306, \
 306,306,318,318,318,318,318,317,318,317,318,318,318,318,318,318, \
 330,318,318,317,306,318,318,317,318,318,318,318,342,342,342,318, \
 318,318,318,408,318,318,318,330,354,342,318,318,354,353,354,354, \
 354,354,342,354,353,354,354,360,342,354,342,354,353,342,354,354, \
 342,341,342,353,354,354,354,353,354,354,354,354,354,354,354,354, \
 354,354,354,360,360,376,392,318,423,424,391,424,376,376,392,376, \
 392,391,408,392,376,392,408,423,424,424,392,424,423,424,424,424, \
 424,354,424,408,424,424,424,424,424,424,408,424,424,423,408,424, \
 424,408,424,424,424,424,424,424,424,423,424,424,424,424,424,424, \
 424,439,423,424,424,424,424,424,424,424,440,440,424,439,423,424, \
 600,439,423,424,456,424,424,472,424,424,456,456,456,423,424,424, \
 456,424,424,472,472,472,424,424,424,471,472,424,424,424,424,424, \
 424,424,472,472,488,424,423,424,424,424,488,488,488,439,488,487, \
 440,440,440,488,488,488,472,440,456,440,472,456,455,455,472,472, \
 456,456,456,472,456,472,472,472,472,488,488,471,471,486,472,472, \
 472,472,472,472,472,471,472,472,472,472,471,488,488,488,488,488, \
 488,504,488,504,600,391,488,752,488,488,488,408,568,488,488,488, \
 488,488,488,487,488,488,488,488,488,488,488,488,488,472,472,488, \
 488,488,488,599,488,600,600,488,488,488,599,600,600,599,600,488, \
 600,600,599,600,600,600,600,600,600,600,600,600,600,600,600,599, \
 598,599,600,600,600,599,600,600,600,600,616,600,424,568,568,568, \
 568,584,568,600,598,568,600,568,431,824,600,600,600,599,600,600, \
 600,600,600,600,-1,784,600,600,600,599,595,600,600,440,600,600, \
 600,600,600,600,600,599,600,600,600,600,597,600,600,600,600,600, \
 600,600,600,597,600,600,600,600,600,600,600,600,599,600,599,600, \
 600,600,600,599,600,600,599,600,600,600,600,598,662,600,600,600, \
 600,600,600,600,599,599,600,600,664,600,600,599,600,664,664,663, \
 664,664,664,600,664,664,664,664,664,664,600,664,664,664,664,664, \
 600,600,600,664,600,663,600,600,600,600,664,600,600,600,696,664, \
 696,598,600,600,600,664,600,600,664,664,600,600,600,600,600,600, \
 600,600,728,728,600,728,728,728,728,600,725,727,727,728,727,728, \
 727,728,728,727,728,728,728,728,728,728,728,728,727,728,728,728 \

#define MPFR_DIVHIGH_TAB  \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*0-15*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*16-31*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*32-47*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*48-63*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,41, /*64-79*/ \
 42,42,0,0,48,48,0,46,48,48,50,49,49,48,49,50, /*80-95*/ \
 51,0,0,0,79,52,0,0,0,54,57,68,60,58,0,59, /*96-111*/ \
 58,59,62,0,60,66,68,66,68,68,68,66,66,68,68,68, /*112-127*/ \
 76,68,76,68,68,69,75,76,70,79,73,84,76,75,78,76, /*128-143*/ \
 81,84,80,80,84,81,80,84,84,80,80,81,80,84,84,85, /*144-159*/ \
 84,83,104,96,84,96,96,92,96,96,96,132,104,100,98,104, /*160-175*/ \
 104,104,104,104,104,104,104,104,104,104,104,104,104,104,100,100, /*176-191*/ \
 104,104,112,104,100,120,120,104,104,119,112,112,118,104,120,120, /*192-207*/ \
 112,120,118,118,119,120,113,114,119,112,128,136,112,120,116,122, /*208-223*/ \
 118,132,120,119,120,136,118,120,119,120,128,136,128,136,132,136, /*224-239*/ \
 132,128,136,135,136,132,128,136,130,136,136,132,135,135,136,132, /*240-255*/ \
 132,136,136,134,135,135,136,149,135,136,135,136,136,136,138,140, /*256-271*/ \
 156,150,156,148,150,149,161,150,148,162,160,148,156,160,150,152, /*272-287*/ \
 157,150,168,160,160,150,150,152,160,160,168,168,168,156,156,160, /*288-303*/ \
 156,161,160,168,160,160,160,162,168,160,160,167,168,166,174,173, /*304-319*/ \
 167,168,198,192,168,168,174,192,168,192,168,168,168,168,184,192, /*320-335*/ \
 192,194,208,193,192,192,192,192,208,192,192,208,197,206,204,208, /*336-351*/ \
 192,207,200,204,204,191,192,208,204,208,192,208,208,208,208,209, /*352-367*/ \
 208,208,208,208,208,216,192,208,192,209,192,198,208,206,204,208, /*368-383*/ \
 208,208,208,207,208,208,216,208,208,216,208,208,208,208,206,208, /*384-399*/ \
 208,206,207,222,206,208,208,208,208,209,208,207,240,208,209,223, /*400-415*/ \
 240,233,240,220,234,216,240,240,219,233,240,222,222,224,224,232, /*416-431*/ \
 240,240,239,240,236,240,240,240,240,241,240,238,240,240,240,240, /*432-447*/ \
 300,240,245,239,240,240,233,240,236,240,240,240,240,240,241,236, /*448-463*/ \
 240,426,240,240,240,256,240,240,240,240,239,240,270,272,241,241, /*464-479*/ \
 256,246,245,256,246,245,257,272,246,256,256,272,264,272,272,268, /*480-495*/ \
 256,256,272,255,272,264,256,270,270,272,272,272,269,256,304,272, /*496-511*/ \
 268,300,306,300,272,304,300,299,264,300,294,270,270,490,272,300, /*512-527*/ \
 272,272,272,300,306,300,301,298,304,300,300,312,298,304,304,306, /*528-543*/ \
 300,299,306,312,336,312,300,298,298,300,300,318,288,299,282,305, /*544-559*/ \
 304,298,304,305,299,303,300,300,300,304,304,312,312,306,306,299, /*560-575*/ \
 304,312,312,312,300,312,324,304,529,299,300,318,306,312,336,304, /*576-591*/ \
 300,300,300,306,312,312,312,332,305,336,336,384,336,312,324,312, /*592-607*/ \
 316,312,348,312,312,328,312,353,336,320,336,336,336,318,336,332, /*608-623*/ \
 335,348,336,336,328,324,335,336,336,322,335,336,336,336,324,328, /*624-639*/ \
 384,384,384,336,384,336,336,336,336,336,336,384,336,342,335,384, /*640-655*/ \
 336,336,384,335,384,336,336,383,335,408,335,408,336,384,408,384, /*656-671*/ \
 408,408,407,384,384,408,416,384,384,408,408,384,408,408,408,408, /*672-687*/ \
 408,408,384,408,408,408,408,408,416,408,416,408,408,408,408,416, /*688-703*/ \
 408,384,408,416,416,408,408,408,408,408,408,407,408,408,416,384, /*704-719*/ \
 408,407,408,408,384,383,406,407,407,416,384,415,416,408,416,408, /*720-735*/ \
 407,416,408,408,416,406,384,384,408,408,408,406,408,407,408,408, /*736-751*/ \
 384,408,408,408,408,416,408,408,408,416,415,408,384,408,415,408, /*752-767*/ \
 408,408,408,405,408,408,408,408,408,408,408,408,416,416,416,408, /*768-783*/ \
 416,416,406,416,408,414,407,408,407,407,414,408,408,408,416,408, /*784-799*/ \
 415,416,416,408,408,416,415,416,416,416,416,416,416,416,448,415, /*800-815*/ \
 416,472,416,416,415,416,415,480,416,416,416,480,440,416,480,448, /*816-831*/ \
 440,464,440,466,477,424,472,432,470,472,456,460,464,480,448,480, /*832-847*/ \
 440,480,480,480,472,464,480,464,480,472,467,480,480,479,480,480, /*848-863*/ \
 478,480,472,472,480,480,479,480,472,480,480,470,480,480,480,472, /*864-879*/ \
 480,468,464,470,472,472,476,480,480,472,478,478,480,480,877,472, /*880-895*/ \
 480,479,480,480,512,480,479,480,756,466,472,480,466,464,478,466, /*896-911*/ \
 480,480,472,480,462,480,472,480,478,478,480,480,479,480,480,480, /*912-927*/ \
 488,480,478,472,480,480,488,480,480,480,480,472,480,480,480,536, /*928-943*/ \
 477,512,480,480,480,536,480,477,479,480,480,792,511,512,512,512, /*944-959*/ \
 493,512,501,512,527,512,528,536,488,536,512,536,512,512,535,528, /*960-975*/ \
 508,534,512,512,512,512,544,512,532,512,528,534,536,536,544,536, /*976-991*/ \
 535,540,528,528,610,536,528,528,609,612,608,536,544,612,544,536, /*992-1007*/ \
 540,536,612,536,607,536,612,610,610,612,612,612,612,544,612,611 /*1008-1023*/ \

#define MPFR_MUL_THRESHOLD 9 /* limbs */
#define MPFR_SQR_THRESHOLD 14 /* limbs */
#define MPFR_DIV_THRESHOLD 3 /* limbs */
#define MPFR_EXP_2_THRESHOLD 580 /* bits */
#define MPFR_EXP_THRESHOLD 10480 /* bits */
#define MPFR_SINCOS_THRESHOLD 22904 /* bits */
#define MPFR_AI_THRESHOLD1 -12474 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 1158
#define MPFR_AI_THRESHOLD3 20165
/* Tuneup completed successfully, took 571 seconds */
