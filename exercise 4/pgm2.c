#include <stdio.h>
#include <string.h>

int * get_grade_count(char grades[],int n)
{
	static int count[6]={0};
	int i;
	for(i=0;i<n;i++){
		switch(grades[i]){
			case 'A':count[0]++;
			break;
			case 'B':count[1]++;
			break;
			case 'C':count[2]++;
			break;
			case 'D':count[3]++;
			break;
			case 'E':count[4]++;
			break;
			case 'F':count[5]++;
			break;
		}
	}
	return count;
}

int main()
{
	int n,i,*count;
	char grades[100];

	printf("Enter number of students: ");
	scanf("%d",&n);
	printf("Enter grades of %d students: ",n);
	for(i=0;i<n;i++)
		scanf("%s",&grades[i]);
	count=get_grade_count(grades,n);
	printf("Students with grade A: %d\n",count[0]);
	printf("Students with grade B: %d\n",count[1]);
	printf("Students with grade C: %d\n",count[2]);
	printf("Students with grade D: %d\n",count[3]);
	printf("Students with grade E: %d\n",count[4]);
	printf("Students with grade F: %d\n",count[5]);

	return 0;
}
