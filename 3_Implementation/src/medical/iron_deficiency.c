#include "header.h" //including header file
// function to calculate Iron deficiency
//a =
float iron_deficiency(float weight,float targethaemo,float actualhaemo,float ironstore){
//declaring variable
    float irondeficiency;
    //calculating parameter
   irondeficiency=weight*(targethaemo-actualhaemo)*2.4+ironstore;
   
    return (irondeficiency);


}