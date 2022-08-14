//Write a program that will print nth term of the Fibonacci series using recursion
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int fibo(int);
int main()
{
   int a,m;
   printf("enter a number:");
   scanf("%d",&a);
   m=fibo(a);
   printf("the nth term is:%d",m);
   return 0;
}
int fibo(int n)
{
    if (n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return(fibo(n-1) + fibo(n-2));
}
