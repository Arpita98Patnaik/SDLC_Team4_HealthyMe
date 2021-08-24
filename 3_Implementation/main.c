#include<essentials.h>
#include<bmi_bmr.h>
#include<dietPlan.h>
#include<Cal_Intake.h>
#include<water.h>
#include<workout.h>
#define MAX_SIZE 100

int main(){
    member ptr1[MAX_SIZE];
	int index = -1, x = -1, mbid;
    ret_code_t ecc = 0;
	while(x!=0&&x!=3){
		int choice;
		printf("     Healthy  Me   \n");
		printf(" -------------------------------------------------------------------\n");
		printf("               1- New User           \n");
		printf("               2- Existing User          \n");
		printf("               3- Exit          \n");
		printf(" ------------------------------------------------------------------ \n");	
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice){
		
			case 0:x=0;break;
			case 1:
				if(index<MAX_SIZE)
				{
					ecc = newmember(ptr1,++index);
					if(ecc!=SUCCESS)
						return ecc;
					printf("               Select one of your choices                           \n");
					printf(" -------------------------------------------------------------------\n");
					printf("               1- To Calculate your BMI and BMR value               \n");
					printf("               2- To get a personalized diet plan report              \n");
					printf("               3- To get a personalized water intake report           \n");
					printf("               4- To get a personalized workout report               \n");
					printf("               5- To get a personalized overall report      \n");
					printf("               6- To see your Details      \n");
					printf(" ------------------------------------------------------------------ \n");	
					printf("Enter your choice: ");
					scanf("%d",&choice);
                    ecc = utility(choice,ptr1,index);
					if(ecc!=SUCCESS)
						return ecc;
				}
				
				break;
		  	case 2:
		  		printf("Enter ID:\n");
				scanf("%d",&mbid);
				if(mbid>index){
					printf("User Not availiable\n");
					return INCONSISTENT_DATA;
				}
				printf("               Select one of your choices                           \n");
				printf(" -------------------------------------------------------------------\n");
				printf("               1- To Calculate your BMI and BMR value               \n");
				printf("               2- To get a personalized diet plan report              \n");
				printf("               3- To get a personalized water intake report           \n");
				printf("               4- To get a personalized workout report               \n");
				printf("               5- To get a personalized overall report      \n");
				printf("               6- To see your Old Report      \n");
				printf(" ------------------------------------------------------------------ \n");	
				printf("Enter your choice: ");
				scanf("%d",&choice);
				switch(choice){
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
						ecc = utility(choice,ptr1,mbid);
						if(ecc!=SUCCESS)
							return ecc;
						break;
					case 6:
						ecc = displaymemberdetails(ptr1,mbid);
						if(ecc!=SUCCESS)
							return ecc;
						break;
				}
			case 3:
				x=3;
				break;

		  	// default:
		  	// 	printf("Incorrect Entry\n");
            // 	return INCONSISTENT_DATA;
            
		  }
	
	}
	return SUCCESS;
}
