/*
This program is a Body Mass Index (BMI), Basal Metabolic Rate (BMR) and Active Metabolic Rate (AMR) calculator.
---------------------------------------------------------------------------
									BMI
---------------------------------------------------------------------------
The formula used to calculate the BMI is BMI = weigh * (703 / (height^2)).
BMI Categories:
	- Underweight = <18.5.
	- Normal Weight = 18.5-24.9.
	- Overweight = 25-29.9.
	- Obesity = >= 30.
---------------------------------------------------------------------------
									BMR
---------------------------------------------------------------------------
The formula used to calculate BMR is:
	- Men (Weight(kg) and Height(cm)) --> BMR = 66.5 + ( 13.75 x weight in kg ) + ( 5.003 x height in cm ) - ( 6.755 x age in years ).
	- Men (Weight(pounds) and Height(inches)) --> BMR = 66 + ( 6.23 x weight in pounds ) + ( 12.7 x height in inches ) - ( 6.76 x age in years ).
	- Women (Weight(kg) and Height(cm)) --> BMR = 665.1 + ( 9.563 x weight in kg ) + ( 1.850 x height in cm ) - ( 4.676 x age in years ).
	- Women (Weight(pounds) and Height(inches)) --> BMR = 655 + ( 4.35 x weight in pounds ) + ( 4.7 x height in inches ) - (4.7 x age in years ).
---------------------------------------------------------------------------
									AMR
---------------------------------------------------------------------------
Aplaying the Harris-Benedict Principle:
	- Little to no exercise --> Daily calories needed = BMR*1.2.
	- Light exercise (1-3 days per week) --> Daily calories needed = BMR*1.375.
	- Moderate exercise (3-5 days per week) --> Daily calories needed = BMR*1.55.
	- Heavy exercise (6-7 days per week) --> Daily calories needed = BMR*1.725.
	- Very heavy exercise (twice per day, extra heavy workouts) --> Daily calories needed = BMR*1.9.
*/

#include <iostream>
#include <math.h>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

// BMI Calculator
string bmiResult(double bmi) {
	string word;

	if (bmi < 18.5) {
		word = "underweight";
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		word = "normal weighted";
	}
	else if (bmi >= 25 && bmi <= 29.9) {
		word = "overweight";
	}
	else if (bmi >= 30) {
		word = "obese";
	}
	return word;
}

void calcBMI() {
	//Formula --> BMI = weigh * (703 / (height^2)).
	
	//Variables
	double weight;
	double height;
	double bmi;

	cout << "\nPlease, type in your weight (Kg): ";
	cin >> weight;

	cout << "\nPlease, type in your height (kg): ";
	cin >> height;

	//Calculations
	bmi = weight * (703 / pow(height, 2));

	//Print
	cout << "\n\nYour Body Mass Index (BMI) is: " <<bmi <<"\n";
	string word = bmiResult(bmi);
	cout << "According to your Body Mass Index (BMI) you're " << word << ".\n\n";
}

//BMR Calculator
double bmrResult(string gender, double weight, double height, double age) {
	//Calculations
	double bmr;
	bmr = 0;

	if (gender == "FEMALE") {
		bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.76 * age);
	}
	else if (gender == "MALE") {
		bmr = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
	}
	return bmr;
}

double calcBMR() {
	/*Formula --> Men (Weight(pounds) and Height(inches)) --> BMR = 66 + ( 6.23 * weight in pounds ) + ( 12.7 * height in inches ) - ( 6.76 * age in years )
	  Formula --> Women(Weight(pounds) and Height(inches))-- > BMR = 655 + (4.35 * weight in pounds) + (4.7 * height in inches) - (4.7 * age in years)*/

	//Variables
	string gender;
	double weight;
	double height;
	double age;

	cout << "\nPlease, type in your gender (male or female): ";
	cin >> gender;
	transform (gender.begin(), gender.end(), gender.begin(), [](unsigned char c) {return toupper (c); }); //toupper

	cout << "\n\nPlease, type in your weight (pounds): ";
	cin >> weight;

	cout << "\n\nPlease, type in your height (inches): ";
	cin >> height;
	
	cout << "\n\nPlease, type in your age (years): ";
	cin >> age;

	//Print
	double bmr = bmrResult(gender, weight, height, age);
	cout << "\n\nYou have a Basal Metabolic Rate (BMR) of: " << bmr << " calories per day. \n\n";
	return bmr;
}

//AMR Calculator
double amrResult(int choose, double bmr2) {
	double amr;
	amr = 0;

	//Choosemode
	switch (choose) {
	case 1:
		amr = bmr2 * 1.2;
		cout << "\nAccording to the results your daily calories needed are: " << amr << "\n\n";
		break;
	case 2:
		amr = bmr2 * 1.375;
		cout << "\nAccording to the results your daily calories needed are: " << amr << "\n\n";
		break;
	case 3:
		amr = bmr2 * 1.55;
		cout << "\nAccording to the results your daily calories needed are: " << amr << "\n\n";
		break;
	case 4:
		amr = bmr2 * 1.725;
		cout << "\nAccording to the results your daily calories needed are: " << amr << "\n\n";
		break;
	case 5:
		amr = bmr2 * 1.9;
		cout << "\nAccording to the results your daily calories needed are: " << amr << "\n\n";
	default:
		cout << "\nAn error occured please try again\n";
	}
	return amr;
}

void calcAMR() {
	/*Formula Little to no exercise --> Daily calories needed = BMR*1.2.
	  Formula Light exercise -- > Daily calories needed = BMR*1.375.
	  Moderate exercise -- > Daily calories needed = BMR*1.55.
	  Heavy exercise-- > Daily calories needed = BMR*1.725.
	  Very heavy exercise -- > Daily calories needed = BMR*1.9.*/
	
	  //Variables
	int choose = 0;

	// Calculate BMR
	double bmr2 = calcBMR();

	//Print
	cout << "If you do little to no exercise type in '1'\n";
	cout << "If you do light exercise type in '2' \n";
	cout << "If you do moderate exercise type in '3' \n";
	cout << "If you do heavy exercise type in '4' \n";
	cout << "If you do very heavy exercise type in '5'\n";
	cin >> choose;

	//Print
	amrResult(choose, bmr2);
}

//Select Mode
void filter(string mode) {
	if (mode == "BMI") {
		calcBMI();
	}
	else if (mode == "BMR") {
		calcBMR();
	}
	else if (mode == "AMR") {
		calcAMR();
	}
	else if (mode == "EXIT") {
		exit(0);
	}
}

void printMenu() {
	cout << "If you want to calculate your Body Mass Index type in 'BMI' \n";
	cout << "If you want to calculate your Basal Metabolic Rate type in 'BMR' \n";
	cout << "If you want to calculate your Active Metabolic Rate type in 'AMR' \n";
	cout << "If you want to exit the program type in 'Exit' \n\n";
}

void selectMode() {

	//Variables
	string mode;

	//choose mode
	do {
		printMenu();
		
		cin >> mode;
		transform (mode.begin(), mode.end(), mode.begin(), [](unsigned char c) {return toupper(c); });  //toupper
		filter(mode);

	} while (mode != "BMI" || mode != "BMR" || mode != "AMR" || mode != "EXIT");
}

//Main
int main() {
	cout << "Welcome to the Calculator!!\n\n";
	selectMode();
}