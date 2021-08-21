#include "header.h"

void main_menu()
{
     int calc;
     printf("We have following four calculators available \n");
     printf("1. Medical Calculator \n");
     printf("2. Electronic Calculator \n");
     printf("3. Scientific Calculator \n");
     printf("4. Arithmetic Calculator \n");
     printf("0. Don't wanna use any calculator / Came here by mistake!  \n");
     scanf("%d", &calc);

    switch(calc)
     {
         case 1: medical_calculator(); break;
         case 0: exit(0); break;
         default: printf("Invalid input \n"); main_menu(); break;

     }
}