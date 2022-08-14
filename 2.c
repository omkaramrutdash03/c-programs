#include<stdio.h>
typedef struct
{
     float real;
     float imag;
}complex;
complex add(complex, complex);
int main()
{
    complex n1, n2, sum;
    printf("\nEnter real and imaginary part of 1st number:");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nEnter real and imaginary part of 2nd number:");
    scanf("%f %f", &n2.real, &n2.imag);
    sum = add(n1,n2);
    printf("\n Sum = %.1f + %.1f i", sum.real, sum.imag);
}
complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real+n2.real;
    temp.imag=n1.imag+n2.imag;
    return temp;
}
