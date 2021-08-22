#include "header.h"

void medical_calculator()
{
     int med;
     printf("\nWe have following function available for Medical Calculator \n");
     printf("1.  BMI \n");
     printf("2.  BSA Mosteller \n");
     printf("3.  Iron deficiency \n"); //option to choose iron deficiency calculation
     printf("4.  Waist to hip ratio\n");
     printf("5.  Waist to height ratio \n");
     printf("6.  BMR \n");
     printf("7.  Ideal body weight \n");
     printf("8.  Body Fat Percentage \n");
     printf("9.  Calorie Calculator \n");
     printf("10. Relative Fat Mass \n");
     printf("11. Geriatric Depression Scale \n");
     printf("12. Cardiac index \n");
     printf("13. Keto calculator \n");
     printf("0.  Go to the main menu? \n");
     printf("Select one option \n");
     scanf("%d", &med);
     int choice,age,score=0;
     float height, weight,waist,hip,actualhaemo,targethaemo,ironstore=0;
     char gender;
     switch(med)
     {
     
        case 1: 
        bmi:
        printf("\nEnter the following parameters for BMI calculation\n");
        printf("\nEnter the height in meters: ");
        scanf("%f", &height);
        printf("\nEnter the weight in kgs:");
        scanf("%f", &weight);
        printf("\nThe BMI is %f kg/m2 \n \n" , bmi(height,weight));
        printf("The below are the interpretation based on the BMI value: \n");
        printf("BMI value < 18.5          ---->     Underweight \n");
        printf("18.5 <= BMI value < 26    ---->     Normal \n");
        printf("26 <= BMI value < 30      ---->     Overweight \n");
        printf("BMI value >= 30           ---->     Normal \n");
        printf("\nDo you want to continue with BMI calculation? \nPress 1 to continue and 0 for other options. \n");
        scanf("%d", &choice);
        if(choice==1) 
        goto bmi;
        else opt_1();
        break;

         
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
        scanf("%d",&age);
        printf("\n Gender [M/F] :");
        scanf(" %c",&gender);
        printf("\n The BMR is %f",bmr(weight,height,age,gender));
        opt_1();
        break;

        case 8:
        bfp:
        printf("\nEnter the following parameters for Body Fat Percentage calculation\n");
        printf("\nEnter the height in meters: ");
        scanf("%f", &height);
        printf("\nEnter the weight in kgs: ");
        scanf("%f", &weight);
        printf("\nEnter your age: ");
        scanf("%d", &age);
        printf("\nEnter gender (f/m): ");
        scanf(" %c", &gender);
        printf("\n\nThe Body Fat Percentage is %f %%\n \n" , bfp(height,weight,age,gender));
        printf("The below are the interpretation based on the BFP value: \n");
        printf("  Age     Underweight  Healthy  Overweight  Obese \n");
        printf(" 20-40        <21       21-33     33-39      >39  \n");
        printf(" 41-60        <23       23-35     35-40      >40  \n");
        printf(" 61-79        <24       24-36     36-42      >42  \n");
        printf("\nDo you want to continue with BMI calculation? \nPress 1 to continue and 0 for other options. \n");
        scanf("%d", &choice);
        if(choice==1) 
        goto bfp;
        else opt_1();
        break;

        case 9:
        kcal:
        printf("\nEnter the following parameters for Calorie calculation\n");
        printf("\nEnter the height in cms: ");
        scanf("%f", &height);
        printf("\nEnter the weight in kgs: ");
        scanf("%f", &weight);
        printf("\nEnter your age: ");
        scanf("%d", &age);
        printf("\nEnter gender (f/m): ");
        scanf(" %c", &gender);
        printf("Select the Physical Activity level that best suites you.\n");
        printf("1. Sedantary(Very little/No exercise\n");
        printf("2. Lightly active (activity for 1-3 days/week)\n");
        printf("3. Moderately active (activity for 3-5 days/week)\n");
        printf("4. Highly active (hard activity for 6-7 days/week)\n");
        printf("5. Professional athlete\n");
        printf("Choose from 1-5: \n");
        scanf("%d",&choice);
        printf("\n\nThe estimated and sufficient calries as per your body requirement is %f calories\n \n" , kcal(weight,height,age,gender,choice));
        printf("\nDo you want to recalculate calories? \nPress 1 to continue and 0 for other options. \n");
        scanf("%d", &choice);
        if(choice==1) 
        goto kcal;
        else opt_1();
        break;
        
        case 10:
        rfm:
        printf("\nEnter the following parameters for Percentage Relative Fat Mass (RFM) calculation\n");
        printf("\nEnter the height in cms: ");
        scanf("%f", &height);
        printf("\nEnter the waist circumference in cms:");
        scanf("%f", &waist);
        printf("\nEnter gender (f/m): ");
        scanf(" %c", &gender);
        printf("\nThe RFM is %f %% \n \n" , rfm(gender,height,waist));
        printf("The below are the interpretation based on the RFM%%: \n");
        printf("   Category        Men      Women \n");
        printf(" Extremely low      <2       <10  \n");
        printf(" Essential fat     2-5      10-13 \n");
        printf(" Athletes          6-13     14-20 \n");
        printf(" Fitness          14-17     21-24 \n");
        printf(" Average          18-24     25-31 \n");
        printf(" Obese             25+       32+  \n");
        printf("\nDo you want to continue with RFM calculation? \nPress 1 to continue and 0 for other options. \n");
        scanf("%d", &choice);
        if(choice==1) 
        goto rfm;
        else opt_1();
        break;

        case 11:
        gds:
        printf("Geriatric Depression Scale: \nChoose relatable answer for the 15 questions that will be flashing infront of you.\n");
        score=gds(0);
        if(-1<score<5) 
        {
           printf("Sit back and relax. You are all good. \n");
        }
        else if(4<score<11)
        {
           printf("Relax a bit and talk to a consultant. \n");
        }
        else if(10<score<16)
        {
           printf("hey theres nothing to be tensed about. Everything will be fine soon and for that do meet a doctor. \n");
        }
        printf("Do you want to retake the quiz? \nPress 1 to continue and 0 for other options. \n");
        if(choice==1) 
        goto gds;
        else opt_1();
        break;

        case 0: main_menu(); break;

        default: printf("Invalid input \n"); medical_calculator();
     }
}