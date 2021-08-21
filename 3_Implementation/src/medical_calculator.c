#include "header.h"

void medical_calculator()
{
     int med;
     printf("We have following function available for Medical Calculator \n");
     printf("1. BMI \n");
     printf("2. BSA Mosteller \n");
     printf("3.Iron deficiency \n"); //option to choose iron deficiency calculation
     printf("4.Waist to hip ratio\n");
     printf("5.Waist to height ratio \n");
     printf("6.BMR \n");
     printf("7.Ideal body weight \n");
     printf("6.Cardiac index \n");
     printf("6.Keto calculator \n");
     printf("6.BMR \n");
     
     printf("0. Go to the main menu? \n");
     printf("Select one option \n");
     scanf("%d", &med);
     float height, weight,waist,hip,actualhaemo,targethaemo,ironstore,age;
     char gender;
     switch(med)
     {
     
         
        case 2:
        printf("Enter the height in centimeters: ");
        scanf("%f", &height);
        printf("\n Enter the weight in kgs:");
        scanf("%f", &weight);
        printf("\n The BSA is %f" , bsa(height,weight));
        opt_1();
        break;

        case 3:
        printf("Enter the weight in kgs: ");
        scanf("%f",&weight);
        printf("\n Enter targeted haemoglobin in g/dL:");
        scanf("%f",&targethaemo);
        printf("\n Enter the actual haemoglobin in g/dL:");
        scanf("%f",&actualhaemo);
        printf("\n Enter the value of iron store in mg:\n 500g if W>35kgs\n 15mg/kg if W<35kg :");
        scanf("%f",&ironstore);
        printf("\n The Iron deficiency is %f", iron_deficiency(weight,targethaemo,actualhaemo,ironstore));
        opt_1();
        break;
         case 4:
        printf("Enter the waist size in cm: ");
        scanf("%f",&waist);
        printf("\n Enter hip size in cm:");
        scanf("%f",&hip);
        printf("\n The waist to hip ratio is %f",waist_to_hip_ratio(waist,hip));
        opt_1();
        break;
        case 5:
        printf("Enter the waist circumference in cm: ");
        scanf("%f",&waist);
        printf("\n Enter height in cm:");
        scanf("%f",&height);
        
        printf("\n The Waist to height ratio is %f",waist_to_height_ratio(waist,height));
        opt_1();
        break;

        case 6:
        
        printf("Enter the weight in kg: ");
        scanf("%f",&weight);
        printf("\n Enter height in cm:");
        scanf("%f",&height);
        printf("\n Enter your age in years:");
        scanf("%f",&age);
        printf("\n Gender [M/F] :");
        scanf("%c",&gender);
        
        printf("\n The BMR is %f",bmr(weight,height,age,gender));
        opt_1();
        break;

        case 0: main_menu(); break;

        default: printf("Invalid input \n"); medical_calculator();
     }
}