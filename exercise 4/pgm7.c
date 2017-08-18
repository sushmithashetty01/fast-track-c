#include <stdio.h>
#include <string.h>

int count_vowels(char str[]){

	int i,len=strlen(str),count=0;
	for(i=0;i<len;i++){
		switch(str[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':count++;
		}
	}
	return count;
}

int main(){
	char str[10];
	printf("Enter a string: ");
	scanf("%s",str);
	printf("%s has %d vowels\n",str,count_vowels(str));
	return 0;
}
