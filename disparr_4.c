//Define a function (pointer as a parameter) that will display all elements of the  array. Call it in main().
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
void display(int *p,int n);
int main()
{
    int a[20], i, n;
    printf("\n Enter no. of elements:");
    scanf("%d", &n);
    printf("\n Input elements:",n);
    for (i=0; i<n;i++)
        scanf("%d", a+i);
    printf("\n Elements of the array:");
    display(a,n);
   return 0;
}
void display(int *p,int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%d ", *(p+i));
}
