//. Write a program that will print the numbers from 1 to n, where the value of n will be inputted by the user.//
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
  int i=1, n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}
