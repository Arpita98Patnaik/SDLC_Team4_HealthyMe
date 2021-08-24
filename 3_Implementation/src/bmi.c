#include<essentials.h>
#include<report_generator.h>
#include<stringBuilder.h>

ret_code_t calcBMI(struct member *p, int n) 
{
	//Formula --> BMI = weigh * (703 / (height^2)).
	
	//Variables
    if(p==NULL)
        return NULL_PTR;
    
	double bmi;
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
		(p+n)->bmi = bmi;
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
		(p+n)->bmr = bmi;
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
	(p+n)->info = addToString((p+n)->info, "Hi");
    return SUCCESS;
}
