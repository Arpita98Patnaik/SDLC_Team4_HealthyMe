#include"water.h"
#include<string.h>

ret_code_t calcBMI(struct member *p, int n) 
{
	//Formula --> BMI = weigh * (703 / (height^2)).
	
	//Variables
    if(p==NULL)
        return NULL_PTR;
    
	double bmi;
	char word[20];
	double weight, height;

	//Calculations
	
	if((p+n)->unit == 1)
	{
		weight = (p+n)->w;
		height = (p+n)->h;
        if(weight>150 || height>250)
        {
            return INCONSISTENT_DATA;
        }
		bmi = (weight /(height*height))*10000;
	}
	else
	{
		weight = ((p+n)->w)*0.45359237;
		height = ((p+n)->h)*30.48;
        if(weight>150 || height>250)
        {
            return INCONSISTENT_DATA;
        }
		bmi = (weight /(height*height))*10000;
	}
	
	if (bmi < 18.5) 
	{
		printf( "\n Your Body Mass Index (BMI) is:%lf \n",bmi);
		printf("According to your Body Mass Index (BMI) you're %s\n","Underweight");
	}
	else if (bmi >= 18.5 && bmi <= 24.9) 
	{
		printf( "\n Your Body Mass Index (BMI) is:%lf \n",bmi);
		printf("According to your Body Mass Index (BMI) you're %s\n","Normal Weighted");
	}
	else if (bmi >= 25 && bmi <= 29.9) 
	{
		printf( "\n Your Body Mass Index (BMI) is:%lf \n",bmi);
		printf("According to your Body Mass Index (BMI) you're %s\n","Overweight");
	}
	else if (bmi >= 30) 
	{
		printf( "\n Your Body Mass Index (BMI) is:%lf \n",bmi);
		printf("According to your Body Mass Index (BMI) you're %s\n","Obese");
	}
    return SUCCESS;
}

ret_code_t calcBMR(struct member *p, int n) 
{	
    if(p==NULL)
        return NULL_PTR;
    
	//Variables
	int g,a;
	double weight,height,bmr;
	double age;
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
	}
	else if (g == 2) {
		bmr = (10*weight) + (6.25 * height) - (5*a) + 5;
	}
	//Print
	printf( "You have a Basal Metabolic Rate (BMR) of:%lf ",bmr);
	printf(" calories per day.\n");
	return SUCCESS;
}