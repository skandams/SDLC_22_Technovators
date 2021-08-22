#include "electronic.h"
#include "mainmenu.h"

float Rseries(float R1,float R2,float R3) 
{
float R_series; 
R_series = R1+R2+R3;
return R_series;
}
