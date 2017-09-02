#include <stdio.h>

int string_len(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}

int comp_string(char *str1,char *str2)
{
	int i,ret=1;
	int len1=string_len(str1),len2=string_len(str2);
	if(len1==len2){
		for(i=0;i<len1;i++)
			if(str1[i]!=str2[i])
				ret=0;
	}else
		ret=0;
	return ret;

}

int main()
{
	char str1[30],str2[30];

	printf("Enter first string: ");
	scanf("%s",str1);
	printf("Enter second string: ");
	scanf("%s",str2);
	if(comp_string(str1,str2)==1)
		printf("Strings are equal\n");
	else
		printf("Strings are unequal\n");
	return 0;
}
