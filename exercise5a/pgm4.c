#include <stdio.h>

typedef struct _line_{
	short int x1,y1,x2,y2;
}Line;

Line initialise(short int x1,short int y1,short int x2,short int y2){
	Line l;
	l.x1=x1;
	l.x2=x2;
	l.y1=y1;
	l.y2=y2;
	return l;
}


void check_Intersect(Line l1,Line l2){

	float slope1,slope2;
	slope1=(float)(l1.y2-l1.y1)/(l1.x2-l1.x1);
	slope2=(float)(l2.y2-l2.y1)/(l2.x2-l2.x1);

	if(slope1!=slope2)
		printf("Lines intersect\n");
	else
		printf("Lines don't intersect\n");

}

int main(){

	Line line1,line2;
	short int x1,y1,x2,y2;
	unsigned short int type;

	printf("Enter coordinates of one point of line1: ");
	scanf("%hd%hd",&x1,&y1);
	printf("Enter coordinates of another point of line1: ");
	scanf("%hd%hd",&x2,&y2);
	line1=initialise(x1,y1,x2,y2);

	printf("Enter coordinates of one point of line2: ");
	scanf("%hd%hd",&x1,&y1);
	printf("Enter coordinates of another point of line2: ");
	scanf("%hd%hd",&x2,&y2);
	line2=initialise(x1,y1,x2,y2);

	check_Intersect(line1,line2);

	return 0;
}