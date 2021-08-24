#ifndef __Cal_Intake_H__
    
    #define __Cal_Intake_H__
    
    #include<essentials.h>
    ret_code_t printBrkfstList(brkfst*,member*,int);
    ret_code_t printLunchList(lunch*,member*,int);
    ret_code_t printSnacksList(snack*,member*,int);
    ret_code_t printDinnerList(dinner*,member*,int);

    ret_code_t mealchoice(int,brkfst*,lunch*,snack*,dinner*,member*,int);
    ret_code_t brkfst_priority(int,brkfst*,lunch*,snack*,dinner*,member*,int);
    ret_code_t lunch_priority(int,brkfst*,lunch*,snack*,dinner*,member*,int);
    ret_code_t dinner_priority(int,brkfst*,lunch*,snack*,dinner*,member*,int);
    ret_code_t dietPlan(brkfst*,lunch*,snack*,dinner*,member*,int);

#endif   