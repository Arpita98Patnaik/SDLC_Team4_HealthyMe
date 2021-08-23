#include<essentials.h>
#include<stdio.h>
#include<stdlib.h>
#include<dietPlan.h>
#include<Cal_Intake.h>

ret_code_t calorie(member *p,int n){
    if(p==NULL){
        return NULL_PTR;
    }
    char *path_b = "res\\brkfst.csv";
    char *path_l = "res\\lunch.csv";
    char *path_s = "res\\snacks.csv";
    char *path_d = "res\\dinner.csv";
    int bmr = (p+n)->bmr;

    brkfst *b_head = NULL;
    b_head = makeBrkfstList(path_b,b_head);

    lunch *l_head = NULL;
    l_head = makeLunchList(path_l,l_head);

    snack *s_head = NULL;
    s_head = makeSnacksList(path_s,s_head);

    dinner *d_head = NULL;
    d_head = makeDinnerList(path_d,d_head);


    return mealchoice(bmr,b_head,l_head,s_head,d_head);
    
}