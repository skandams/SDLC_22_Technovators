#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#ifndef __HEADER_H
#define __HEADER_H

void medical_calculator();
void main_menu();
void opt_1();
int gds(int scale);
float bfp(float h, float w, int age, char gender);
float bmi(float h, float w);
float rfm(char gender, float h, float w);
float kcal(float w, float h, int age, char gender, int choice);
float bsa(float h, float w);
float iron_deficiency(float weight,float actualhaemo,float targethaemo,float ironstore);
float waist_to_height_ratio(float height,float waist);
float waist_to_hip_ratio(float waist,float hip);
float bmr(float weight, float height,int age,char gender);
//float idealweight(float h, float w,int age,char c);

#endif