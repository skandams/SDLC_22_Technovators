
#include "header.h"
float bmr(float weight, float height,int age,char gender){


    float bmr;
    if(gender == 'f'){
        bmr=10*weight+6.25*height-5*age+5;
    }
    else if(gender== 'm')
    {
        bmr=10*weight+6.25*height-5*age-161;
    }

    
    return (bmr);
}
