#include "electronic.h"
#include "mainmenu.h"

float Resistancer(float V, float I)
{
float R; 
R = V/I;
return R;
}