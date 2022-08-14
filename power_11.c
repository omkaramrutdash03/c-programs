// Write a recursive function for power(x,n).
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
 double power(int ,int);
int main()
  {
     int a,b;
     float ans;
     printf("enter a number and its power respectively:");
     scanf("%d %d",&a,&b);
     ans=power(a,b);
     printf("the answer is :%f",ans);
     return 0;
  }
  double power(int x,int y)
  {
   if(y==0)
    return 1;
   else
    return x*power(x,y-1);
  }
