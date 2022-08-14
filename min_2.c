//. Write a program that will input n numbers and display the minimum.
//OMKAR AMRUT DASH C2-27
#include<stdio.h>
int main()
{
     int i, n, min;
     int numbers[50];
     printf("enter total numbers in array:\n");
       scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("\n enter the numbers:");
       scanf("%d",&numbers[i]);
     }
     min=numbers[0];
     for(i=1;i<n;i++)
     {
        if(min>numbers[i])
            min=numbers[i];
     }
     printf("the minimum is:%d",min);
     return 0;

}
