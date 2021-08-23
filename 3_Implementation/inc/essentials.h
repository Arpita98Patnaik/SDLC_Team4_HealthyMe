#ifndef __ESSENTIALS_H__

    #define __ESSENTIALS_H__
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>

    typedef struct member
        {
            int usr_id;
            char name[30];
            int age;
            int gender;
            int unit;
            float w;
            float h;
            int time[2];
            float total_w;
            float bmi;
            float bmr;
            char *info;
        }member;
    
    typedef enum ret_code{
        NULL_PTR = -1,   /** Error code for NULL pointer */
        SUCCESS,         /** Value for Success */
        NULL_FILE_PTR,   /** Error code for Null FILE Pointer */
        INCONSISTENT_DATA /** Error Code for improper input data */
    }ret_code_t;

    ret_code_t displaymemberdetails( struct member*, int );
	ret_code_t newmember(struct member*,int);
    ret_code_t utility(int,member*,int);

#endif
