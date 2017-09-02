#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){

	FILE *fp1,*fp2;
	char ch;
	if(argc==3){
		fp1=fopen(argv[1],"r");
		fp2=fopen(argv[2],"w+");
		if(fp1==NULL){
			printf("Cannot open file - %s\n",argv[1]);
			exit(0);
		}

		while((ch=fgetc(fp1))!=EOF){
			putc(ch,fp2);
		}
		printf("contents of %s to %s copied\n",argv[1],argv[2]);
		fclose(fp2);
		fclose(fp1);
	}else
		printf("arguments insufficient\n");
	return 0;
}
