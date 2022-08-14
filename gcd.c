//Write a program that will read two integers and compute the GCD
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
    int a, b, x;
    printf("Enter two numbers to find GCD : \n");
    scanf("%d %d",&a,&b);
    while(b>0)
    {
        x=a%b;
        a=b;
        b=x;
    }
    printf("gcd of two numbers is: %d",a);
    return 0;
}
