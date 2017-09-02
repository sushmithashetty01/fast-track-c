#include <stdio.h>
#include <stdlib.h>

void reverseFile(){

	FILE *fp1,*fp2;
	int size;
	fp1=fopen("sample.txt","r");
	if(fp1 == NULL){
		printf("Cannot open file\n");
		exit(0);
	}
	fp2=fopen("newfile.txt","w");
	fseek(fp1,-1,SEEK_END);
	size=ftell(fp1)+1;
	while(size-- > 0){
		fputc(fgetc(fp1),fp2);
		fseek(fp1,-2,SEEK_CUR);
	}
	printf("Reversed contents of sample.txt to newfile.txt\n");
	fclose(fp1);
	fclose(fp2);
}

int main()
{
	reverseFile();
	return 0;
}