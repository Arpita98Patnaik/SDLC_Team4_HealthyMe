#include "dietPlan.h"
#include "Cal_Intake.h"
#include<stdio.h>
#include<stdlib.h>

brkfst* makeBrkfstList(char *path,brkfst *head){
    
    FILE *fp = fopen(path,"r");

    if(fp == NULL){
        printf("NULL");
        return NULL;
    }
    brkfst *newnode,*temp; 
    
    while(!(feof(fp))){
        char *info = malloc(1024);
        newnode = (brkfst*)malloc(sizeof(brkfst));
        newnode->cal = 0;
        
        fscanf(fp,"%49[^,],%d\n",newnode->name,&newnode->cal);
        newnode->next = NULL;
        
        if(head==NULL){
            head = newnode;
        }
        else{
            temp = head;
                while(temp->next!=NULL)
                        temp = temp->next;
            temp->next = newnode;   
        }
    }
    fclose(fp) ;
return head;
}
lunch* makeLunchList(char *path,lunch *head){
    
    FILE *fp = fopen(path,"r");

    if(fp == NULL){
        printf("NULL");
        return NULL;
    }
    lunch *newnode,*temp; 
    
    while(!(feof(fp))){
        char *info = malloc(1024);
        newnode = (lunch*)malloc(sizeof(lunch));
        newnode->cal = 0;
        
        fscanf(fp,"%49[^,],%d\n",newnode->name,&newnode->cal);
        newnode->next = NULL;
        
        if(head==NULL){
            head = newnode;
        }
        else{
            temp = head;
                while(temp->next!=NULL)
                        temp = temp->next;
            temp->next = newnode;   
        }
    } 
    fclose(fp) ;
return head;
}
snack* makeSnacksList(char *path,snack *head){
    
    FILE *fp = fopen(path,"r");

    if(fp == NULL){
        printf("NULL");
        return NULL;
    }
    snack *newnode,*temp; 
    
    while(!(feof(fp))){
        char *info = malloc(1024);
        newnode = (snack*)malloc(sizeof(snack));
        newnode->cal = 0;
        
        fscanf(fp,"%49[^,],%d\n",newnode->name,&newnode->cal);
        newnode->next = NULL;
        
        if(head==NULL){
            head = newnode;
        }
        else{
            temp = head;
                while(temp->next!=NULL)
                        temp = temp->next;
            temp->next = newnode;   
        }
    }
    fclose(fp) ;
return head;
}
dinner* makeDinnerList(char *path,dinner *head){
    
    FILE *fp = fopen(path,"r");

    if(fp == NULL){
        printf("NULL");
        return NULL;
    }
    dinner *newnode,*temp; 
    
    while(!(feof(fp))){
        char *info = malloc(1024);
        newnode = (dinner*)malloc(sizeof(dinner));
        newnode->cal = 0;
        
        fscanf(fp,"%49[^,],%d\n",newnode->name,&newnode->cal);
        newnode->next = NULL;
        
        if(head==NULL){
            head = newnode;
        }
        else{
            temp = head;
                while(temp->next!=NULL)
                        temp = temp->next;
            temp->next = newnode;   
        }
    }
    fclose(fp) ;
return head;
}

int printBrkfstList(brkfst *head){
    if(head ==NULL){
        return -1;
    }
    
      brkfst* temp = head;

      printf("\n");
      while(temp!=NULL){

            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<brkfst_limit)
            {
                print("%-49s\t%d\n",temp->name,temp->cal);
            }
            temp = temp->next;
      }
      return 1;
}
int printLunchList(lunch *head){
    if(head ==NULL){
        return -1;
    }
    
      lunch* temp = head;

      printf("\n");
      while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<lunch_limit)
            {
                print("%-49s\t%d\n",temp->name,temp->cal);
            }
            temp = temp->next;
      }
      return 1;
}
int printSnacksList(snack *head){
    if(head ==NULL){
        return -1;
    }
    
      snack* temp = head;

      printf("\n");
      while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<snack_limit)
            {
                print("%-49s\t%d\n",temp->name,temp->cal);
            }
            temp = temp->next;
      }
      return 1;
}
int printDinnerList(dinner *head){
    if(head ==NULL){
        return -1;
    }
    
      dinner* temp = head;

      printf("\n");
      while(temp!=NULL){
            
            //printf("%-49s\t%d\n",temp->name,temp->cal);
            if (temp->cal<dinner_limit)
            {
                print("%-49s\t%d\n",temp->name,temp->cal);
            }
            temp = temp->next;
      }
      return 1;
}