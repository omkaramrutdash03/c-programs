//Write a function that will take a parameter as an integer and returns the factorial of that number
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int factorial(int);
int main()
{
     int a,res;
     printf("enter a number:");
     scanf("%d",&a);
     res=factorial(a);
     printf("the factorial of %d is:%d",a,res);
     return 0;
}
int factorial(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
