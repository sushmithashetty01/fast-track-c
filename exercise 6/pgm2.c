#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("file1.txt","r");
	fp2=fopen("file2.txt","w+");
	if(fp1==NULL){
		printf("Cannot open file\n");
		exit(0);
	}

	while((ch=fgetc(fp1))!= EOF){
		putc(ch,fp2);
	}
	printf("contents of file1.txt to file2.txt copied\n");
	fclose(fp2);
	fclose(fp1);
	return 0;
}