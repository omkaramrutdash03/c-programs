//. Write a program that will check an inputted number is prime or composite.//
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
#include<math.h>
int main()
{
  int i, n, flag=0;
  printf("enter a number:");
  scanf("%d",&n);
  for(i=2;i<=sqrt(n);i++)
   if(n%i==0)
   {
     flag=1;
     break;
   }
   if(flag==1)
      printf("the number is a composite number.");
   else
      printf("the number is a prime number.");
   return 0;
}
