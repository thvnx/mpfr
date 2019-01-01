/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005-2019 Free Software Foundation, Inc.

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

/* Generated by MPFR's tuneup.c, 2018-02-22, gcc 7.3.0 */
/* tomate.loria.fr Intel(R) Core(TM) i5-4590 CPU @ 3.30GHz with GMP 6.1.2,
   where GMP defines -mtune=haswell */

#define MPFR_MULHIGH_TAB  \
 -1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,0,0,0,0,0,0,0,0,24,26,28,28,28,28,28, \
 30,30,32,32,30,32,30,34,36,36,38,36,38,38,44,44, \
 44,44,44,44,44,48,44,44,48,44,48,52,52,48,56,56, \
 56,56,56,56,56,56,56,56,60,56,60,64,64,64,60,64, \
 64,68,64,64,64,64,72,68,68,72,63,72,64,64,68,64, \
 81,72,72,84,81,81,86,81,81,81,87,87,81,87,87,84, \
 80,84,87,90,87,86,93,87,92,93,93,96,96,93,96,93, \
 96,93,104,104,105,105,105,105,104,105,105,108,105,108,104,108, \
 104,108,111,104,117,108,114,116,116,116,117,114,116,129,117,114, \
 128,129,129,132,132,134,132,117,141,141,132,140,141,132,138,141, \
 141,141,141,144,140,141,138,141,144,144,141,144,141,141,140,141, \
 141,141,140,141,141,141,144,165,144,165,165,164,163,165,164,164, \
 164,168,165,168,164,164,164,165,165,164,165,168,168,165,164,165, \
 164,164,164,176,165,177,164,165,168,168,165,165,168,168,168,174, \
 177,176,177,177,177,189,188,189,177,180,177,180,189,187,188,188, \
 189,189,189,189,189,188,189,192,220,192,220,220,219,220,220,219, \
 220,219,220,220,220,219,220,220,219,220,220,219,220,219,220,220, \
 220,220,220,219,220,220,220,224,219,224,220,234,234,236,236,236, \
 236,235,235,240,235,236,236,236,236,236,235,236,236,251,235,236, \
 236,252,252,252,252,252,252,252,236,251,251,256,252,252,252,252, \
 250,251,252,252,251,252,251,252,284,252,264,280,251,252,252,284, \
 252,284,284,284,284,284,284,283,284,284,284,284,284,283,284,284, \
 283,284,284,282,284,284,283,306,306,306,306,306,306,330,330,330, \
 330,330,330,330,330,330,330,329,330,329,330,329,330,330,330,330, \
 330,330,330,330,330,330,330,330,330,330,330,330,330,330,330,330, \
 330,330,330,330,329,330,354,330,330,330,330,330,354,354,354,353, \
 354,354,354,353,354,330,354,354,330,354,354,330,330,354,330,378, \
 330,378,378,330,330,330,378,354,378,378,354,378,378,354,378,377, \
 378,378,377,378,354,354,354,354,354,354,354,378,354,354,378,378, \
 378,378,378,378,378,378,378,378,378,378,378,378,378,378,378,440, \
 440,439,439,378,440,440,440,440,440,440,440,439,440,439,440,440, \
 439,440,440,440,440,440,440,440,440,440,440,440,440,439,440,439, \
 439,440,439,440,440,440,440,440,440,440,440,440,440,440,440,440, \
 440,440,440,440,440,440,439,440,440,440,440,440,440,440,439,440, \
 440,440,440,472,472,439,440,472,471,472,440,439,440,440,440,472, \
 472,440,472,472,471,472,472,472,472,472,472,472,472,472,472,472, \
 504,472,471,504,504,504,472,504,472,472,470,472,472,472,472,472, \
 504,472,472,504,504,504,503,504,504,504,504,503,504,504,503,504, \
 504,504,504,504,504,503,504,504,504,504,504,503,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,503,503,504,504,504,504,536,536,536, \
 568,504,568,568,567,568,568,568,567,568,568,567,568,568,568,568, \
 566,568,568,568,567,568,568,568,567,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,567,568,568,568,568,568,568,568, \
 568,568,568,568,568,567,568,567,568,568,566,568,568,568,568,568, \
 640,568,640,639,640,640,568,568,640,640,640,640,640,640,640,640, \
 639,640,640,640,640,640,640,640,639,640,640,639,640,640,640,640, \
 640,639,640,640,640,640,640,640,640,640,640,638,640,640,640,640, \
 640,640,640,640,640,640,640,640,640,640,640,640,664,664,664,639, \
 639,640,664,640,640,639,640,639,640,640,640,639,640,640,640,640, \
 640,640,640,639,640,688,688,640,640,688,688,640,687,688,664,663, \
 640,664,688,688,688,688,663,664,736,663,664,664,663,664,712,664, \
 664,664,688,664,712,712,736,640,688,736,736,736,736,736,736,736, \
 688,736,736,736,736,736,736,736,735,736,736,736,736,736,736,736, \
 736,736,736,736,736,736,736,736,735,735,736,736,736,735,736,736, \
 735,736,736,736,735,736,736,735,735,736,735,736,736,736,735,736, \
 736,736,736,736,736,736,735,736,735,736,736,736,736,736,736,736, \
 736,736,735,736,736,736,736,736,736,736,736,736,736,736,735,736, \
 736,736,736,735,736,736,736,735,736,736,760,736,734,736,736,736, \
 832,736,784,760,830,760,832,760,736,832,832,832,736,832,832,832, \
 832,832,832,831,832,832,831,831,832,831,831,832,832,831,832,831, \
 832,832,832,832,832,831,736,831,832,832,832,832,832,831,831,832 \

#define MPFR_SQRHIGH_TAB  \
 -1,-1,-1,-1,-1,-1,-1,-1,-1,7,8,7,8,8,9,9, \
 10,10,12,12,12,12,13,13,14,15,15,16,17,17,18,19, \
 19,19,19,20,21,22,22,23,23,23,23,23,24,24,26,25, \
 26,27,28,27,29,29,31,29,31,30,33,32,33,33,33,33, \
 40,38,40,40,40,44,42,40,42,44,44,46,44,42,48,48, \
 48,48,50,52,50,50,48,50,50,52,52,56,54,56,58,55, \
 56,58,58,61,60,61,62,64,64,56,66,68,60,62,58,72, \
 72,76,76,76,76,72,80,80,80,72,76,76,76,76,76,80, \
 88,80,76,76,80,76,76,80,88,76,79,84,84,88,84,88, \
 85,88,92,92,84,92,92,90,91,92,96,92,94,92,94,100, \
 96,92,92,94,85,100,92,96,88,100,96,96,100,91,94,92, \
 100,94,95,96,98,96,101,100,100,117,100,100,112,100,104,108, \
 106,108,111,117,117,117,126,123,120,120,120,117,126,126,123,129, \
 128,128,128,128,126,131,128,129,132,129,132,135,129,137,136,135, \
 138,135,132,141,136,144,140,144,141,138,150,147,147,147,142,138, \
 146,138,147,144,144,150,152,144,147,147,147,162,156,164,165,162, \
 158,152,162,156,161,162,168,156,168,170,168,171,167,170,171,168, \
 174,175,174,171,159,164,170,170,150,183,176,176,168,168,177,180, \
 176,170,160,174,176,171,177,171,176,176,177,183,176,174,177,174, \
 174,177,176,183,176,177,180,177,180,175,176,183,195,180,194,182, \
 183,189,192,192,189,177,183,189,195,192,189,201,195,195,186,195, \
 201,201,201,200,200,198,225,219,224,225,204,213,213,225,213,222, \
 222,219,227,221,222,212,231,222,228,225,224,224,228,227,228,240, \
 225,219,225,228,228,224,224,227,237,227,228,228,225,225,225,228, \
 228,237,231,237,231,236,249,237,249,243,240,240,237,249,249,243, \
 249,237,261,260,261,261,249,260,249,248,261,249,261,261,261,261, \
 261,261,260,261,264,272,273,273,236,237,273,261,273,237,273,261, \
 273,273,273,273,264,240,273,261,273,261,273,273,273,273,261,248, \
 249,267,273,273,261,261,261,261,261,264,273,264,261,273,270,272, \
 273,272,273,276,273,272,273,267,273,273,272,276,285,285,285,285, \
 276,276,285,285,283,288,285,296,296,285,285,273,285,294,297,273, \
 297,297,296,273,309,297,273,285,297,296,285,308,309,272,285,297, \
 297,276,309,297,297,321,297,296,297,295,285,297,297,297,297,295, \
 297,297,309,297,309,309,297,296,321,295,307,321,321,312,348,309, \
 348,348,309,348,309,347,348,348,324,321,321,363,319,347,364,356, \
 363,348,333,363,361,348,348,364,364,347,348,362,364,364,380,346, \
 364,348,347,347,364,348,364,362,364,363,362,364,364,364,363,364, \
 364,371,364,364,364,363,364,364,363,380,363,377,372,380,380,364, \
 364,379,371,379,380,364,380,380,379,380,379,380,364,384,363,364, \
 395,396,395,396,380,395,380,378,396,396,378,396,387,396,396,395, \
 379,410,396,395,396,395,396,395,411,426,412,412,396,425,396,426, \
 412,409,410,411,410,450,425,426,394,450,462,419,426,410,431,426, \
 425,426,432,438,432,450,432,426,432,450,438,449,450,450,456,450, \
 432,456,456,450,450,461,462,456,474,450,462,450,450,450,474,474, \
 450,474,474,474,474,474,473,474,474,474,462,474,474,474,474,474, \
 546,474,474,474,474,474,474,474,486,498,498,498,498,474,497,497, \
 498,498,498,474,498,522,521,522,522,498,522,522,521,520,521,522, \
 522,521,522,522,522,522,522,522,522,522,522,522,522,522,522,522, \
 522,522,522,522,522,545,546,546,546,546,546,545,546,544,522,546, \
 546,546,567,568,520,567,522,545,567,546,568,545,568,568,568,546, \
 568,545,546,545,546,546,546,568,568,568,568,567,568,568,568,567, \
 568,568,568,568,568,568,584,568,567,568,600,568,568,599,600,600, \
 568,600,600,600,600,600,600,567,600,600,568,600,599,600,600,600, \
 600,600,600,600,600,600,600,600,600,600,600,600,600,600,632,600, \
 600,600,632,632,616,632,600,600,600,631,600,632,600,616,600,632, \
 632,600,600,632,632,600,632,600,632,600,600,600,600,600,600,599, \
 600,599,600,600,600,599,600,631,600,600,600,600,600,600,600,632, \
 599,640,600,600,600,632,632,600,600,632,632,631,632,632,632,630, \
 632,632,632,631,640,696,632,632,632,632,630,631,632,631,648,695, \
 632,695,696,695,632,631,632,647,648,648,648,696,695,696,696,712, \
 695,664,695,696,695,695,696,695,696,696,696,696,664,695,696,728, \
 712,727,728,727,696,728,664,663,696,664,664,728,728,664,696,696, \
 696,696,696,696,696,695,696,696,696,695,696,696,695,695,696,696, \
 695,696,695,695,695,696,696,696,696,728,726,728,728,728,727,728 \

#define MPFR_DIVHIGH_TAB  \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*0-15*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*16-31*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*32-47*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*48-63*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*64-79*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*80-95*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*96-111*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*112-127*/ \
 68,68,0,0,75,69,0,0,71,78,72,73,74,72,78,74, /*128-143*/ \
 77,84,78,79,78,84,84,77,80,79,80,82,80,80,88,84, /*144-159*/ \
 84,84,83,93,84,91,86,92,90,88,92,90,90,94,96,95, /*160-175*/ \
 94,94,96,96,96,96,98,94,100,98,100,96,97,104,106,100, /*176-191*/ \
 98,98,102,106,102,106,106,112,109,103,112,112,110,104,112,111, /*192-207*/ \
 109,112,110,118,110,128,112,116,126,112,128,132,128,128,128,128, /*208-223*/ \
 124,127,128,122,129,128,125,126,127,125,128,127,128,125,136,128, /*224-239*/ \
 128,128,136,128,136,128,144,132,130,144,135,132,132,136,136,134, /*240-255*/ \
 142,144,144,134,144,137,136,150,135,143,136,146,140,144,144,142, /*256-271*/ \
 144,144,144,143,144,149,162,144,144,162,144,144,156,144,167,146, /*272-287*/ \
 148,150,162,150,155,150,150,158,154,156,162,168,164,160,168,162, /*288-303*/ \
 156,168,160,164,160,160,158,158,160,159,160,168,166,166,180,164, /*304-319*/ \
 168,168,184,180,165,174,174,174,172,179,174,174,190,185,186,180, /*320-335*/ \
 182,184,185,185,186,186,186,192,192,184,187,200,188,184,184,180, /*336-351*/ \
 196,180,184,186,186,198,192,189,185,186,192,184,191,186,196,186, /*352-367*/ \
 189,192,190,216,196,189,195,200,192,197,192,192,192,206,204,196, /*368-383*/ \
 200,214,210,207,216,198,216,210,198,216,214,216,216,208,216,216, /*384-399*/ \
 208,216,222,224,228,216,216,216,208,216,216,232,228,214,212,218, /*400-415*/ \
 216,216,218,220,214,216,221,228,220,224,218,224,220,216,224,232, /*416-431*/ \
 232,220,228,228,264,233,232,228,228,233,232,256,252,228,228,256, /*432-447*/ \
 232,264,232,264,256,254,256,232,264,255,252,257,258,264,268,276, /*448-463*/ \
 254,251,264,268,264,248,256,268,254,264,256,256,252,255,258,256, /*464-479*/ \
 256,257,264,252,264,256,268,272,256,267,256,276,272,287,272,264, /*480-495*/ \
 256,257,272,276,268,264,264,264,270,272,288,268,269,280,288,288, /*496-511*/ \
 280,284,282,288,276,288,279,288,288,281,286,288,280,272,272,280, /*512-527*/ \
 288,288,294,281,276,288,288,288,288,288,280,288,288,287,288,288, /*528-543*/ \
 284,288,288,287,288,291,288,288,288,288,324,324,287,288,287,312, /*544-559*/ \
 288,288,288,305,324,292,309,288,312,328,288,311,336,327,330,300, /*560-575*/ \
 318,330,312,336,327,321,324,336,330,324,335,327,335,336,336,336, /*576-591*/ \
 336,324,352,335,360,329,344,329,318,329,336,328,336,336,324,335, /*592-607*/ \
 323,336,336,336,336,328,336,325,360,324,336,328,316,335,336,332, /*608-623*/ \
 324,360,334,323,328,360,360,384,328,360,330,336,336,336,368,328, /*624-639*/ \
 335,371,336,335,372,372,335,336,372,336,336,348,330,356,360,370, /*640-655*/ \
 336,336,384,336,340,368,336,384,346,360,348,372,348,366,376,368, /*656-671*/ \
 340,347,368,360,384,384,372,348,384,376,368,360,384,344,369,384, /*672-687*/ \
 372,360,384,360,366,372,368,352,392,360,377,384,383,368,384,384, /*688-703*/ \
 384,384,372,369,384,383,384,376,382,364,376,384,378,376,384,384, /*704-719*/ \
 376,382,372,375,384,383,372,384,408,378,384,384,384,384,416,432, /*720-735*/ \
 384,384,432,419,384,424,384,440,417,440,392,380,408,376,424,378, /*736-751*/ \
 432,384,440,392,444,400,440,440,384,384,440,384,448,384,448,432, /*752-767*/ \
 448,432,432,432,416,440,440,400,440,440,438,432,432,432,448,440, /*768-783*/ \
 444,444,440,436,440,444,420,436,432,432,440,456,420,443,420,420, /*784-799*/ \
 456,432,431,432,424,432,464,440,432,466,432,448,456,463,460,448, /*800-815*/ \
 440,420,448,448,444,431,440,440,416,440,433,439,440,456,440,456, /*816-831*/ \
 434,454,432,432,431,440,440,440,464,428,428,436,440,440,432,440, /*832-847*/ \
 432,436,436,439,436,440,432,440,438,445,456,440,456,448,456,440, /*848-863*/ \
 456,464,464,440,456,448,451,440,447,512,440,440,446,446,448,456, /*864-879*/ \
 448,456,452,460,453,455,456,456,448,455,463,464,480,464,463,464, /*880-895*/ \
 480,452,480,528,466,468,456,457,480,467,464,468,504,504,460,467, /*896-911*/ \
 480,512,464,484,466,468,512,472,504,504,504,504,504,528,478,479, /*912-927*/ \
 504,480,504,520,504,520,504,504,512,512,472,512,512,528,512,512, /*928-943*/ \
 528,512,502,528,504,536,536,520,528,528,552,536,512,511,528,512, /*944-959*/ \
 536,560,512,512,488,528,512,536,552,528,512,576,560,560,576,576, /*960-975*/ \
 504,560,512,560,560,511,512,552,528,512,512,512,568,576,512,512, /*976-991*/ \
 512,528,528,568,528,512,504,576,576,528,512,576,544,504,576,512, /*992-1007*/ \
 512,536,528,560,528,540,536,576,568,536,544,536,536,576,527,544 /*1008-1023*/ \

#define MPFR_MUL_THRESHOLD 12 /* limbs */
#define MPFR_SQR_THRESHOLD 19 /* limbs */
#define MPFR_DIV_THRESHOLD 3 /* limbs */
#define MPFR_EXP_2_THRESHOLD 894 /* bits */
#define MPFR_EXP_THRESHOLD 6522 /* bits */
#define MPFR_SINCOS_THRESHOLD 23540 /* bits */
#define MPFR_AI_THRESHOLD1 -14260 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 1680
#define MPFR_AI_THRESHOLD3 24368
/* Tuneup completed successfully, took 342 seconds */
