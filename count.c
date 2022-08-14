//Write a program will count the number of digits//
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
  int n, i=0;
  printf("enter a number:");
  scanf("%d",&n);
  while(n>0)
  {
     i++;
     n=n/10;
  }
  printf("the number of digits in the number is:%d",i);
  return 0;
}
