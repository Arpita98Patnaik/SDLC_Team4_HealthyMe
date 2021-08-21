#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void beginner();
void intermediate();
void advanced();


float bmi , reduce_weight,total_calories;
int choice ; 
char store_string[1000];

int no_of_days;
void workout(float bmi)
{
    /*printf("enter bmi value\n");
    scanf("%f",&bmi);
    */
    if(bmi<18.5)  // underweight
    {
        printf("You are Underweight\n");
        printf("Healthy BMI range should be 18.6 to 24.9\n");
        printf("Please increase the calorie intake\n");
        printf("Perform yoga for 30 minutes\n");
        printf("Perform low intensity push-ups and weight lifting under the doctor guidance \n");
                
    }
    else if(bmi>=18.5 && bmi<=24.9) // normal weight
    {
        printf("You Are Fit and Healthy!!! Perform yoga, warm-up exercises , walking/jogging to maintain the healthy weight \n");
    }
    else    // over weight
    {
        printf("You are over weight\n");
        printf("Healthy BMI range should be 18.6 to 24.9\n");
        printf("Please enter how many kilos you wish to reduce\n");
        scanf("%f" , &reduce_weight);
        printf("Please select pace of workout\n");
        printf("1.Beginner (to burn 500 calories/day)\n2.Intermediate (to burn 1500 calories/day)\n3.Advanced (to burn 3000 calories/day)\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                beginner();
                break;
            }
            case 2:
            {
               intermediate();
                break;
            }
            case 3:
            {
                advanced();
                break;
            }
            deafult :
            {
                printf("Please enter valid input\n");
                break;
            }
        }
        
        
    }
}

void beginner()
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
    printf("%s",store_string);
    
    
}
void intermediate()
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
    printf("%s",store_string);

}

void advanced()
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
    printf("%s",store_string);
}

int main()
{
    printf("enter bmi value\n");
    scanf("%f",&bmi);
    workout(bmi);
    return 0;
}