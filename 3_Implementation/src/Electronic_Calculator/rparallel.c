#include "electronic.h"
#include "mainmenu.h"

float Rparllel(float R1,float R2,float R3) 
{
float R_parllel; 
R_parllel = (1/R1)+(1/R2)+(1/R3);
return R_parllel;
}