#include "header.h"

float bfp(float h, float w, int age, char gender)
{
    float bfp;
    if(gender == 'f' || gender == 'F')
    {
        bfp = ((1.2*bmi(h,w)) + (0.23*age) - 5.4);
    }
    else if( gender == 'm' || gender == 'M')
    {
        bfp = ((1.2*bmi(h,w)) + (0.23*age) - 16.2);
    }
    return(bfp);
}