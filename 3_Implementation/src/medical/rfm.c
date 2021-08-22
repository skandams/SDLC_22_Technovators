#include "header.h"

float rfm(char gender, float h, float w)
{
    float rfm;
    if(gender == 'f' || gender == 'F')
    {
        rfm = (76 - (20*h/w));
    }
    else if( gender == 'm' || gender == 'M')
    {
        rfm = (64 - (20*h/w));
    }
    return(rfm);
}