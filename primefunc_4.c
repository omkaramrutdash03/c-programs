//Write a function check_prime that will return 1 if the number passed to it is prime and return -1 if it is composite. Call this in main() to write the complete program.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
     int a,res;
     printf("enter a numbers:");
     scanf("%d",&a);
     res=prime(a);
     printf("%d",res);
     return 0;
}
int prime(int n)
{
  int i, flag=0;
  for(i=2;i<=sqrt(n);i++)
  {
     if(n%i==0)
   {
     flag=1;
     break;
   }
  }
   if(flag==1)
      //printf("composite number");
      return -1;
   else
      //printf("the number is a prime number.");
      return 1;
}
