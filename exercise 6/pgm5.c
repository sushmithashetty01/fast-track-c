#include <stdio.h>
#include <stdlib.h>

void check_EvenOdd(){

	FILE *fp1,*fp2,*fp3;
	char ch;
	int num;

	fp1=fopen("numbers.txt","r");
	fp2=fopen("even.txt","w+");
	fp3=fopen("odd.txt","w+");

	if(fp1==NULL){
		printf("Cannot open file\n");
		exit(0);
	}

	while(fscanf(fp1,"%d\n",&num)>0){
		if(num%2==0)
			fprintf(fp2,"%d\n",num);
		else
			fprintf(fp3,"%d\n",num);
	}
	printf("Copied even numbers to even.txt and odd numbers to odd.txt\n");
	fclose(fp3);
	fclose(fp2);
	fclose(fp1);

}

int main(int argc,char *argv[]){
	
	check_EvenOdd();
	return 0;
}