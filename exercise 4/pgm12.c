#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(){

	char line[MAX_LENGTH],pattern[MAX_LENGTH];
	int i=0,j,line_length,pattern_length,flag=0;
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
			if(flag!=1){
				printf("Pattern was found at index %d",i);
				flag=1;
			}else
				printf(", %d",i);
		}
	}
	if(flag==0)
		printf("Pattern not found");
	printf("\n");
	return 0;

}
