#include<essentials.h>
#include<dietPlan.h>
#include<Cal_Intake.h>
#include<bmi_bmr.h>
#include<water.h>
#include<workout.h>
#include<report_generator.h>

ret_code_t utility(int choice,member *ptr, int n){
    ret_code_t ecc = SUCCESS; 
    int option;

    if(ptr==NULL)
        return NULL_PTR;
    switch(choice){
        case 1:                     
            ecc = calcBMI(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc = calcBMR(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;

                
                printf("Do you want to download your HealthyMe report?	1. Yes	2. No \t");
                scanf("%d", &option);
                if (option==1)
                {
                    report_builder(ptr,(ptr+n)->info);
                }
                free((ptr+n)->info);

            break;

        case 2:  
            ecc = calcBMR(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc = calorie(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;

                printf("Do you want to download your HealthyMe report?	1. Yes	2. No \t");
                scanf("%d", &option);
                if (option==1)
                {
                    report_builder(ptr,(ptr+n)->info);
                }
                free((ptr+n)->info);
                
            break;
        case 3:
            ecc =  workoutcheck( ptr,n );
            if(ecc!=SUCCESS)
                return ecc;

            
            ecc =  calcwaterquant(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
                printf("Do you want to download your HealthyMe report?	1. Yes	2. No \t");
                scanf("%d", &option);
                if (option==1)
                {
                    report_builder(ptr,(ptr+n)->info);
                }
                free((ptr+n)->info);

            break;

        case 4:
            ecc = calcBMI(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc = workout(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;

                printf("Do you want to download your HealthyMe report?	1. Yes	2. No \t");
                scanf("%d", &option);
                if (option==1)
                {
                    report_builder(ptr,(ptr+n)->info);
                }
                free((ptr+n)->info);
            break;

        case 5:   
            ecc = calcBMI(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc = calcBMR(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc = calorie(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc = workout(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;

            ecc =  workoutcheck( ptr,n );
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc =  calcwaterquant(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
                printf("Do you want to download your HealthyMe report?	1. Yes	2. No \t");
                scanf("%d", &option);
                if (option==1)
                {
                    report_builder(ptr,(ptr+n)->info);
                }
                free((ptr+n)->info);
	
                break;
        case 6 :
            ecc = displaymemberdetails(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;


                printf("Do you want to download your HealthyMe report?	1. Yes	2. No \t");
                scanf("%d", &option);
                if (option==1)
                {
                    report_builder(ptr,(ptr+n)->info);
                }
                free((ptr+n)->info);

            break;
        default:
            printf("Incorrect Entry\n");
            return INCONSISTENT_DATA;
            break;
    }
    return SUCCESS;
}