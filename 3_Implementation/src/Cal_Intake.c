#include<essentials.h>
#include "dietPlan.h"
#include "Cal_Intake.h"
#include<stdio.h>
#include<stdlib.h>
int brkfst_limit=0,lunch_limit=0,snack_limit =0,dinner_limit =0;

ret_code_t mealchoice(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head)
{
    int choice;
       
    printf("________________________Choose your Meal plan___________________________\n");
    printf("1. Fiesty Breakfast, Light lunch, Healthy dinner\n2. Healthy breakfast, Fiesty lunch, Light dinner\n3. Light Breakfast, Healthy lunch, Fiesty dinner\n");
    scanf("%d",&choice);
        if(choice==1){
            return brkfst_priority(bmr,b_head,l_head,s_head,d_head);
            }
        else if (choice ==2){
            return lunch_priority(bmr,b_head,l_head,s_head,d_head);
        }
        else if (choice ==3){
            return dinner_priority(bmr,b_head,l_head,s_head,d_head);
        }
        else
        {
            printf("Choose a valid choice");
            return INCONSISTENT_DATA;
        }

}
ret_code_t brkfst_priority(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head)
{
    brkfst_limit = (40/100.0)*bmr;
    lunch_limit = (20 / 100.0)*bmr;
    snack_limit = (10/100.0)*bmr;
    dinner_limit = (30/100.0)*bmr;
    return dietPlan(b_head,l_head,s_head,d_head); 
}
ret_code_t lunch_priority(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head)
{
    brkfst_limit = (30/100.0)*bmr;
    lunch_limit = (40/100.0)*bmr;
    snack_limit = (10/100.0)*bmr;
    dinner_limit = (20/100.0)*bmr;
    return dietPlan(b_head,l_head,s_head,d_head); 
}
ret_code_t dinner_priority(int bmr,brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head)
{
    brkfst_limit = (20/100.0)*bmr;
    lunch_limit = (30/100.0)*bmr;
    snack_limit = (10/100.0)*bmr;
    dinner_limit = (40/100.0)*bmr; 
    return dietPlan(b_head,l_head,s_head,d_head);
}


ret_code_t dietPlan(brkfst *b_head,lunch *l_head,snack *s_head,dinner *d_head){
    ret_code_t ecc =0;
    printf("\n______________________Breakfast options______________________");
    ecc = printBrkfstList(b_head);
    if(ecc==-1)
                return ecc;
    
    printf("\n______________________Lunch options______________________");
    ecc = printLunchList(l_head);
    if(ecc==-1)
                return ecc;
    
    printf("\n______________________Snack options______________________");
    ecc = printSnacksList(s_head);
    if(ecc==-1)
                return ecc;
    
    printf("\n______________________Dinner options______________________");
    ecc = printDinnerList(d_head);
    if(ecc==-1)
                return ecc;
    return ecc;

}

ret_code_t printBrkfstList(brkfst *head){
    if(head ==NULL){
        return NULL_PTR;
    }
    
      brkfst* temp = head;

      printf("\n");
      while(temp!=NULL){

            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<brkfst_limit)
            {
                printf("%-49s\t%d\n",temp->name,temp->cal);
            }
            temp = temp->next;
      }
      return SUCCESS;
}
ret_code_t printLunchList(lunch *head){
    if(head ==NULL){
        return NULL_PTR;
    }
    
    lunch* temp = head;

    printf("\n");
    while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<lunch_limit)
            {
                printf("%-49s\t%d\n",temp->name,temp->cal);
            }
            temp = temp->next;
    }
    return SUCCESS;
}
ret_code_t printSnacksList(snack *head){
    if(head ==NULL){
        return NULL_PTR;
    }
    
    snack* temp = head;

    printf("\n");
    while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<snack_limit)
            {
                printf("%-49s\t%d\n",temp->name,temp->cal);
            }
            temp = temp->next;
    }
    return SUCCESS;
}
ret_code_t printDinnerList(dinner *head){
    if(head ==NULL){
        return NULL_PTR;
    }
    
    dinner* temp = head;

    printf("\n");
    while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<dinner_limit)
            {
                printf("%-49s\t%d\n",temp->name,temp->cal);
            }
            temp = temp->next;
    }
    return SUCCESS;
}
