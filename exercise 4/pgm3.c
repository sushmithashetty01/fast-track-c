#include <stdio.h>
#include <assert.h>

int grace_marks(int score)
{

	int grace_intscore;
	if(score==49)
		grace_intscore=score+1;
	else if(score>=45 && score<=48)
		grace_intscore=score+2;
	else if(score>=40 && score<=44)
		grace_intscore=score+3;
	else if(score>=35 && score<=39)
		grace_intscore=score+4;
	else if(score>=30 && score<=34)
		grace_intscore=score+5;
	else if(score>=25 && score<=29)
		grace_intscore=score+6;
	else if(score<25)
		grace_intscore=25;
	return grace_intscore;
}

int main(){

	int score,grace_intscore;
	printf("Enter student marks: ");
	scanf("%d",&score);
	printf("grace internal score is: %d\n",grace_marks(score));

	int score1=26,score2=32,score3=49,score4=45,score5=13;

	assert(grace_marks(score1) == 32);
	assert(grace_marks(score2) == 37);
	assert(grace_marks(score3) == 50);
	assert(grace_marks(score4) == 47);
	assert(grace_marks(score5) == 25);

	return 0;
}

