# Requirements 
## Introduction
Physical fitness and health plays an important role in our day to day life. Regular exercise and physical activity in terms of sports, workouts and running promotes strong muscles and bones. It also improves respiratory, cardiovascular and overall health. With the recent unprecedented times of the Covid-19 pandemic the need for home workouts and a manageable diet based on individual needs has become  one of the most common requirements to maintain a healthy lifestyle. 

## Research
### The idea behind *HealthyMe!*
With the advent of Fast-food chain restaurants there are unhealthy yet tasty fast food items that are available at cheaper prices and with the introduction of food delivery aggregators people are inclined to order out rather than maintain a balanced or healthy diet. Improving technology has also played a major role in our everyday lives with an increase in jobs that promote an increasingly sendentary lifestyle. All these factors have contributed to a decline in the over all health and lifestyle of people these days.

With the recent spread of awareness in terms of social media over the various health concerns with an increasingly inactive lifestyle and its drawbacks people have now realised the benifit of exercise and a balanced but yet do not find the time to join Gym memberships and also find these overly expesive. Thus the solution in this case comes in terms of home workouts and health trackers that would allow user's to monitor not just their physical activity but their calorie intake as well.

HealthyMe is an inexpensive and easy to use application that can recommend a custom health plan consisting of both a balanced, healthy diet as well as a rigorous workout session based on the user's:
* Height
* Weight
* Age
* Gender

This data is used to calculate the user's **BMI, BMR** index and these values would then be used to ensure that the best possible fitness regime is recommended. The user may also accurately track their calorie intake to ensure they stick to the set plan and also keep a track of their water intake and set personalised goal that meets their requirements and comfort. All this coupled with easy access anytime and anywhere makes HealthyMe a convincing application that would be of great to use to a large demographic of young users and working professionals. 

### Advantages
* **Work out Anywhere:** As an application that is available on the go workouts are no longer restricted to a particular and can be done at any location as per the users convenience.
* **Cost Effective:** As these workouts do not require any specialised equipments they are usually cost effective with only a small subscription charge billed monthly or yearly based on the users requirement.
* **All in one Health App:** The can not only provide workout sessions but also recomend balanced diet plans and also help keep a track of daily calorie intake and help improve your lifestyle habits and health.
* **Keep you motivated:** A personalised notification can always serve as motivation to meet the fitness goals set for the day, this coupled with custom rewards goes a long way in keeping focused on your overall activities and fitness.

### Disadvantages
* **May be inaccurate:** Fitness app rely to a large extend on the data provided by the user and may sometimes be inaccurate in case the user data is not updated frequently and accurately.
* **May or may not be helpful:** Unlike a paid membership at the Gym where a trainer ensures you achieve your workout goals fitness app rely on the user to make a conscious effort else there would be no scope for improvement in the user's lifestyle.
* **May be unregulated and sometimes harmful:** As of now there are multiple fitness apps availabe to be downloaded for free online but a majority of these apps are unregulated and do not have set standards due to which there is o certain assurance that the recomended plan might benifit the user.

## Cost and Features
Development of a fitness application involve large costs in terms of UI/UX design, quality assurance services, DevOps services and project management. A **Minimum value product** is first developed which is the app with only the basic and used to get user feedback after which advanced features can be gradually added.

On an average considering the development time spent on the various aspects of an app with an estimated cost of around $50/hour rate:

| Type of work | Back-end development  | iOS development  |  Android development |
| :-----: | :-: | :-: | :-----: |
| Features | 228 hours | 438 hours | 438 hours |
| Frameworks and libraries integration | 35 hours | 36 hours | 36 hours |
| UI/UX design | - | 120 hours | 120 hours |
| Quality assurance | 194 hours | 343 hours | 343 hours |
| DevOps | 36 hours | 62 hours | 62 hours |
| Project management | 124 hours | 218 hours | 218 hours |
| Total time | 617 hours | 1217 hours | 1217 hours |

Based on the above data we can estimate a cost of at least **$88,250** for one platform and **$150,850** for two platforms.

**Reference:** *https://www.cleveroad.com/blog/how-much-does-it-cost-to-make-a-fitness-app*
## SWOT Analysis
![SWOT (1)](https://user-images.githubusercontent.com/57947483/130075269-d707a97e-0cd4-4105-9767-613ea794aa26.png)

# 4W's & 1H
## Who
* BMI calculators and BMR calculators are popularly used by people on a weight loss regime.
## What
* Taking the height and weight of a person and calculating BMI (Body Mass Index) and BMR (Basal Metabolic Rate).
* BMR is the number of calories required to keep body functioning at rest while BMI is a measure of body fat based on height and weight.
* Scheduling the diet plan and workout plan based on the data.
## When
* During health complicataions, related to weight gain or weight loss.
* Whenever the user requires to actively monitor their calorie and water intake.
## Where
* The user can access this application at the comfort of their home/office. 
## How
* The user can access the console through laptops/computer and get personalized diet and workout charts at the comfort of their home/office. 

# Detail requirements 
## High Level Requirements:
| ID | Description | Status (Implemented/Future)|
|:--|:----------------------------------|:-------------------|
| HR.01 | User should be able to enter data in SI and Imperial system of units| Implemented |
| HR.02 | System should be able to output personalized calorie intake | Implemented |
| HR.03 | System should be able to output personalized workout routine | - |
| HR.04 | System should be able to provide workout intensity choices to the user (Basic, Moderate, Extensive) | Implemented |
| HR.05 | System should be able to provide the ideal water intake to the user | Implemented |
| HR.06 | System should be able to provide a dedicated report in a text file format for each Health parameter | Implemented |


##  Low level Requirements:
| ID | Description | Status (Implemented/Future)|
|:--|:----------------------------------|:-------------------|
| LR.01 | User should be able to enter weight, height, age and gender to calculate BMI and BMR| Implemented |
| LR.02 | User should be able to select SI/Imperial units as per their requirement| Implemented |
| LR.03 | System should allowthe user to choose if they want to generate new report or view previous reports| Implemented |
| LR.04 | User should be able to choose the report they want to generate| Implemented |
| LR.05 | System should be able to plan a diet chart based on the calorie requirements for a specific BMI| Implemented |
| LR.06 | System should be able to planout a workout regime based on users body type| Implemented |
| LR.07 | System should be allow the user to choose diets and workouts based on their body type and requirements| Implemented |
| LR.08 | System should be able to provide long and short term workput plans| Implemented |
| LR.09 | User should be able to view the water intake cosidering their workout schedule| Implemented |
| LR.10 | System should be able to consider the workout time session in Hrs and minutes| Implemented |
| LR.11 | System should be able to output the water intake user must have in a day| Implemented |
| LR.12 | User should be able to keep track of their health history reports| Implemented |
| LR.13 | User should be able to view and track the records on a dedicated mobile application| Future |
| LR.14 | Enhanced database for different varieties of foods & drinks and the calories it contains| Future |
| LR.15 | System should be able to give notification alerts to remind the user to drink more water| Future |
| LR.16 | System should provide the nutritional contents and calories of food items consumed across the world| Future |
