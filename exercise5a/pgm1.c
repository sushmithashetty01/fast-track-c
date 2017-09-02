#include<stdio.h>

struct Point{
int x;
int y;
};



struct Point Create_Point();
int Check_Quadrant(struct Point pt);
int main()
{
 struct Point pt;
 pt=Create_Point();
 printf("Point has co-ordinates:{%d,%d}\n",pt.x,pt.y);
 Check_Quadrant(pt);
 return 0;
}

struct Point Create_Point()
{
  struct Point p;
  printf("Enter the value of x:\n");
  scanf("%d",&p.x);
  printf("Enter the value of y:\n");
  scanf("%d",&p.y);
  return p;
}

int Check_Quadrant(struct Point pt)
{
  if (pt.x > 0 && pt.y > 0)
	{
        printf("point (%d, %d) lies in the First quandrant\n",pt.x,pt.y);
        return 1;
	}
    else if (pt.x < 0 && pt.y > 0)
	{
        printf("point (%d, %d) lies in the Second quandrant\n",pt.x,pt.y);
        return 2;
        }
    else if (pt.x < 0 && pt.y < 0)
        {
          printf("point (%d, %d) lies in the Third quandrant\n",pt.x,pt.y);
          return 3;
        }
    else if (pt.x > 0 && pt.y < 0)
        {
        printf("point (%d, %d) lies in the Fourth quandrant\n",pt.x,pt.y);
        return 4;
        }
    else if (pt.x == 0 && pt.y == 0)
        printf("point (%d, %d) lies at the origin\n",pt.x,pt.y);
   return 0;
}
