//Define the functions that will add two numbers by using the following function prototype/declaration. Call both of them in main() and verify the result.
//OMKAR AMRUT DASHC2_27
#include<stdio.h>
int sum(int ,int );
void sum1();
int main()
{
     int a,b,res;
     printf("enter two numbers:");
     scanf("%d %d",&a,&b);
     res=sum(a,b);
     printf("the sum of %d and %d is:%d",a,b,res);
     sum1();
     return 0;
}
int sum(int x,int y)
{
    return x+y;
}
void sum1()
{
   int a,b,s;
   printf("\nenter two numbers:");
   scanf("%d %d",&a,&b);
   s=a+b;
   printf("the sum of two numbers:%d",s);
}


