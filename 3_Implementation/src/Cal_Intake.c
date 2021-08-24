#include<essentials.h>
#include "dietPlan.h"
#include "Cal_Intake.h"
#include "report_generator.h"
#include<stringBuilder.h>
#include<stdio.h>
#include<stdlib.h>
int brkfst_limit=0,lunch_limit=0,snack_limit =0,dinner_limit =0;

ret_code_t mealchoice(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head,member *p,int n)
{
    if (bmr <1)
    {
        return INCONSISTENT_DATA;
    }
    if ((b_head==NULL)| (l_head==NULL)| (s_head==NULL)|(d_head==NULL))
    {
        return NULL_PTR;
    }
    int choice;
       
    printf("________________________Choose your Meal plan___________________________\n");
    printf("1. Fiesty Breakfast, Light lunch, Healthy dinner\n2. Healthy breakfast, Fiesty lunch, Light dinner\n3. Light Breakfast, Healthy lunch, Fiesty dinner\n");
    fscanf(stdin,"%d",&choice);
        if(choice==1){
            return brkfst_priority(bmr,b_head,l_head,s_head,d_head,p,n);
            }
        else if (choice ==2){
            return lunch_priority(bmr,b_head,l_head,s_head,d_head,p,n);
        }
        else if (choice ==3){
            return dinner_priority(bmr,b_head,l_head,s_head,d_head,p,n);
        }
        else
        {
            printf("Choose a valid choice");
            return INCONSISTENT_DATA;
        }

}
ret_code_t brkfst_priority(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head,member *p,int n)
{
    brkfst_limit = (40/100.0)*bmr;
    lunch_limit = (20 / 100.0)*bmr;
    snack_limit = (10/100.0)*bmr;
    dinner_limit = (30/100.0)*bmr;
    return dietPlan(b_head,l_head,s_head,d_head,p,n); 
}
ret_code_t lunch_priority(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head,member *p,int n)
{
    brkfst_limit = (30/100.0)*bmr;
    lunch_limit = (40/100.0)*bmr;
    snack_limit = (10/100.0)*bmr;
    dinner_limit = (20/100.0)*bmr;
    return dietPlan(b_head,l_head,s_head,d_head,p,n); 
}
ret_code_t dinner_priority(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head,member *p,int n)
{
    brkfst_limit = (20/100.0)*bmr;
    lunch_limit = (30/100.0)*bmr;
    snack_limit = (10/100.0)*bmr;
    dinner_limit = (40/100.0)*bmr; 
    return dietPlan(b_head,l_head,s_head,d_head,p,n);
}


ret_code_t dietPlan(brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head,member *p,int n){
    ret_code_t ecc =0;
    
    ecc = printBrkfstList(b_head,p,n);
    if(ecc!=SUCCESS)
                return ecc;
    
    
    ecc = printLunchList(l_head,p,n);
    if(ecc!=SUCCESS)
                return ecc;
    
    
    ecc = printSnacksList(s_head,p,n);
    if(ecc!=SUCCESS)
                return ecc;
    
    
    ecc = printDinnerList(d_head,p,n);
    if(ecc!=SUCCESS)
                return ecc;

    return ecc;

}

ret_code_t printBrkfstList(brkfst *head,member *p,int n){
    if(head ==NULL){
        return NULL_PTR;
    }
    
      brkfst* temp = head;

      char storeString[100];
      sprintf(storeString,"\n______________________Breakfast options______________________\n");
      (p+n)->info = addToString((p+n)->info, storeString);
      printf("%s",storeString);
      while(temp!=NULL){

            //printf("%-49s\t%d\n",temp->name,temp->cal);
            
            (p+n)->info = addToString((p+n)->info, storeString);
            if (temp->cal<brkfst_limit)
            {
                sprintf(storeString,"%-49s\t%d\n",temp->name,temp->cal);
                printf("%s",storeString);
                (p+n)->info = addToString((p+n)->info, storeString);
            }
            temp = temp->next;
      }
      return SUCCESS;
}
ret_code_t printLunchList(lunch *head,member *p,int n){
    if(head ==NULL){
        return NULL_PTR;
    }
    
    lunch* temp = head;

    char storeString[100];
    sprintf(storeString,"\n______________________Lunch options______________________\n");
    (p+n)->info = addToString((p+n)->info, storeString);
    printf("%s",storeString);
    while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<lunch_limit)
            {
                sprintf(storeString,"%-49s\t%d\n",temp->name,temp->cal);
                printf("%s",storeString);
                (p+n)->info = addToString((p+n)->info, storeString);
            }
            temp = temp->next;
    }
    return SUCCESS;
}
ret_code_t printSnacksList(snack *head,member *p,int n){
    if(head ==NULL){
        return NULL_PTR;
    }
    
    snack* temp = head;

    char storeString[100];
    sprintf(storeString,"\n______________________Snacks options______________________\n");
    (p+n)->info = addToString((p+n)->info, storeString);
    printf("%s",storeString);
    while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<snack_limit)
            {
                sprintf(storeString,"%-49s\t%d\n",temp->name,temp->cal);
                printf("%s",storeString);
                (p+n)->info = addToString((p+n)->info, storeString);
            }
            temp = temp->next;
    }
    return SUCCESS;
}
ret_code_t printDinnerList(dinner *head,member *p,int n){
    if(head ==NULL){
        return NULL_PTR;
    }
    
    dinner* temp = head;

    char storeString[300];
    sprintf(storeString,"\n______________________Dinner options______________________\n");
    (p+n)->info = addToString((p+n)->info, storeString);
    printf("%s",storeString);
    while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<dinner_limit)
            {
                sprintf(storeString,"%-49s\t%d\n",temp->name,temp->cal);
                printf("%s",storeString);
                (p+n)->info = addToString((p+n)->info, storeString);
            }
            temp = temp->next;
    }
    return SUCCESS;
}
