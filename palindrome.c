// Write a program that will check a number is palindrome or not.//
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
    int n, r, f, i=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    f=n;
    while(n>0)
    {
        r=n%10;
        i=i*10+r;
        n=n/10;
    }
    if(f==i)
      printf("the number is  palindrome.");
    else
      printf("the number is not  palindrome.");
    return 0;
}
