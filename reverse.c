//Write a program that will reverse a number inputted by the user.
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{

    int n, r, i=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        i=i*10+r;
        n=n/10;
    }
    printf("the reverse number is:%d",i);
    return 0;
}
