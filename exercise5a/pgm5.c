#include<stdio.h>
#include<math.h>

struct Point
{
  int ax,bx,cx,dx;
  int ay,by,cy,dy;
};

struct Rectangle
{
  int length;
  int breadth;
  struct Point pt;
};


struct Rectangle Create_Rectangle();
void CalcAreaPer(struct Rectangle rt);


int main()
{
 struct Rectangle rect;
 rect =Create_Rectangle();
 CalcAreaPer(rect);
 return 0;
}

struct Rectangle Create_Rectangle()
{
  struct Rectangle r;
  printf("Enter the value of rectangle point A:\n");
  scanf("%d%d",&r.pt.ax,&r.pt.ay);
  printf("Enter the value of rectangle point B:\n");
  scanf("%d%d",&r.pt.bx,&r.pt.by);
  printf("Enter the value of rectangle point C:\n");
  scanf("%d%d",&r.pt.cx,&r.pt.cy);
  printf("Enter the value of rectangle point D:\n");
  scanf("%d%d",&r.pt.dx,&r.pt.dy);
  printf("Vertices of rectangle ABCD are:\nA={%d,%d}\nB={%d,%d}\nC={%d,%d}\nD={%d,%d}\n",r.pt.ax,r.pt.ay,r.pt.bx,r.pt.by,r.pt.cx,r.pt.cy,r.pt.dx,r.pt.dy);
  return r;
}

void CalcAreaPer(struct Rectangle r)
{
  float length,width,area,perimeter;
  // calculate length & width using distance formula
  float i = (r.pt.bx-r.pt.ax)*(r.pt.bx-r.pt.ax);
  float j = (r.pt.by-r.pt.ay)*(r.pt.by-r.pt.ay);
  float k =(r.pt.cx-r.pt.bx)*(r.pt.cx-r.pt.bx);
  float m = (r.pt.cy-r.pt.by)*(r.pt.cy-r.pt.by);
  length = sqrt(i+j);
  width =  sqrt(k+m);
  area = length*width;
  perimeter = 2*(length + width);
  printf("Area of the rectangle is:%f",area);
  printf("Perimeter of the rectangle is:%f",perimeter);

}
