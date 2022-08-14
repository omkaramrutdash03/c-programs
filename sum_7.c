//Write a program that will read n integers dynamically, add them and display  the sum.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,sum=0;
    printf("enter total number of elements:");
    scanf("%d",&n);
    printf("enter elements:");
    ptr=(int*)malloc(n*sizeof(int));
    if (ptr==NULL)
    {
       printf("\n Error in memory allocation");
       exit(0);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
            sum=sum+*(ptr+i);
        }
    }
    free(ptr);
    printf("the sum of the inputted numbers is:%d",sum);
    return 0;
}


