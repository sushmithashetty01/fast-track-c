#include<stdio.h>
#include<string.h>
int rev_string(char*,char*,int);
int main()
{
	char str1[20];
	char str2[20];
	int len;
	printf("Enter the string\n");
	scanf("%s",str1);
	len = strlen(str1);
	printf("length=%d\n",len);
	rev_string(str1,str2,len);
	return 0;
}

int rev_string(char *str1, char *str2, int len)
{
	int i,j=0;;
	printf("String 1 = %s\n",str1);
	for(i=len-1;i>=0;i--)
	{

		*(str2+j)=*(str1+i);
		j++;
	}
	*(str2+j) = '\0';

	printf("Reversed string is %s\n",str2);
	return 0;
}
