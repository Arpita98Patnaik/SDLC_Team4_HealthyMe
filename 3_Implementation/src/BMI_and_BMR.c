/*
This program is a Body Mass Index (BMI) and Basal Metabolic Rate (BMR) .
---------------------------------------------------------------------------
									BMI
---------------------------------------------------------------------------
The formula used to calculate the BMI is BMI = weight  / (height^2)).
BMI Categories:
	- Underweight = <18.5.
	- Normal Weight = 18.5-24.9.
	- Overweight = 25-29.9.
	
---------------------------------------------------------------------------
									BMR
---------------------------------------------------------------------------
The formula used to calculate BMR is:
	- Men (Weight(kg) and Height(cm)) --> BMR = (10*weight) + (6.25 * height) - (5*age) + 5 
	- Women (Weight(kg) and Height(cm)) --> BMR = (10*weight) + (6.25*height) - (5*age) - 161
	

*/
#include"BMIBMR.h"

// BMI Calculator
#include<stdio.h>

#include<stdlib.h>
#include <math.h>


void calcBMI() {
	//Formula --> BMI = weigh * (703 / (height^2)).
	
	//Variables
	double weight;
	double height;
	double bmi;
	char word[20];

	printf("\nEnter your weight (Kg): ");
	scanf("%lf",&weight);

	printf ("\nEnter your height (cm): ");
	scanf("%lf",&height);

	//Calculations
	bmi = (weight /pow(height,2))*10000;

	//Print
	printf( "\n Your Body Mass Index (BMI) is:%lf \n",bmi);
	char word[20] = bmiResult(bmi);
	printf("According to your Body Mass Index (BMI) you're %s\n",word);
}


char bmiResult(double bmi) {
	char word[20];

	if (bmi < 18.5) {
		char word[] = "underweight";
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		char word[] = "normal weighted";
	}
	else if (bmi >= 25 && bmi <= 29.9) {
		char word[] = "overweight";
	}
	else if (bmi >= 30) {
		char word[] = "obese";
	}
	return word;
}



//BMR Calculator
double bmrResult(string gender, double weight, double height, double age) {
	//Calculations
	double bmr;
	bmr = 0;

	if (gender == "FEMALE") {
		bmr = (10*weight) + (6.25*height) - (5*age) - 161;
	}
	else if (gender == "MALE") {
		bmr = (10*weight) + (6.25 * height) - (5*age) + 5;
	}
	return bmr;
}

double calcBMR() {
	
	//Variables
	char gender[25];
	double weight;
	double height;
	double age;

	printf( "\nEnter your gender (male or female): ");
	gets(gender);
	transform (gender.begin(), gender.end(), gender.begin(), [](unsigned char c) {return toupper (c); }); //toupper

	printf("\n\nEnter your weight (kg): ");
	scanf("%lf",&weight);

	printf("\n\nEnter your height (cm): ");
	scanf("%lf",&height);
	
	printf( "\n\nEnter your age (years): ");
	scanf("%d",&age);

	//Print
	double bmr = bmrResult(gender, weight, height, age);
	printf( "\n\nYou have a Basal Metabolic Rate (BMR) of: ",bmr," calories per day. \n\n");
	return bmr;
}
int main()
{ calcBMI();
  //calcBMR();
  return 0;

}
