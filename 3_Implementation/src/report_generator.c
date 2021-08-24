#include "essentials.h"

void report_builder(struct member *member,char *info)
    {
    // creating file pointer to work with files
        FILE *fptr;
        char fileName[30];
        // opening file in writing mode
        sprintf(fileName,"%s.txt",member->name);
         fptr = fopen  (fileName ,"w");
        //fptr = fopen("%s.txt",member->name, "w");   
       
    fputs("==================================================================\n",fptr);
    fputs("                          REPORT CARD                            \n",fptr);
    fputs("==================================================================\n",fptr);

                fprintf(fptr,"User name        : %s \n", member->name);
                fprintf(fptr,"User id          : %d \n", member->usr_id);
                fprintf(fptr,"Age              : %d \n", member->age);
                if (member->gender==1)
                {
                    fprintf(fptr,"Gender           : %s \n", "Female");
                }  
                else
                {
                    fprintf(fptr,"Gender           : %s \n", "Male");
                }
                fprintf(fptr,"Height           : %0.2f Centimeters\n", member->h);
                fprintf(fptr,"Weight           : %0.2f Kgs\n",member->w);
                
           
                fprintf(fptr,"%s\n",info);
        fputs("==================================================================\n",fptr);
    fputs("                           VISIT AGAIN                            \n",fptr);
    fputs("==================================================================\n",fptr);    

        fclose(fptr);
}