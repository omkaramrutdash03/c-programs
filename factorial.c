// Write a program to find the factorial of a number, where the number will be inputted by the user.
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
    int i, n, f=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf(" The factorial of %d is %d.",n,f);
    return 0;
}
