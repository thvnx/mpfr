/* Generated by MPFR's tuneup.c, 2010-10-18, gcc 3.3.5 */
/* gcc64.fsffrance.org (sparc64) with gmp 5.0.1 */


#define MPFR_MULHIGH_TAB  \
 -1,0,0,-1,0,-1,0,-1,7,-1,9,-1,11,11,11,11, \
 11,13,13,15,15,17,15,17,17,19,19,21,19,19,21,21, \
 23,23,25,25,23,30,25,30,30,30,30,30,34,34,34,34, \
 34,34,34,34,34,34,38,38,38,38,42,42,42,42,42,42, \
 42,46,42,46,46,46,46,46,50,50,50,50,50,60,50,60, \
 60,60,60,60,60,60,60,60,60,60,60,68,68,68,68,68, \
 68,68,68,68,68,68,68,68,76,76,76,76,76,76,76,76, \
 76,76,84,76,76,84,76,76,84,84,84,84,84,84,84,84, \
 84,84,84,92,92,92,92,92,92,92,92,92,92,92,92,92, \
 100,92,100,100,100,100,100,100,100,100,100,100,120,100,120,120, \
 120,120,120,120,120,120,120,120,120,120,120,120,120,120,120,120, \
 119,120,119,120,120,120,120,120,136,136,136,136,136,136,136,136, \
 136,136,136,136,136,136,136,136,136,136,136,136,136,136,136,136, \
 152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152, \
 152,152,152,152,152,168,168,168,168,168,168,152,189,201,200,201, \
 189,201,200,201,201,201,201,201,201,201,201,201,201,201,201,201, \
 201,201,200,201,201,201,201,201,201,201,201,201,201,201,201,201, \
 201,201,201,201,201,201,201,201,201,201,201,201,201,201,201,201, \
 200,201,225,201,200,201,201,201,201,201,201,201,225,201,201,225, \
 225,225,224,225,225,225,225,225,225,225,224,225,225,225,225,225, \
 225,225,282,282,282,282,294,294,294,294,294,294,294,294,282,294, \
 294,294,294,294,294,294,294,294,294,294,294,294,294,294,294,294, \
 294,294,294,294,294,293,294,294,294,294,294,294,294,294,294,294, \
 294,294,294,294,294,294,293,294,294,294,294,294,294,294,294,294, \
 318,294,294,294,294,294,294,294,294,294,294,294,294,294,294,294, \
 294,294,294,294,360,360,360,360,360,354,360,360,360,360,359,354, \
 360,354,360,360,360,360,360,360,360,360,360,360,360,360,360,360, \
 359,360,360,360,360,360,360,360,360,360,360,359,360,360,360,360, \
 360,360,360,360,360,359,360,360,360,359,360,360,360,360,360,360, \
 360,360,360,360,360,360,360,360,360,392,392,360,392,392,392,392, \
 392,392,392,392,392,392,392,392,392,392,392,392,392,392,392,392, \
 392,392,392,392,392,392,392,392,392,392,392,392,392,392,392,392, \
 392,391,392,392,424,424,424,423,424,424,424,423,424,424,424,424, \
 424,424,424,423,424,472,424,472,471,472,472,472,472,472,472,472, \
 472,472,472,472,471,472,471,472,471,472,471,472,472,472,472,472, \
 472,472,471,472,472,472,472,472,471,472,472,472,472,472,472,472, \
 472,472,472,471,472,472,471,472,472,472,471,472,472,472,471,472, \
 472,472,472,472,472,472,472,472,472,472,472,472,472,472,472,472, \
 472,472,472,472,472,472,472,472,472,472,472,472,472,472,472,472, \
 472,472,472,472,472,472,471,472,472,472,472,472,472,472,472,472, \
 536,472,536,472,536,536,536,536,536,536,535,536,536,536,536,536, \
 536,536,535,536,535,536,535,536,535,536,600,536,599,600,536,536, \
 600,600,600,600,600,600,599,600,600,600,599,600,592,591,600,600, \
 600,600,599,600,600,600,600,600,600,600,600,600,600,600,600,600, \
 600,600,600,600,599,600,600,600,600,598,599,600,600,600,600,600, \
 599,600,600,600,600,600,600,600,600,600,600,600,600,600,600,600, \
 600,600,599,600,600,600,599,600,600,600,600,600,600,600,599,600, \
 599,600,599,600,599,600,599,600,600,600,600,600,600,600,600,600, \
 664,600,664,600,664,664,600,664,664,600,664,664,663,664,663,664, \
 664,664,664,664,664,664,664,664,663,664,664,664,663,664,663,664, \
 663,664,663,664,664,664,664,664,664,664,664,664,663,664,664,664, \
 663,664,664,664,664,664,663,664,663,664,664,664,664,664,663,664, \
 664,664,663,664,663,664,664,664,663,664,663,664,663,664,664,664, \
 663,664,663,664,728,664,663,664,727,728,664,728,728,728,727,727, \
 728,728,728,728,727,728,728,728,727,728,728,728,727,728,727,728, \
 728,728,728,728,727,728,728,728,727,728,728,728,728,728,727,728, \
 727,727,728,728,728,728,728,728,727,728,727,728,728,728,727,728, \
 728,728,728,728,728,728,727,728,727,728,792,792,728,792,727,728, \
 728,728,728,792,728,792,792,728,792,728,791,792,792,792,792,792, \
 791,728,792,792,792,792,791,792,792,792,792,792,792,792,791,792, \
 791,792,792,790,791,792,792,792,791,792,791,792,792,792,792,792, \
 791,792,792,792,791,792,791,792,792,792,791,792,791,792,792,792, \
 792,792,792,791,792,792,792,792,791,792,792,792,791,792,792,792, \
 792,791,792,792,792,792,792,792,792,792,792,791,791,792,791,792 \
  
#define MPFR_SQRHIGH_TAB  \
 -1,0,0,0,0,-1,5,5,5,7,7,7,7,7,9,9, \
 11,11,11,11,11,11,13,13,13,13,15,14,15,16,16,17, \
 18,20,18,18,19,20,21,20,21,24,22,24,25,26,24,25, \
 27,28,27,28,29,30,30,31,30,29,33,31,32,33,34,35, \
 36,34,34,35,36,37,38,39,40,40,38,39,39,41,42,43, \
 44,47,48,49,50,44,48,49,50,51,47,48,47,48,49,50, \
 51,52,53,50,53,54,53,52,53,54,55,56,57,58,56,58, \
 57,62,58,58,61,60,61,62,61,64,63,62,63,64,65,64, \
 67,72,72,72,72,72,72,74,72,76,76,76,76,76,76,78, \
 76,80,82,80,75,80,80,82,82,84,82,80,84,84,84,86, \
 88,88,86,88,88,84,84,84,85,88,86,86,88,88,88,90, \
 90,89,90,92,96,96,96,94,96,96,98,94,104,96,96,98, \
 98,100,117,100,99,100,117,116,118,117,117,119,120,116,116,119, \
 119,119,116,117,116,119,126,117,116,119,119,121,120,125,124,119, \
 125,119,131,127,128,131,134,131,132,134,128,126,129,143,133,134, \
 131,144,135,137,135,131,128,137,137,140,143,141,137,137,130,138, \
 131,138,138,137,136,135,149,140,143,146,146,143,146,149,147,147, \
 149,146,147,152,153,147,153,150,155,142,147,146,160,160,158,170, \
 165,167,167,164,167,164,161,164,173,158,164,164,173,166,161,164, \
 169,174,173,162,170,168,173,176,173,171,180,173,174,174,173,167, \
 171,170,174,173,182,176,165,176,176,194,167,182,184,188,191,172, \
 189,169,170,171,180,180,182,173,177,185,174,182,189,188,185,176, \
 179,180,180,180,179,185,188,182,183,188,190,188,198,194,189,192, \
 198,194,196,200,201,188,190,195,201,204,191,213,207,212,213,213, \
 225,212,213,213,213,225,216,197,197,218,222,224,225,224,224,224, \
 225,228,227,230,225,212,213,237,237,212,237,237,218,242,237,243, \
 225,225,237,237,243,242,237,230,231,228,237,237,249,236,336,336, \
 336,336,336,336,336,336,336,336,336,336,336,336,336,336,336,336, \
 336,336,336,336,336,336,336,336,336,336,336,336,336,336,336,336, \
 336,336,336,336,342,336,336,336,341,336,342,336,336,336,336,336, \
 336,336,336,336,336,336,336,336,341,336,342,336,336,336,342,336, \
 336,336,336,336,336,336,336,336,336,336,336,336,336,336,336,336, \
 341,342,342,336,336,336,336,336,341,342,336,342,336,336,336,336, \
 336,336,336,336,336,336,336,342,336,342,342,342,342,336,342,348, \
 341,342,354,342,354,348,354,342,348,336,342,342,342,360,342,354, \
 348,366,342,366,360,353,354,354,353,360,354,354,354,360,360,354, \
 360,360,366,366,366,359,336,342,336,336,336,336,336,336,336,336, \
 336,336,342,336,336,336,336,342,336,336,342,342,342,341,342,342, \
 348,342,342,348,342,348,354,342,348,354,348,348,354,348,360,354, \
 456,360,360,360,360,456,360,366,365,360,366,366,456,456,366,366, \
 456,378,456,366,456,456,455,378,372,366,366,366,366,377,384,378, \
 456,366,378,378,456,456,472,464,471,471,472,472,456,456,472,456, \
 456,456,456,472,456,456,472,456,456,456,464,342,456,471,472,472, \
 456,471,472,472,456,348,472,456,456,456,455,455,456,456,455,456, \
 456,456,456,455,456,456,455,456,456,456,456,455,456,456,455,464, \
 456,456,456,455,456,456,455,456,456,456,456,455,456,464,472,472, \
 456,456,456,472,464,456,480,472,456,456,480,472,464,456,480,480, \
 472,456,472,472,471,464,472,472,488,488,480,472,479,456,472,472, \
 472,414,402,480,488,488,426,426,496,488,426,426,456,456,426,456, \
 456,456,456,455,456,456,455,456,456,456,456,455,456,456,455,455, \
 456,456,455,456,456,456,455,456,456,456,455,456,456,456,455,456, \
 456,456,456,455,456,456,472,456,456,456,456,472,464,471,472,456, \
 456,456,472,472,456,456,472,472,479,456,472,480,480,488,480,480, \
 488,488,472,472,488,488,464,487,488,488,472,472,479,456,472,472, \
 471,488,480,480,488,456,480,455,456,488,455,455,456,456,456,456, \
 456,456,456,496,456,464,455,455,464,456,456,472,464,471,464,472, \
 472,456,464,463,464,471,470,472,471,471,472,472,488,479,472,472, \
 479,488,480,480,488,488,488,480,480,480,496,488,488,488,488,487, \
 488,488,496,496,496,496,512,496,496,496,504,512,511,512,512,512, \
 520,511,512,512,512,520,512,512,519,520,520,519,520,520,517,520, \
 520,520,527,519,528,535,528,528,535,528,536,528,535,512,536,512, \
 536,552,536,536,552,552,544,544,551,552,566,568,567,552,568,568, \
 567,567,568,568,567,567,566,536,512,560,512,512,560,567,568,568, \
 567,575,568,568,568,584,568,568,600,584,600,598,599,599,600,600 \
  
#define MPFR_DIVHIGH_TAB  \
 0,1,2,2,2,5,6,5,6,7,8,9,8,11,10,11, \
 12,10,14,10,11,12,13,14,15,15,14,14,15,15,15,17, \
 18,19,18,21,20,20,20,21,23,22,27,27,27,27,31,31, \
 27,27,31,31,29,30,31,31,30,30,31,30,30,35,31,39, \
 38,35,34,35,35,38,39,39,38,37,42,39,43,43,39,47, \
 44,43,54,54,54,54,54,54,54,54,54,54,54,54,54,54, \
 54,54,60,60,55,54,54,54,60,58,60,54,54,58,60,60, \
 62,58,60,60,60,60,63,62,68,68,68,68,68,68,76,76, \
 67,68,76,76,68,68,76,76,76,76,76,73,75,74,76,73, \
 73,76,76,76,84,84,76,84,81,84,84,86,84,86,84,92, \
 90,84,86,92,84,84,92,84,84,108,92,108,108,108,92,92, \
 108,108,92,108,108,108,92,108,108,108,120,120,120,108,120,120, \
 108,120,120,120,108,108,108,108,120,108,120,120,108,108,120,120, \
 120,120,120,120,108,120,120,120,120,120,120,120,120,120,120,120, \
 120,136,120,120,120,120,120,120,136,136,120,120,136,134,120,120, \
 136,136,136,136,136,130,136,136,136,136,136,136,135,136,136,152, \
 136,136,152,136,136,136,152,152,136,136,152,152,136,136,152,152, \
 152,152,152,152,152,152,152,152,152,152,152,152,152,152,152,152, \
 152,152,152,152,153,168,152,151,152,168,168,152,152,152,152,152, \
 168,168,168,168,168,168,168,166,167,168,167,168,168,168,168,168, \
 168,168,184,168,168,168,184,184,167,184,184,184,184,167,184,184, \
 168,172,184,184,184,184,184,184,176,216,176,184,184,184,200,184, \
 184,216,184,184,216,184,184,184,184,216,216,184,216,216,216,216, \
 216,216,216,240,216,216,240,240,216,216,240,240,216,216,216,240, \
 216,216,240,240,216,216,240,240,216,240,240,239,216,216,240,240, \
 216,240,240,240,216,240,240,240,216,240,240,240,216,239,240,240, \
 240,240,240,240,237,240,240,240,240,240,240,240,237,240,240,240, \
 240,240,240,240,240,238,240,240,240,240,240,240,240,240,240,240, \
 238,240,240,240,240,240,240,240,240,240,240,240,240,238,240,239, \
 272,272,240,240,272,238,240,239,240,272,240,240,272,272,240,271, \
 272,272,272,272,272,272,272,272,272,272,272,271,272,269,272,272, \
 272,272,272,272,269,269,272,270,272,272,272,272,272,272,272,272, \
 272,272,272,272,269,271,272,272,301,272,269,272,272,272,272,272, \
 272,269,272,272,272,272,272,271,269,271,272,272,272,272,272,272, \
 272,304,303,304,304,303,303,304,302,304,303,304,304,304,303,303, \
 304,304,303,304,303,304,303,304,304,304,304,303,301,301,304,303, \
 304,304,304,304,304,304,304,304,303,304,304,303,301,302,304,303, \
 304,304,303,304,302,304,304,303,302,336,304,304,336,336,304,304, \
 336,336,336,336,336,336,336,336,336,336,336,336,336,336,336,336, \
 336,336,336,336,335,336,336,336,336,336,336,336,336,336,336,336, \
 336,336,336,336,336,336,336,336,336,336,336,336,336,336,336,336, \
 336,336,336,368,336,336,336,334,336,336,336,336,336,336,336,336, \
 336,400,368,368,400,400,400,368,399,368,367,368,400,400,368,368, \
 400,400,400,368,400,399,368,399,365,366,368,368,400,400,368,367, \
 368,400,368,368,366,368,368,368,400,400,368,400,400,400,367,368, \
 361,368,368,368,400,400,368,368,368,368,368,368,400,398,368,368, \
 400,399,400,400,400,399,400,400,400,400,399,400,400,400,399,400, \
 400,400,400,400,400,398,400,400,400,400,432,397,399,400,401,432, \
 399,400,432,397,400,400,400,398,400,400,400,432,400,400,429,432, \
 432,432,432,397,432,400,432,432,431,400,432,432,400,432,432,432, \
 432,432,432,432,432,432,432,432,432,432,432,432,432,432,432,480, \
 432,432,432,480,432,432,432,432,432,432,480,480,432,432,432,480, \
 480,432,432,480,432,432,432,480,432,432,432,432,480,432,432,480, \
 432,432,432,432,431,432,432,480,432,432,432,432,431,432,432,432, \
 432,480,480,480,480,476,480,480,480,444,480,479,480,474,480,480, \
 480,480,480,480,477,480,480,480,480,480,480,480,480,478,480,479, \
 477,478,480,480,477,480,480,480,476,476,476,480,477,480,480,480, \
 480,478,480,480,480,478,480,480,480,480,480,480,478,480,480,480, \
 480,480,480,480,480,480,480,480,480,480,480,480,480,479,480,480, \
 478,478,480,480,480,478,480,480,544,478,480,480,480,480,480,543, \
 480,544,496,544,543,542,544,544,544,544,544,544,542,544,542,544, \
 544,544,542,544,544,543,542,543,543,542,542,544,544,544,544,542, \
 561,544,544,544,544,544,544,557,561,544,608,559,559,560,560,608, \
 561,562,558,561,559,598,608,586,564,575,585,575,573,574,608,587 \
  
#define MPFR_MUL_THRESHOLD 52 /* limbs */
#define MPFR_SQR_THRESHOLD 31 /* limbs */
#define MPFR_EXP_2_THRESHOLD 1092 /* bits */
#define MPFR_EXP_THRESHOLD 11135 /* bits */
#define MPFR_SINCOS_THRESHOLD 25770 /* bits */
#define MPFR_AI_THRESHOLD1 -19352 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 1476
#define MPFR_AI_THRESHOLD3 30069
/* Tuneup completed successfully, took 8136 seconds */
