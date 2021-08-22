#include "electronic.h"
#include "mainmenu.h"

float Power(float I, float R) 
{
float P; 
P = ((I*I)/R);
return P;
}
