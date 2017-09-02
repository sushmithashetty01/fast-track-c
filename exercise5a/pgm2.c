#include<stdio.h>

struct Line{
int x1,y1,x2,y2;
};



struct Line Create_Line();
int CheckLineType(struct Line ln);
int main()
{
 struct Line ln;
 ln=Create_Line();
 printf("Line  has co-ordinates:{%d,%d} and {%d,%d}\n",ln.x1,ln.y1,ln.x2,ln.y2);
 CheckLineType(ln);
 return 0;
}

struct Line Create_Line()
{
  struct Line l;
  printf("Enter the value of x1 and y1:\n");
  scanf("%d%d",&l.x1,&l.y1);
  printf("Enter the value of x2 and y2:\n");
  scanf("%d%d",&l.x2,&l.y2);
  return l;
}

int CheckLineType(struct Line ln)
{
  if((ln.x2-ln.x1) == 0)
  {
    printf("Line is vertical\n");
    return 1;
  }
  else if((ln.y2-ln.y1) == 0)
  {
    printf("Line is horizontal\n");
    return 2;
  }
  else
   {
     printf("Line is oblique\n");
     return 3;
   }
}