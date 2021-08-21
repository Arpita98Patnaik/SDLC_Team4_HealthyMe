#ifndef __DIET_PLAN_H__
    
    #define __DIET_PLAN_H__
    typedef struct brkfst{
        char name[50];
        int cal;
        struct brkfst *next;
    }brkfst;

    typedef struct lunch{
        char name[50];
        int cal;
        struct lunch *next;
    }lunch;

    typedef struct snack{
        char name[50];
        int cal;
        struct snack *next;
    }snack;

    typedef struct dinner{
        char name[50];
        int cal;
        struct dinner *next;
    }dinner;

    brkfst* makeBrkfstList(char*,brkfst*);
    int printBrkfstList(brkfst*);

    lunch* makeLunchList(char*,lunch*);
    int printLunchList(lunch*);

    snack* makeSnacksList(char*,snack*);
    int printSnacksList(snack*);

    dinner* makeDinnerList(char*,dinner*);
    int printDinnerList(dinner*);





#endif