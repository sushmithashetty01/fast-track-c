#include <stdio.h>

int checkFibonacci(int n1,int n2,int n3){

	int first=0,second=1,temp;
	while(1){
		temp=first+second;
		if(n1==first && n2==second && n3==temp)
			return 1;
		else{
			first=second;
			second=temp;
			if(first>n1)
				return 0;

		}
	}


}

int main(){

	int n,i,temp;
	int n1,n2,n3;

	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);

	if(checkFibonacci(n1,n2,n3))
		printf("Numbers belong to Fibonacci series\n");
	else
		printf("Numbers do not belong to Fibonacci series\n");
	return 0;
}

