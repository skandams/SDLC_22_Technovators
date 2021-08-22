#include "electronic.h"
#include "mainmenu.h"

float Voltage(float I, float R)
{
float V; 
V = I*R;
return V;
}