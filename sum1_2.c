//Define the functions that will add two numbers by using the following function prototype/declaration. Call both of them in main() and verify the result.
//OMKAR AMRUT DASHC2_27
#include<stdio.h>
void sum1(void);
int main()
{
  sum1();
}
void sum1()
{
   int a,b,s;
   printf("enter two numbers:");
   scanf("%d %d",&a,&b);
   s=a+b;
   printf("the sum of two numbers:%d",s);
}
