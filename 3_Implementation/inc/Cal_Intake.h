#ifndef __Cal_Intake_H__
    
    #define __Cal_Intake_H__
    
    #include<essentials.h>
    int printBrkfstList(brkfst*,member*,int);
    int printLunchList(lunch*,member*,int);
    int printSnacksList(snack*,member*,int);
    int printDinnerList(dinner*,member*,int);

    ret_code_t mealchoice(int,brkfst*,lunch*,snack*,dinner*,member*,int);
    int brkfst_priority(int,brkfst*,lunch*,snack*,dinner*,member*,int);
    int lunch_priority(int,brkfst*,lunch*,snack*,dinner*,member*,int);
    int dinner_priority(int,brkfst*,lunch*,snack*,dinner*,member*,int);
    int dietPlan(brkfst*,lunch*,snack*,dinner*,member*,int);

#endif   