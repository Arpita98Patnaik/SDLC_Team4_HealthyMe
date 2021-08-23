# Test Plan

## High level Test Plan
| Test ID | Description | Exp o/p | Exp i/p | Actual o/p | Type of test |
| :---- | :---- | :---- | :---- | :---- | :---- |
| HT01 | Check functionality of the BMI and BMR calculation module | :---- | :---- | :---- | Technical |
| HT02 | Check functionality of the Diet Plan and Calorie intake module | :---- | :---- | :---- | Technical |
| HT03 | Check functionality of the Water intake module | :---- | :---- | :---- | Technical |
| HT04 | Check functionality of the Workout module | :---- | :---- | :---- | Technical |
| HT05 | Check if the program fetches details of existing user | :---- | :---- | :---- | Scenario based |
| HT06 | Check functionality of the Report generation module | :---- | :---- | :---- | Scenario based |
| HT07 | Check if the program exits with proper Exit Code | :---- | :---- | :---- | technical |

## Low level Test Plan
| Test ID | Description | Exp o/p | Exp i/p | Actual o/p | Type of test |
| :---- | :---- | :---- | :---- | :---- | :---- |
| LT-1.1 | Check if user is able to choose between Imperial and SI unit system | :---- | :---- | :---- | technical |
| LT-1.2 | Check if user is alerted for improper inputs | :---- | :---- | :---- | technical |
| LT-2.1 | Check if the system correctly outputs diet choices below calorie intake specified | :---- | :---- | :---- | technical |
| LT-2.2 | Check if the user is alerted of the weight category they belong to | :---- | :---- | :---- | technical |
| LT-3.1 | Check if the system accurately accounts the units used SI/Imperial | :---- | :---- | :---- | technical |
| LT-3.2 | Check if the system can keep a track of user workout duration | :---- | :---- | :---- | technical |
| LT-3.3 | Estimate recommended water intake for the day based on user data | :---- | :---- | :---- | technical |
| LT-3.4 | Ensure a record of the water data estimated is kept track of | :---- | :---- | :---- | technical |
| LT-4.1 | Check if the user is able to provide the workout intensity choices | :---- | :---- | :---- | technical |
| LT-4.2 | Check if the user is able to enter the amount of weight needed to shed | :---- | :---- | :---- | technical |
| LT-5.1 | Check if the user has chosen the correct index and choise or not | Incorrect entry | NULL | Incorrect entry | technical |
| LT-5.2 | Check if the user has selected the correct choise | CalcBMI,CalcBMR functions called | 1 | Calculate BMI and BMR values | technical |
| LT-5.3 | Check if the user has selected the correct choise | CalcBMR,calorie functions called | 2 | Calculate BMR and calorie values | technical |
| LT-5.4 | Check if the user has selected the correct choise | calcwaterquant and workoutcheck functions called | 3 | Calculate water quantity and workout of user | technical |
| LT-5.5 | Check if the user is able to select the correct choise | CalcBMI,CalcBMR functions called | 4 | Calculate BMI and BMR values | technical |
| LT-5.6 | Check if the user user had chosen a choise which is not present | Incorrect entry | 6 | Incorrect entry | technical |
| LT-6.1 | Check if the user had not sent data | NULL | NULL | Incorrect entry | technical |




