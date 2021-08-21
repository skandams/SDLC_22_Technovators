#ifndef __SCIENTIFICCALC_H
#define __SCIENTIFICCALC_H
#include <stdio.h>
#include <math.h>
#include "mainmenu.h"

float inverse(float n);
float naturalLog(float n);
float logarithm(float n);
float power(float n, float m);
float square(float n);
float squareRoot(float n);
float cube(float n);
float cubeRoot(float n);
float sine(float n);
float cosine(float n);
float tangent(float n);
float sineInverse(float n);
float cosineInverse(float n);
float tangentInverse(float n);
float rectToPolarMagnitude(float n,float m);
float rectToPolarAngle(float n, float m);
float polarToRectX(float n, float m);
float polarToRectY(float n, float m);
void ScientificCalculatorMenu();

void opt_2()

{ 
    int opt;
    printf("\n0. To exit \n1. To go to Scientific Calculator Menu. \n2. To go to the Main Menu.\n");
    scanf("%d", &opt);

    switch(opt)
    {
        case 0: exit(0); break;
        case 1: scientificCalc(); break;
        case 2: main_menu(); break;
        default: printf("Invalid input \n"); main_menu(); break;
    }
}
float inverse(float n)
{
    if(n==0)
    {
        printf("Divide By Zero Error\n");
    }
    else
    {
        return 1/n;
    }
}

float naturalLog(float n)
{
    float x = log(n);
    return x;
}

float logarithm(float n)
{
    float x = log10(n);
    return x;
}

float power(float n, float m)
{
    float p = pow(n,m);
    return p;
}

float square(float n)
{
    float x = pow(n,2);
    return x;
}

float squareRoot(float n)
{
    float x = pow(n,0.5);
    return x;
}

float cube(float n)
{
    float x = pow(n,3);
    return x;
}

float cubeRoot(float n)
{
    float x = pow(n,1/3);
    return x;
}

float sine(float n)
{
    float x = sin(n);
    return x;
}

float cosine(float n)
{
    float x = cos(n);
    return x;
}

float tangent(float n)
{
    float x = tan(n);
    return x;
}

float sineInverse(float n)
{
    float x = asin(n);
    return x;
}

float cosineInverse(float n)
{
    float x = acos(n);
    return x;
}

float tangentInverse(float n)
{
    float x = atan(n);
    return x;
}

float rectToPolarMagnitude(float n,float m)
{
    float x = pow(pow(n,2) + pow(m,2),0.5);
    return x;

}

float rectToPolarAngle(float n, float m)
{
    float x = 57.296 * tangentInverse((m/n));
    return x;
}

float polarToRectX(float n, float m)
{
    float x = (n * cosine(m/57.296));
    return x;
}

float polarToRectY(float n, float m)
{
    float x = (n * sine(m/57.296));
    return x;
}

void ScientificCalculatorMenu()
{
    printf("Welcome to Scientific Calculator\n");
    printf("1. Inverse\n");
    printf("2. Natural Log\n");
    printf("3. Log (base10)\n");
    printf("4. Square\n");
    printf("5. Square Root\n");
    printf("6. Cube\n");
    printf("7. Cube Root\n");
    printf("8. Power\n");
    printf("9. Sine\n");
    printf("10. Cosine\n");
    printf("11. Tangent\n");
    printf("12. Inverse Sine\n");
    printf("13. Inverse Cosine\n");
    printf("14. Inverse Tangent\n");
    printf("15. Rectangular to Polar Form\n");
    printf("16. Polar to Rectangular Form\n\n");
} 


int scientificCalc()
{
    int menu=50;
    while(menu != 0)
    {
        ScientificCalculatorMenu();
        printf("Type 0 to go to Main Menu\n");
        printf("Select from Menu : ");
        scanf("%d",&menu);
        switch (menu)
        {
            case 1: p1(); break;
            case 2: p2(); break;
            case 3: p3(); break;
            case 4: p4(); break;
            case 5: p5(); break;
            case 6: p6(); break;
            case 7: p7(); break;
            case 8: p8(); break;
            case 9: p9(); break;
            case 10: p10(); break;
            case 11: p11(); break;
            case 12: p12(); break;
            case 13: p13(); break;
            case 14: p14(); break;
            case 15: p15(); break;
            case 16: p16(); break;
        }
    }
    main_menu();
    
}
#endif