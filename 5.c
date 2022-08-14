#include<stdio.h>
#include<math.h>
typedef struct
{
   float a,b;
}point;
double findDistance( point x, point y)
{
  double distance;
  distance=sqrt((x.a-y.a)*(x.a-y.a)+(x.b-y.b)*(x.b-y.b));
  return distance;
}
point midpoint(point x,point y)
{
    point temp;
    temp.a=(x.a+y.a)/2;
    temp.b=(x.b+y.b)/2;
    return temp;
}
int main()
{
  point x,y,mid;
  printf("enter coordinate of point a:");
  scanf("%f %f",&x.a,&x.b);
  printf("enter coordinate of point b:");
  scanf("%f %f",&y.a,&y.b);
  printf("distance between x and y: %.2f\n",findDistance(x,y));
  mid=midpoint(x,y);
  printf("the midpoint is:(%.2f,%.2f)",mid.a,mid.b);
  return 0;
}
