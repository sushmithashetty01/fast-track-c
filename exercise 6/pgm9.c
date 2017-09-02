#include <stdio.h>
#include <stdlib.h>

void reverseFile(){

	FILE *fp1,*fp2;
	int size,i=0,j;
	fp1=fopen("sample.txt","r+");
	if(fp1 == NULL){
		printf("Cannot open file\n");
		exit(0);
	}
	fseek(fp1,-1,SEEK_END);
	size=ftell(fp1)+1;
	char contents[size];
	while(size-- > 0){
		contents[i++]=fgetc(fp1);
		fseek(fp1,-2,SEEK_CUR);
	}
	fseek(fp1,0,SEEK_SET);
	for(j=0;j<i;j++)
		fputc(contents[j],fp1);
	printf("Reversed contents of sample.txt\n");
	fclose(fp1);
}

int main()
{
	reverseFile();
	return 0;
}