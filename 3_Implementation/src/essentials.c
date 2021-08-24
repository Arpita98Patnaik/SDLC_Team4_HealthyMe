#include<essentials.h>

ret_code_t newmember(struct member *p, int n ){
    if(p==NULL)
        return NULL_PTR;

	int ch_u,a,g;
	float weight,height;
	(p+n)->usr_id = n;
	
    printf("Enter your Name: ");
	scanf("%29s",(p + n)->name);
	
    printf("Enter your Age: ");
	scanf("%d",&a);
	(p+n)->age =a;
	
    printf("Select gender: \n");
	printf("1. Female\n");
	printf("2. Male\n");
	printf("Enter your choice: ");
	scanf("%d",&g);
	(p+n)->gender = g;
	
    printf("Select a unit of your preference:\n");
	printf("   1. SI units    ");
	printf("   2. Imperial system    \n");
	printf("Enter your choice: ");
	scanf("%d",&ch_u);
	
    if(ch_u == 1)
	{
		(p + n)->unit = 1;
		printf("Enter your weight in Kgs:");
		scanf("%f",&weight);
		(p+n)->w = weight;
		printf("Enter height in centimeters :");
		scanf("%f",&height);
		(p+n)->h = height;
        if(weight>150.0 || height>250.0)
        {
            return INCONSISTENT_DATA;
        }
	}
	else
	{
		(p +n)->unit =2;
		printf("Enter your weight in Pounds:");
		scanf("%f",&weight);
		(p+n)->w = weight;
		//printf("%f, Weight",(p+n)->w);
		printf("Enter height in feet:");
		scanf("%f",&height);
		(p+n)->h = height;
        if(weight>1000 || height>6)
        {
            return INCONSISTENT_DATA;
        }
	}
    return SUCCESS;
		
}


ret_code_t displaymemberdetails( struct member *p, int n)
{
    if(p==NULL)
        return NULL_PTR;

	printf("------------------Member Details-----------------------\n");
	printf("Member ID: %d\n",(p+n)->usr_id);
	printf("Member Name: %s\n",(p+n)->name);
	printf("Member age: %d\n",(p+n)->age);
	if((p+n)->unit == 1)
	{
		printf("Units used: SI units\n");
	}
	else if((p+n)->unit == 2)
	{
		printf("Units used: Imperial units\n");
	}
	printf("Weight: %f\n",(p+n)->w);
	printf("BMI: %lf\n",(p+n)->bmi);
	printf("BMR: %lf\n",(p+n)->bmr);
	
	printf("Workout duration: %d:%d\n",(p+n)->time[0],(p+n)->time[1]);
	printf("Recomended Water-intake: %f\n",(p+n)->total_w);
	printf("-----------------------------------------------------------\n");

    return SUCCESS;
}