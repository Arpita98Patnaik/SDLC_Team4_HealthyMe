#include "essentials.h"
#include<workout.h>
#include<stringBuilder.h>
#include<report_generator.h>
float max_reducible_weight;
float bmi , reduce_weight,total_calories;
int choice; 
int no_of_days;
char store_string[1000];
char *info; 
ret_code_t workout(member *p,int n)
{
    ret_code_t ecc = 0;
    bmi=(p+n)->bmi;
    printf("%lf",bmi);
    if(bmi==0)
    {
        return INCONSISTENT_DATA;
    }
    if(bmi<18.5)  // underweight
    {
        printf("You are Underweight\n");
        printf("Healthy BMI range should be 18.6 to 24.9\n");
        printf("Please increase the calorie intake\n");
        printf("Perform yoga for 30 minutes\n");
        printf("Perform low intensity push-ups and weight lifting under the doctor guidance \n");
        info = addToString(info,"You are Underweight\nHealthy BMI range should be 18.6 to 24.9\nPlease increase the calorie intake\nPerform yoga for 30 minutes\nPerform low intensity push-ups and weight lifting under the doctor guidance \n");
        int option;
        char *info;
        printf("Do you want to download your HealthyMe report?	1. Yes	2. No \t");
        scanf("%d", &option);
        if (option==1)
        {
            report_builder(p,info);
        }

    return SUCCESS;
        report_builder(p,info);
                
    }
    else if(bmi>=18.5 && bmi<=24.9) // normal weight
    {
        printf("You Are Fit and Healthy!!! Perform yoga, warm-up exercises , walking/jogging to maintain the healthy weight \n");
    }
    else    // over weight
    {
        printf("You are over weight\n");
        printf("Healthy BMI range should be 18.6 to 24.9\n");
        double h=p->h;
        max_reducible_weight=(p->w)-22*(h*h)/10000.0;
        printf("Your maximum reducible weight is %f\n",max_reducible_weight);
        printf("Please enter how many kilos you wish to reduce (in the range of 0 to %f)\n",max_reducible_weight);
        scanf("%f" , &reduce_weight); 
              
        if(reduce_weight==0)
        {
            sprintf(store_string,"First step to lose Weight. Get up and stay active!\"\"\n\"\"Thank you\"\"\n");
            printf("%s",store_string);
        }
        else if(reduce_weight>=1 && reduce_weight<=max_reducible_weight)
        {
        printf("Please select pace of workout\n");
        printf("1.Beginner (to burn 500 calories/day)\n2.Intermediate (to burn 1500 calories/day)\n3.Advanced (to burn 3000 calories/day)\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                ecc = beginner();
                if(ecc!=SUCCESS)
                    return ecc;
                break;
            }
            case 2:
            {
                ecc =intermediate();
                if(ecc!=SUCCESS)
                    return ecc;
                break;
            }
            case 3:
            {
                ecc = advanced();
                if(ecc!=SUCCESS)
                    return ecc;
                break;
            }
            default:
            {
                printf("Please enter valid input\n");
                return INCONSISTENT_DATA ;
            }
        }
        }
        else
        {
            sprintf(store_string,
            "==============================================================""\n"
            "Please choose within the range of 0 to %d kgs""\n"
            "==============================================================""n",max_reducible_weight);
            printf("%s",store_string);
            
            return INCONSISTENT_DATA;
            
        }
        
        
    }
    //return reduce_weight;
return SUCCESS;
}
ret_code_t beginner()
{
    total_calories=7700*reduce_weight; // for 1kg = 7700 calories
    
    no_of_days=ceilf(total_calories/500);     // 500 calories to be burnt as beginner
    
    sprintf(store_string,"=================================================================""\n"
    "Exercise                Time Duration       Calories Burn(approx)""\n"
    "=================================================================""\n"
    "Jogging                 30 min              280""\n"
    "Squats(low intensity)   25 min              100""\n"
    "Push-ups                20 count            140""\n"
    "=================================================================""\n"
    "Please follow the workout plans for %d days\n\n",no_of_days);
   if(store_string==NULL)
        return NULL_PTR;
    printf("%s",store_string);
    return SUCCESS;
    
    
}
ret_code_t intermediate()
{
    total_calories=7700*reduce_weight; // for 1kg = 7700 calories
    
    no_of_days=ceilf(total_calories/1500);      // 1500 calories to be burnt as intermediate
    sprintf(store_string,"=================================================================""\n"
    "Exercise                Time Duration       Calories Burn(approx)""\n"
    "=================================================================""\n"
    "Cycling                 45 min              450""\n"
    "Squats(high intensity)  25 min              220""\n"
    "Push-ups                20 count            140""\n"
    "Threadmill              60 min              700""\n"
    "=================================================================""\n"
    "Please follow the workout plans for %d days\n\n",no_of_days);
    if(store_string==NULL)
        return NULL_PTR;
    printf("%s",store_string);
    return SUCCESS;
}

ret_code_t advanced()
{
    total_calories=7700*reduce_weight; // for 1kg = 7700 calories
   
    no_of_days=ceilf(total_calories/3000);      // 3000 calories to be burnt as intermediate
    sprintf(store_string,"=================================================================""\n"
    "Exercise                Time Duration       Calories Burn(approx)""\n"
    "=================================================================""\n"
    "Cycling                 30 min              600""\n"
    "Squats(high intensity)  25 min              220""\n"
    "Threadmill              90 min              1050""\n"
    "Climbing Stairs         30 min              500""\n"
    "Burpees                 60 min              680""\n"
    
    "=================================================================""\n"
    "Please follow the workout plans for %d days\n\n",no_of_days);
    if(store_string==NULL)
        return NULL_PTR;
    printf("%s",store_string);
    
    return SUCCESS;
}


