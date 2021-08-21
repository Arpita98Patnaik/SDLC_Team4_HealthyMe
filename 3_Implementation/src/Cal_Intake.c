#include "dietPlan.h"
#include "Cal_Intake.h"
#include<stdio.h>
#include<stdlib.h>
void mealchoice()
{
    int brkfst_limit=0, lunch_limit=0, snack_limit =0,  dinner_limit =0;
    int choice;
    do
    {
        system("cls");
        printf("________________________Choose your Meal plan_______________________\n");
        printf("1. Fiesty Breakfast, Light lunch, Healthy dinner\n2.Healthy breakfast, Fiesty lunch, Light dinner\n3. Light Breakfast, Healthy lunch, Fiesty dinner\n");
        fflush(stdin);
        scanf("%d",&choice);
		if(choice==1){
            brkfst_priority();
            }
        else if (choice ==2){
            lunch_priority();
        }
        else if (choice ==3){
            dinner_priority();
        }
        else
        {
            printf("Choose a valid choice");
            system("cls");
        }
    } while (choice<=1||choice>=3);
}
int brkfst_priority()
{
    brkfst_limit = (40/100)*bmr;
    lunch_limit = (20 / 100)*bmr;
    snack_limit = (10/100)*bmr;
    dinner_limit = (30/100)*bmr;
    dietPlan(); 
}
int lunch_priority()
{
    brkfst_limit = (30/100)*bmr;
    lunch_limit = (40/100)*bmr;
    snack_limit = (10/100)*bmr;
    dinner_limit = (20/100)*bmr;
    dietPlan(); 
}
int dinner_priority()
{
    brkfst_limit = (20/100)*bmr;
    lunch_limit = (30/100)*bmr;
    snack_limit = (10/100)*bmr;
    dinner_limit = (40/100)*bmr; 
    dietPlan();
}