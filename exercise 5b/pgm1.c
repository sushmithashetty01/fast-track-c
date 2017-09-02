#include<stdio.h>
#include<string.h>
int copy_string(char*,char*,int);
int main()
{
	char str1[20];
	char str2[20];
	int len;
	printf("Enter the string\n");
	scanf("%s",str1);
	len = strlen(str1);
	printf("length=%d\n",len);
	copy_string(str1,str2,len);
	return 0;
}

int copy_string(char *str1, char *str2, int len)
{
	int i;
	printf("String 1 = %s\n",str1);
	for(i=0;i<len;i++)

	{

		*(str2+i)=*(str1+i);
	}
	printf("Copied string is %s\n",str2);
	return 0;
}
