#include <stdio.h>

typedef enum _timezone_{
	Hawaii=-10, California=-8, Texas=-6, Brazil=-4, Ireland=0, India=+5, Singapore=+8, Australia=+10, NewZealand=+12
}TimeZone;

typedef struct _clock_{
	short int hours,minutes,seconds;
	TimeZone zone;
}Clock;

Clock initialise(){
	Clock cl;
	cl.hours=cl.minutes=cl.seconds=0;
	return cl;
}

Clock set_Time(){

	Clock cl;
	short int hr,min,sec;
	printf("Enter time details\n");
	do{
		printf("Hours: ");
		scanf("%hd",&hr);getchar();
	}while(hr>23||hr<0);
	do{
		printf("Minutes: ");
		scanf("%hd",&min);getchar();
	}while(min>=60||min<0);
	do{
		printf("Seconds: ");
		scanf("%hd",&sec);getchar();
	}while(sec>=60||sec<0);

	cl.hours=hr;
	cl.minutes=min;
	cl.seconds=sec;
	cl.zone=India;
	return cl;
}

void get_Time(Clock cl){

	printf("Time is %hd hours %hd minutes %hd seconds\n\n",cl.hours,cl.minutes,cl.seconds);
}

Clock add_Time(Clock cl1,Clock cl2){

	Clock new_cl=initialise();
	new_cl.hours=cl1.hours+cl2.hours;
	new_cl.minutes=cl1.minutes+cl2.minutes;
	new_cl.seconds=cl1.seconds+cl2.seconds;
	if(new_cl.seconds>=60){
		new_cl.minutes++;
		new_cl.seconds-=60;
	}
	if(new_cl.minutes>=60){
		new_cl.hours++;
		new_cl.minutes-=60;
	}
	if(new_cl.hours>23){
		new_cl.hours-=24;
	}
	return new_cl;

}
void set_TimeZone(Clock *cl){

	int choice;
	printf("\n1.Hawaii\n2.California\n3.Texas\n4.Brazil\n5.Ireland\n6.India\n7.Singapore\n8.Australia\n9.New Zealand\nSelect time zone: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:cl->zone=Hawaii;break;
		case 2:cl->zone=California;break;
		case 3:cl->zone=Texas;break;
		case 4:cl->zone=Brazil;break;
		case 5:cl->zone=Ireland;break;
		case 6:cl->zone=India;break;
		case 7:cl->zone=Singapore;break;
		case 8:cl->zone=Australia;break;
		case 9:cl->zone=NewZealand;break;
		default: cl->zone=India;
	}

}

void local_Time(Clock cl){

	while((cl.hours=cl.hours+cl.zone)>23){
		cl.hours-=24;
	}
	printf("Local Time:\n");
	get_Time(cl);

}

int main()
{
	Clock cl1,cl2,new_cl;
	printf("\n24 Hour Format\n\n");
	cl1=initialise();
	cl1=set_Time();
	get_Time(cl1);
	set_TimeZone(&cl1);
	local_Time(cl1);

	return 0;
}
