// Write a program that will print the numbers between m and n, where the value of m and n will be inputted by the user.//
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
    int m, n;
    printf("Enter the value of m and n :");
    scanf("%d %d",&m,&n);
    m++;
    while(m<n)
    {
        printf("%d\n",m);
        m++;
    }
    return 0;
}

