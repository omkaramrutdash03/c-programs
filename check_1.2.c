//Test the following code segment. First predict the output and then test in the computer.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int main()
{
    int a=10,**p;
    int *ptr = &a;
    p=&ptr;
    printf("%d %u %d %d %x %x", a, ptr,*ptr,**p,p,*p);

    //value of a, address of a, value of a, value of a, address of ptr, address of a
}
