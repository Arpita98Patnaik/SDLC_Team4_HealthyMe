#include<essentials.h>
#include "report_generator.h"
#include<stringBuilder.h>

ret_code_t calcBMR(member *p, int n) 
{	
    if(p==NULL)
        return NULL_PTR;
    
	//Variables
	int g,a;
	double weight,height,bmr;
	g = (p+n)->gender;
	a = (p+n)->age;
	if((p+n)->unit == 1)
	{
		weight = (p+n)->w;
		height = (p+n)->h;
        if(weight>150 || height>250)
        {
            return INCONSISTENT_DATA;
        }
	}
	else
	{
		weight = ((p+n)->w)*0.45359237;
		height = ((p+n)->h)*30.48;
        if(weight>150 || height>250)
        {
            return INCONSISTENT_DATA;
        }
	}
	bmr = 0;

	if (g == 1) {
		bmr = (10*weight) + (6.25*height) - (5*a) - 161;
		(p+n)->bmr = bmr;
	}
	else if (g == 2) {
		bmr = (10*weight) + (6.25 * height) - (5*a) + 5;
		(p+n)->bmr = bmr;
	}
	//Print
	printf( "You have a Basal Metabolic Rate (BMR) of:%0.2f ",bmr);
	printf(" calories per day.\n");


	return SUCCESS;
}