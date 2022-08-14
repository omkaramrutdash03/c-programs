//. Write a program that will read two numbers and compute GCD using recursion.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int gcd(int,int);
int main()
{
     int a,b,res;
     printf("enter two numbers:");
     scanf("%d %d",&a,&b);
     res=gcd(a,b);
     printf("%d",res);
     return 0;
}
int gcd(int m,int n)
{
   int p;
   while(n>0)
   {
       p=m%n;
       m=n;
       n=p;
   }
   return m;
}
