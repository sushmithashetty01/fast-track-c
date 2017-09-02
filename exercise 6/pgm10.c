#include <stdio.h>
#include <stdlib.h>

void sort(int *arr,int n){

	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++)
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	}
	
}

void mergeFiles(){

	FILE *fp1,*fp2;
	int i=0,j,num;
	int num_array[100];
	fp1=fopen("fileA.txt","r");
	fp2=fopen("fileB.txt","r+");
	if(fp1 == NULL || fp2 == NULL){
		printf("Cannot open file\n");
		exit(0);
	}
	while((fscanf(fp1,"%d\n",&num))>0)
		num_array[i++]=num;
	while((fscanf(fp2,"%d\n",&num))>0)
		num_array[i++]=num;
	sort(num_array,i);

	fseek(fp2,0,SEEK_SET);
	for(j=0;j<i;j++)
		fprintf(fp2,"%d\n",num_array[j]);

	printf("Merged files fileA.txt and fileB.txt into a sorted fileB.txt\n");
	fclose(fp1);
	fclose(fp2);
}

int main()
{
	mergeFiles();
	return 0;
}