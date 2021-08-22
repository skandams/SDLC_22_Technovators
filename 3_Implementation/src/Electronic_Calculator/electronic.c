#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "electronic.h"
#include "mainmenu.h"

float Voltage(float I, float R);
float Current(float V, float R);
float Resistancer(float V, float I);
float Power(float I, float R);
float Rseries(float R1,float R2,float R3);
float Rparllel(float R1,float R2,float R3);
float V_to_I_trans(float v, float r);
float I_to_V_trans(float i, float r);
void opt_3();

void electronicCalcMenu()
{
    printf("\nEnter your choice\n");
    printf("0. For More options\n");
    printf("1. Calculate Current\n");
    printf("2. Calculate Voltage\n");
    printf("3. Calculate Resitance\n");
    printf("4. Calculate Power\n");
    printf("5. Calculate Resistance in Series\n");
    printf("6. Calculate Resistance in Parellel\n");
}

void electronicCalc()
{  
    float V,I,P,R_series,R_parllel,R,R1,R2,R3;
    int menu=50;
    while(menu != 0)
    {
        electronicCalcMenu();
        printf("Select from Menu : ");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1: printf("Calculate Current\n");
                printf("Enter value of Voltage: ");
                scanf("%f",&V);
                printf("Enter value of Resistance : ");
                scanf("%f",&R);
                printf("I =  %f \n", Current(V,R));   
                break;
        case 2: printf("Calculate Voltage\n");
                printf("Enter value of Current : ");
                scanf("%f",&I);
                printf("Enter value of Resistance : ");
                scanf("%f",&R);
                printf("V=  %f \n", Voltage(I,R)); 
                break;
        case 3: printf("Calculate Resistance");
                printf("Enter value of Voltage : ");
                scanf("%f",&V);
                printf("Enter value of Resistance : ");
                scanf("%f",&I);
                printf("R=  %f \n", Resistancer(V,I)); 
                break;
        case 4: printf("Calculate Power");
                printf("Enter value of Current : ");
                scanf("%f",&I);
                printf("Enter value of Resistance : ");
                scanf("%f",&R);
                printf("P=  %f \n", Power(I,R)); 
                break;
        case 5: printf("Calculate Resistance in series");
                printf("Enter value of R1 : ");
                scanf("%f",&R1);
                printf("Enter value of R2 : ");
                scanf("%f",&R2);
                printf("Enter value of R3 : ");
                scanf("%f",&R3);
                Rseries(R1,R2,R3);
                printf("Rseries=  %f \n", Rseries(R1,R2,R3)); 
                break;
        case 6: printf("Calculate Resistance in parllel\n");
                printf("Enter value of R1 : ");
                scanf("%f",&R1);
                printf("Enter value of R2 : ");
                scanf("%f",&R2);
                printf("Enter value of R3 : ");
                scanf("%f",&R3);
                printf("Rparallel=  %f \n", Rparllel(R1,R2,R3)); 
                break;
        case 7: printf("V to I transformation\n");
                printf("Enter the value of Source : ");
                scanf("%f",&V);
                printf("Enter value of Resistance : ");
                scanf("%f",&R);
                V_to_I_trans(V,R);
                break;
        case 8: printf("I to V transformation\n");
                printf("Enter the value of Source : ");
                scanf("%f",&I);
                printf("Enter value of Resistance : ");
                scanf("%f",&R);
                I_to_V_trans(I,R);
                break;        
        case 0: opt_3(); break;        
        }
    }
    main_menu(); 
}


void opt_3()
{ 
    int opt;
    printf("\n0. To exit \n1. To go to Electronic Calculator Menu. \n2. To go to the Main Menu.\n");
    scanf("%d", &opt);
    switch(opt)
    {
        case 0: exit(0); break;
        case 1: electronicCalc(); break;
        case 2: main_menu(); break;
        default: printf("Invalid input \n"); main_menu(); break;
    }
}