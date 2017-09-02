#include <stdio.h>
#include <stdlib.h>

void compare_Files(){

	FILE *fp1,*fp2;
	char ch1,ch2;
	int ret=1;
	fp1=fopen("sample.txt","r");
	fp2=fopen("newfile.txt","r");
	if(fp1==NULL||fp2==NULL){
		printf("Cannot open file\n");
		exit(0);
	}

	while((ch1=fgetc(fp1))!=EOF){
		if(ch1!=fgetc(fp2)){
			ret=0;
			break;
		}
	}
	if(ret!=0  && (fgetc(fp2)==EOF))
		printf("Files are same\n");
	else
		printf("Files are not same\n");
	
	fclose(fp2);
	fclose(fp1);

}


int main(){
	
	compare_Files();
	return 0;
}