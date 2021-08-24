# Test Plan

## High level Test Plan
| Test ID | Description | Exp o/p | Exp i/p | Actual o/p | Type of test |
| :---- | :---- | :---- | :---- | :---- | :---- |
| HT01 | Check functionality of the BMI and BMR calculation module | BMI 28.73, BMR 1680.00 Cal | Age 50, Height 172 cm, Weight 85 Kg, Gender male | BMI 28.73, BMR 1680.00 Cal  | Technical |
| HT02 | Check functionality of the Diet Plan and Calorie intake module | User should be asked to plan their meal | User's choice to view dietplan | User is asked to plan their meal | Technical |
| HT03 | Check functionality of the Water intake module | Water intake is measured for the user | User's choice to view water intake | Water intake report generated | Technical |
| HT04 | Check functionality of the Workout module | Workout plan generated | User's choice to view workout plan | Workout plan generated | Technical |
| HT05 | Check if the program fetches details of existing user | Details of Users BMR,BMI values, Dieta and workout plan should be fetched | User enters their ID, enters ID 0 |  Fetches all details of User with ID 0  | Scenario based |
| HT06 | Check functionality of the Report generation module | Report should be generated | User selects to generate a report and enters 2| Personalized report is generated | Scenario based |
| HT07 | Check if the program exits with proper Exit Code | Program must exit | User chooses to exit and enters 3 | Program exits | technical |

## Low level Test Plan
| Test ID | Description | Exp o/p | Exp i/p | Actual o/p | Type of test |
| :---- | :---- | :---- | :---- | :---- | :---- |
| LT-1.1 | Check if user is able to choose between Imperial and SI unit system | SI system | Selects 1 | Data in SI system | technical |
| LT-1.2 | Check if user is alerted when height or weight exceeds the limit given | Inconsistent Data | Weight 1200kg | Inconsistent Data| technical |
| LT-1.3 | Check if user falls under correct weight category for BMI index | Overweight | 28 | Overweight| technical |
| LT-1.4 | Check if user is able to choose gender | Female | Selects 1 | Female| technical |
| LT-1.5 | Check if user is alerted when weight or height exceeds limit | Inconsistent Data | Weight 1200 kg | Inconsisttent Data| technical |
| LT-2.1 | Check if the system correctly outputs diet choices below calorie intake specified | Food items below 1200 cal should be listed | 1200 cal | Food items below 1200 cal is listed | technical |
| LT-2.2 | Check if the user is alerted of the weight category they belong to | Overweight | BMI is 40 | Overweight | technical |
| LT-3.1 | Check if the system accurately accounts the units used SI/Imperial | System allows user to enter data in SI unit system | selects 1 | Enters data in SI unit system | technical |
| LT-3.2 | Check if the system can keep a track of user workout duration | Splits hours and minutes and passes values for calculation to the next module | Enters 1:20 | Splits hours and minutes | technical |
| LT-3.3 | Estimate recommended water intake for the day based on user data | Water intake should be 2.4 L | User's BMI is 22.6 and selects NO to workout | Water intake is be 2.4 L | technical |
| LT-3.4 | Allow user to enter their workout status before water intake calculation | Water Intake should be increased to account for the water loss during workout | Selects YES to workout | EWater Intake is be increased to account for the water loss during workout | technical |
| LT-4.1 | Check if the user is able to provide the workout intensity choices | User is healthy, no workout plan should be created | User's BMI is 22.6 | No workout plan created | technical |
| LT-4.2 | Check if the system is able to provide the maximum range of weight needed to shed by the user | Maximum weight to be shed by user should be 38 Kgs | User's BMI is 37.1 | User is asked to reduce weight upto 38 Kgs only| technical |
| LT-5.1 | Check if the user has chosen the correct index and choice or not | Incorrect entry | User enters ID o instead of 0 | Incorrect entry | technical |
| LT-5.2 | Check if the user has selected the correct choice | CalcBMI,CalcBMR functions called | 1 | Calculate BMI and BMR values | technical |
| LT-5.3 | Check if the user has selected the correct choice | CalcBMR,calorie functions called | 2 | Calculate BMR and calorie values | technical |
| LT-5.4 | Check if the user has selected the correct choice | calcwaterquant and workoutcheck functions called | 3 | Calculate water quantity and workout of user | technical |
| LT-5.5 | Check if the user is able to select the correct choice | CalcBMI,CalcBMR functions called | 4 | Calculate BMI and BMR values | technical |
| LT-5.6 | Check if the user user had chosen a choise which is not present | Incorrect entry | 6 | Incorrect entry | technical |
| LT-6.1 | Check if the user had not sent data | NULL | NULL | Incorrect entry | technical |




