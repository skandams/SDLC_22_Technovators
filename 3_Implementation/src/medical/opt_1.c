#include "header.h"

void opt_1()
{ 
    int opt;
    printf("\n \n");
    printf("1. To go to Medical Menu. \n 2. To go to the Main Menu. \n 0. To exit \n");
    scanf("%d", &opt);

    switch(opt)
    {
        case 1: medical_calculator(); break;
        case 2: main_menu(); break;
        case 0: exit(0); break;
        default: printf("Invalid input \n"); main_menu(); break;
    }
}