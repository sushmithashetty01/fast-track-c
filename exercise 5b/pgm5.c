#include<stdio.h>
#include<string.h>

int string_split(char *str,char *first_name,char *second_name,char *third_name);
int main()
{

	char str[30];
	char first_name[10],second_name[10],third_name[10];
	printf("Enter the full name\n");
	fgets(str,30,stdin);
	string_split(str,first_name,second_name,third_name);
	return 0;
}

int string_split(char *str,char *first_name,char *second_name,char *third_name)
{
	int i=0,j=0;
	while(*(str+i)!=' ')
	{
	*(first_name+j) =  *(str+i);
	i++;
	j++;
	}
	*(first_name+j) = '\0';
	i++;
	j=0;
	
	while(*(str+i)!=' ')
	{
	*(second_name+j) =  *(str+i);
	i++;
	j++;
	}
	*(second_name+j)= '\0';
	i++;

	j=0;
	while(*(str+i)!=' ')
	{
	*(third_name+j) =  *(str+i);
	j++;
	i++;
	}
	*(third_name+j)= '\0';
	//i++;

	printf("The names are \nFirst_name = %s\nSecond name = %s\nThird name = %s\n",first_name,second_name,third_name);
	return 0;
}