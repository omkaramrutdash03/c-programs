//. Write a program to find the sum and average of numbers from 1 to n, where the value of n will be inputted by the user.
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
  int n,i=1;
  float s,a;
  printf("enter the value of n:");
  scanf("%d",&n);
  while(i<=n)
  {
     s=s+i;
     i++;
  }
  a=s/n;
  printf(" sum of numbers from 1 to %d is %.4f\n",n,s);
  printf(" average of numbers from 1 to %d is %.4f\n",n,a);
  return 0;

}
