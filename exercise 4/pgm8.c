#include <stdio.h>
#include <string.h>

int count(char str[],char vowel){

	int i,len=strlen(str),count=0;
	for(i=0;i<len;i++){
		if(str[i]==vowel)
			count++;
	}
	return count;
}

int main(){
	char str[50],vowel;
	printf("Enter a string: ");
	gets(str);
	printf("Enter a vowel: ");
	scanf("%c",&vowel);
	printf("'%c' occurs %d times in %s\n",vowel,count(str,vowel),str);
	return 0;
}


