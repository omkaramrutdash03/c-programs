//. Write a program that will read a number and compute sum of its digits.//
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
   int n, r,i=0;
   printf("enter the number:");
   scanf("%d",&n);
   while(n>0)
   {
     r=n%10;
     i=i+r;
     n=n/10;
   }
   printf("the sum of the digits of the number is:%d",i);
   return 0;
}

