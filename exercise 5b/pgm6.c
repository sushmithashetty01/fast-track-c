#include <stdio.h>
#include <string.h>

struct _student_{

	char name[30];
	unsigned int reg_no;
	unsigned short int marks;
	unsigned short int cgpa;
	char branch[2]; 
};
typedef struct _student_ Student;

unsigned int increment_reg(Student[],unsigned int,char*);


void addNew(Student students[],unsigned int *no_students){

	Student stud;
	int choice;
	printf("Enter student details:\n");
	while(1){
		printf("1.CS\n2.EC\n3.EE\n4.ME\n5.CV\nSelect a branch: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:strcpy(stud.branch,"CS");stud.reg_no=increment_reg(students,*no_students,"CS");break;
			case 2:strcpy(stud.branch,"EC");stud.reg_no=increment_reg(students,*no_students,"EC");break;
			case 3:strcpy(stud.branch,"EE");stud.reg_no=increment_reg(students,*no_students,"EE");break;
			case 4:strcpy(stud.branch,"ME");stud.reg_no=increment_reg(students,*no_students,"ME");break;
			case 5:strcpy(stud.branch,"CV");stud.reg_no=increment_reg(students,*no_students,"CV");break;
			default: printf("Wrong branch number\n");continue;
		}
		break;
	}
	printf("Student name: ");
	scanf("%s",stud.name);
	getchar();
	printf("Marks: ");
	scanf("%hu",&stud.marks);
	printf("CGPA: ");
	scanf("%hu",&stud.cgpa);
	getchar();
	students[(*no_students)++]=stud;
}


unsigned int increment_reg(Student students[],unsigned int size,char *branch){

	unsigned int i,cur_val=0;
	for(i=0;i<size;i++){
		if(strcmp(students[i].branch,branch)==0)
			cur_val=students[i].reg_no;
	}
	return cur_val+1;
}


void displayMarks(Student students[],unsigned int no_students){
	int i,flag=0;
	for(i=0;i<no_students;i++)
		if (students[i].marks>90)
		{
			if(flag==0){
				printf("Name\tBranch\n");
				flag=1;
			}
			printf("%s\t%s\n",students[i].name,students[i].branch);
		}
	if(!flag)
		printf("No students with more than 90 marks\n");
}


void displayAll(Student students[],unsigned int no_students){
	int i,flag=0;
	for(i=0;i<no_students;i++){
		if(flag==0){
			printf("Reg_No\tName\tBranch\tMarks\tCGPA\n");
			flag=1;
		}
		printf("%s%u\t%s\t%s\t%hu\t%hu\n",students[i].branch,students[i].reg_no,students[i].name,students[i].branch,students[i].marks,students[i].cgpa);
	}
	if(!flag)
		printf("No student entries\n");
}


void countStudents(Student students[],unsigned int no_students){
	int i,count[5]={0};
	for(i=0;i<no_students;i++){
		if(strcmp(students[i].branch,"CS")==0)
			count[0]++;
		else if(strcmp(students[i].branch,"EC")==0)
			count[1]++;
		else if(strcmp(students[i].branch,"EE")==0)
			count[2]++;
		else if(strcmp(students[i].branch,"ME")==0)
			count[3]++;
		else if(strcmp(students[i].branch,"CV")==0)
			count[4]++;
	}
	printf("Number of students in CS branch: %d\n",count[0]);
	printf("Number of students in EC branch: %d\n",count[1]);
	printf("Number of students in EE branch: %d\n",count[2]);
	printf("Number of students in ME branch: %d\n",count[3]);
	printf("Number of students in CV branch: %d\n",count[4]);
}


int main(){
	Student students[20];
	unsigned int no_students=0,i=0,choice;
	while(1){
		printf("\nMenu\n1.Add student details\n2.Display students scored > 90 marks\n3.Count of students in each branch\n4.Display all students\n5.Exit\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:addNew(students,&no_students);break;
			case 2:displayMarks(students,no_students);break;
			case 3:countStudents(students,no_students);break;
			case 4:displayAll(students,no_students);break;
			case 5:return 0;
		}
	}
	return 0;
}