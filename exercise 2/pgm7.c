#include <stdio.h>

int factorial(int n){

	if(n==0)
		return 1;
	else
		return factorial(n-1)*n;
}

int main(){

	int n,i;
	float sum=0;
	printf("n: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		sum=sum+(1/(float)factorial(i));
	}
	printf("%f\n",sum);
	return 0;
}

