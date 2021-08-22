#include "header.h"

float kcal(float w, float h, int age, char gender, int choice)
{
    float bm;
    bm=bmr(w,h,age,gender);
    switch(choice)
    {
        case 1:
        return(bm*1.2);break;
        case 2:
        return(bm*1.375);break;
        case 3:
        return(bm*1.55);break;
        case 4:
        return(bm*1.725);break;
        case 5:
        return(bm*1.9);break;
        default:
        break;
    }
}