#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	float init_vel,dist;
	float acc=2.85;
	int kmph=320;
	init_vel=0.278*kmph;
    dist=(init_vel*init_vel)/(2*acc);
    if (dist>1400)
    {
    	printf("aircraft does not land safely within the runway\n");
    }
    else
    	printf("aircraft lands safely within the runway\n");
	return 0;
}