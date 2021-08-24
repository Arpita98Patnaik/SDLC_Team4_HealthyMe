#include<essentials.h>
#include<water.h>
#include "report_generator.h"

ret_code_t workoutcheck(member *p,int n){
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

ret_code_t calcwaterquant( member *p, int n )
{	
    if(p==NULL)
        return NULL_PTR;

	int hr=0, min=0, t=0;
	float wt, q; 
	printf("Calculate Water!!!!!\n");
	if((p+n)->unit == 1)
	{
		wt = (p+n)->w * 2.2046;
		//printf("Weight kg %f \n", wt);
		q = wt * (2/3.0);
		hr = (p+n)->time[0];
		min = (p+n)->time[1];
		t = (hr*60) + min;
		(p+n)->total_w = (q + ((t/30)*12)) * 0.0295735;
		printf("Recomended Water-intake: %f\n",(p+n)->total_w);
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
		printf("Recomended Water-intake: %f\n",(p+n)->total_w);
	}
	

    return SUCCESS;
}
