#include <stdio.h>
int main(){

	char ch;
	printf("Enter a charater: ");
	scanf("%c",&ch);

	if(ch>=97 && ch<=122)
		printf("Toggled case: %c\n",ch-32);
	else if(ch>=65 && ch<=90)
		printf("Toggled case: %c\n",ch+32);

	return 0;
}