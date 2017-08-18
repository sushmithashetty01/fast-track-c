#include <stdio.h>

int arr(int a[], int b[], int n);

int main()
{
	int a[10],b[10],i,j,n;
	printf ("Enter the size of arrays:");
	scanf ("%d",&n);
	printf ("Enter the first array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf ("Enter the second array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	j = arr(a, b, n);

	if (j==1)
	{
		printf("Arrays are equal\n");
	}
	else
	{
		printf("Arrays are not equal\n");
	}
	return 0;
}

int arr(int a[],int b[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
		
	}
	return 1;
}