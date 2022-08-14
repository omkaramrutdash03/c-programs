//Write a program using function that will swap two numbers. The function  should pass pointer arguments.
//omkar amrut dash c2_27
#include<stdio.h>
void swap(int*, int*);
int main()
{
    int a, b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("before: a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nafter swap: a= %d, b= %d", a , b);
}
void swap(int  *x, int  *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
