
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void medical_calculator()
{
     int med;
     printf("We have following function available for Medical Calculator \n");
     printf("1. BMI \n");
     printf("2. BSA Mosteller \n");
     printf("3. Ideal Weight \n");
     printf("0. Go to the main menu? \n");
     printf("Select one option \n");
     scanf("%d", &med);
     float height, weight;
     switch(med)
     {
        case 1:
        printf("Enter the height in meters: ");
        scanf("%f", &height);
        printf("\n Enter the weight in kgs:");
        scanf("%f", &weight);
        printf("\n The BMI is %f" , bmi(height,weight));
        opt_1();
        break;
         
        case 2:
        printf("Enter the height in centimeters: ");
        scanf("%f", &height);
        printf("\n Enter the weight in kgs:");
        scanf("%f", &weight);
        printf("\n The BSA is %f" , bsa(height,weight));
        opt_1();
        break;

        case 0: main_menu(); break;

        default: printf("Invalid input \n"); medical_calculator();
     }
}




float bsa(float h, float w)
{
    float bsa;
    bsa=sqrt((h*w)/3600);
    return (bsa);
}

int main()
{
     printf("Welcome to our portal \n \n");
     main_menu();
     return 0;
}