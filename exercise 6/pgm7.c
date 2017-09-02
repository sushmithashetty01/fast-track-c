#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
int n,i,number,*p,j,temp;


char ch[1000];
printf("How many numbers you want to write to the file: ");
scanf("%d",&n);
p=(int *) malloc(n*2);
fp = fopen("Input.txt","w");
	if(fp == NULL)
	{
	  printf("Error could not create file");
	}


if(p==NULL)
	{
		printf("\nMEMORY ALLOCATION UNSUCCESSFUL");
		
	}
int num[n];
printf("Enter %d numbers: \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
fprintf(fp,"%d ",num[i]);
}
fclose(fp);
fp = fopen("Input.txt","r");
	if(fp == NULL)
	{
	  printf("Error could not create file");
	}

fscanf(fp,"%[^\n]", ch);

    printf("Data from the file:%s\n", ch);
    for(i=0;i<n;i++)
	{ 
		for(j=0;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
  printf("\nTHE SORTED NUMBERS ARE:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
return 0;
}