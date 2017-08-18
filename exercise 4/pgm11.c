#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(){

	char line[MAX_LENGTH],pattern[MAX_LENGTH];
	int i=0,j,line_length,pattern_length;
	printf("\nEnter a input line: ");
	fgets(line,sizeof(line),stdin);
	printf("Enter pattern to be searched: ");
	scanf("%s",pattern);
	line_length=strlen(line);
	pattern_length=strlen(pattern);
	for(i=0;i<line_length-pattern_length;i++){
		for(j=0;j<pattern_length;j++)
			if(line[i+j] != pattern[j])
				break;
		if(j==pattern_length){
			printf("Pattern was found at initial index of %d\n",i);
			return 0;
		}
	}
	printf("Pattern not found\n");
	return 0;

}
