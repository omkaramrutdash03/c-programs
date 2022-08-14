//. Write a program that will print all odd numbers between m and n, where the value of m and n will be inputted by the user.
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
   int m, n;
   printf("enter the values for m and n respectively:\n");
   scanf("%d %d",&m,&n);
   m++;
   while(m<n)
   {
       if(m%2==1)
         printf(" %d ",m);
         m++;
   }

   return 0;
}
