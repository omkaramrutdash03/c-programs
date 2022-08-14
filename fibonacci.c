//. Write a program to print the Fibonacci numbers up to n number of terms.
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
  int f, i, n, a=0, b=1;
  printf("enter a mumber:\n");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  {
     printf("%d",a);
    f=a+b;
    a=b;
    b=f;
  }
  return 0;
}
