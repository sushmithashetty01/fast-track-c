#include <stdio.h>

int main(int argc, char const *argv[])
{
	int k;
	float m;
	printf("enter value in kmph:\n");
	scanf("%d", &k);
	m=0.278 * k;
	printf("value in m/s is:%f\n", m );
	return 0;
}