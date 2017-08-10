#include <stdio.h>

int main(int argc, char const *argv[])
{
	int kmph=80,mps;
	int time=3;
	float dist;
	mps=0.278*kmph;
	dist=(mps/2)*time;
	if (dist>30)
	{
		printf("car will hit the truck\n");
	}
	else
		printf("car will not hit the truck\n");
	return 0;
}