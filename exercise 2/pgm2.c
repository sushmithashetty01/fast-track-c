#include<stdio.h>

int main()
{
	float j,t;
	double kwh;
	printf("enter value in joules and time in seconds:");
	scanf("%f \n %f \n", &j, &t);
	kwh=j/(3600000*t);
	printf("value in kWh is:%lf\n",kwh);
    return 0;
}
