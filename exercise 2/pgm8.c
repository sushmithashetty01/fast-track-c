#include <stdio.h>



int main(){

	int n,i,temp;
	int sum=0;
	printf("n: ");
	scanf("%d",&n);
	temp=n;

	while(temp!=0){
		sum+=temp%10;  //sum=sum+temp%10
		temp=temp/10;
	}
	printf("%d\n",sum);

	return 0;
}

