#include <16F84A.h>

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES HS                       //High speed Osc (> 4mhz for PCM/PCH) (>10mhz for PCD)

#use delay(clock=4000000)

#define Fx1   PIN_B0
#define Fx2   PIN_B1
#define Fx3   PIN_B2
#define Fy1   PIN_B3
#define Fy2   PIN_B4
#define Fy3   PIN_B5
#define Fz1   PIN_B6
#define Fz2   PIN_B7
#define Fz3   PIN_A0

#define DELAY 1
