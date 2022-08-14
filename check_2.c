//2. Write a program to check, which of the operators out of +, -, *, /, ++, -- are applicable on the pointers and which are not.
#include<stdio.h>
int main()
{
    int a=5,b=10,sum,diff,pro,div,pp,mm;
    int *p1=&a,*p2=&b;

    //sum=p1+p2;    //invalid
    diff=p1-p2;
    //pro=p1 * p2;  //invalid
    //div=p1/p2;    //invalid
    p1++;
    p2--;

    printf("%d  %d  %d",diff, p1,p2);
    return 0;
}
