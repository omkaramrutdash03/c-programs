//Define the functions that will add two numbers by using the following function prototype/declaration. Call both of them in main() and verify the result.
//OMKAR AMRUT DASHC2_27
#include<stdio.h>
int main()
{
  int sum(int x,int y);
  {
     int a,b,res;
     printf("enter two numbers:");
     scanf("%d %d",&a,&b);
     res=sum(a,b);
     printf("the sum of %d and %d is:%d",a,b,res);
     return 0;
  }
}
  int sum(int x,int y)
  {
    return x+y;
  }


