#include "water.h"

ret_code_t newmember(struct member *p, int n )
{
    if(p==NULL)
        return NULL_PTR;

	int ch_u,a,g;
	float weight,height;
	(p+n)->usr_id = n;
	printf("Enter your Name:");
	scanf("%s",(p + n)->name);
	printf("Enter your Age:");
	scanf("%d",&a);
	(p+n)->age =a;
	printf("Select gender: \n");
	printf("1. Female\n");
	printf("2. Male\n");
	printf("Enter your choice: ");
	scanf("%d",&g);
	(p+n)->gender = g;
	printf("Select a unit of your preference:\n");
	printf("   1. SI units(kgs)    ");
	printf("   2. Imperial(Pounds)    ");
	scanf("%d",&ch_u);
	if(ch_u == 1)
	{
		(p + n)->unit = 1;
		printf("Enter your weight in Kgs:");
		scanf("%f",&weight);
		(p+n)->w = weight;
		printf("Enter height in meters:");
		scanf("%f",&height);
		(p+n)->h = height;
        if(weight>150 || height>250)
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

ret_code_t workoutcheck( struct member *p, int n )
{
    if(p==NULL)
        return NULL_PTR;

	int ch_wk;
	int hr,min;
	printf("Do you workout? :\n");
	printf("   1. Yes    \n");
	printf("   2. No    \n");
	printf(" Enter your choice: ");
	scanf("%d",&ch_wk);
	if(ch_wk == 1)
	{
		printf("Enter workout duration in \"hh:mm\" format: ");
		scanf("%2d:%2d",&hr,&min);
		(p+n)->time[0] = hr;
		(p+n)->time[1] = min;
        if(hr>15 || min>59)
        {
            return INCONSISTENT_DATA;
        }
	}
	else
	{
		(p+n)->time[0] = 0;
		(p+n)->time[1] = 0;
	}
    return SUCCESS;
}

ret_code_t calcwaterquant( struct member *p, int n )
{	
    if(p==NULL)
        return NULL_PTR;

	int hr=0, min=0, t=0;
	float wt, q, total_w=0; 
	//printf("Calculate Water!!!!!\n");
	if((p+n)->unit == 1)
	{
		wt = (p+n)->w * 2.2046;
		//printf("Weight kg %f \n", wt);
		q = wt * (2/3.0);
		hr = (p+n)->time[0];
		min = (p+n)->time[1];
		t = (hr*60) + min;
		(p+n)->total_w = (q + ((t/30)*12)) * 0.0295735;
	}
	else
	{
		wt = (p+n)->w;
		//printf("WEIGHT %f\n",wt);
		q = wt * (2/3.0);
		//printf("Water: %f\n",q);
		hr = (p+n)->time[0];
		min = (p+n)->time[1];
		//sscanf((p+n)->time, "%d:%d", &hr,&min);
		t = (hr*60) + min;
		(p+n)->total_w = (q + ((t/30)*12));
	}
    return SUCCESS;	
}

ret_code_t displaymemberdetails( struct member *p, int n)
{
    if(p==NULL)
        return NULL_PTR;

	printf("-------------------------------------------------\n");
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
	printf("Workout duration: %d:%d\n",(p+n)->time[0],(p+n)->time[1]);
	printf("Recomended Water-intake: %f\n",(p+n)->total_w);
    return SUCCESS;
}