#include <stdio.h>

void swap(int *b, int *c){
	int temp;
	temp=*b;
	*b=*c;
	*c=temp;
}
void max_three(int arr[],int n){
	int i,j;

	for(i=0;i<3;i++)
		for(j=0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
	printf("First 3 maximum numbers are: %d %d %d\n",arr[n-1],arr[n-2],arr[n-3]);

}
int main(){

	int ret,n,arr[10],i;
	do{
		printf("How many numbers in the list (minimum 3)? ");
		scanf("%d",&n);
	}while(n<3);
	printf("Enter the numbers: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	max_three(arr,n);
	return 0;
}
