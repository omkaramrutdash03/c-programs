//Test the following code segment. First predict the output and then test in the computer.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int main()
{
    int a=10;
    int *ptr = &a;
    printf("%d %x",a,ptr); //value of a and address of a
    printf("\n%d %x %u",a,ptr,&ptr);  //value of a, address of a and address of pointer
}
