//Write a program that will input n numbers and display the minimum and maximum.
//OMKAR AMRUT DASH_C2_27
#include<stdio.h>
int main()
{
   int i,max,min,n;
   int numbers[100];
   printf("enter the total no of elements in the array:");
   scanf("%d",&n);
   printf("enter the numbers:");
   for(i=0;i<n;i++)
   {
     //printf("enter the elements:");
     scanf("%d",&numbers[i]);
   }
   min=numbers[0];
   max=numbers[0];
   for(i=1;i<n;i++)
   {
     if(min>numbers[i])
        min=numbers[i];
     if(max<numbers[i])
        max=numbers[i];
   }
   printf("the maximum is :%d and the minimum is :%d",max,min);
   return 0;
}
