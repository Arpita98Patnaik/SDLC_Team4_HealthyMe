#include<essentials.h>
#include<dietPlan.h>
#include<Cal_Intake.h>
#include<bmi_bmr.h>
#include<water.h>
#include<workout.h>
ret_code_t utility(int choice,member *ptr, int n){
    ret_code_t ecc = 0; 
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
            // report_builder(ptr, string_module);   //string module to be sent
            break;

        case 2:  
            ecc = calcBMR(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc = calorie(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            break;
        case 3:
            ecc =  workoutcheck( ptr,n );
            if(ecc!=SUCCESS)
                return ecc;

            
            ecc =  calcwaterquant(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            
            //  report_builder(ptr,string_module);  //string module to be sent
            break;

        case 4:
            ecc = calcBMI(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            
            ecc = workout(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            // report_builder(ptr,string_module);  //string module to be sent
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
            
            
            
            //  report_builder(ptr,string_module);  //string module to be sent
            break;
        case 6 :
            ecc = displaymemberdetails(ptr,n);
            if(ecc!=SUCCESS)
                return ecc;
            break;
        default:
            printf("Incorrect Entry\n");
            return INCONSISTENT_DATA;
            break;
    }
    return SUCCESS;
}