#include <stdio.h>

int main()
{
	int w,lpw,lumens;
	printf("enter value in Watts and efficiency in lumens per Watts\n");
	scanf("%d %d ", &w, &lpw);
	lumens=w*lpw;
	printf("lumens=%d\n", lumens);
	return 0;
}