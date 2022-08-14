//Write a program that will find factorial of a number using recursion
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int factorial(int );
int main()
  {
     int a,ans;
     printf("enter a number:");
     scanf("%d",&a);
     ans=factorial(a);
     printf("the factorial of %d is:%d",a,ans);
     return 0;
  }
  int factorial(int x)
  {
     if(x==0 || x==1)
     {
       return 1;
     }
     else
     {
        return x*factorial(x-1);
     }

  }
