//Write a program to input n elements into an array and then copy the elements to another array after adding 1 to each of the elements.
//OMKAR AMRUT DASH C2_27 //
#include<stdio.h>
int main()
{
   int i,n;
   int before[100],after[100];
   //int after[100];
   printf("enter the total no of elements in the array:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("enter the elements:\n");
     scanf("%d",&before[i]);
   }
   printf("the inputted array is:");
   for(i=0;i<n;i++)
   {
       printf("%d ",before[i]);
   }
   printf("\nthe new array is:");
   for(i=0;i<n;i++)
   {
     after[i]=before[i]+1;
     printf("%d ",after[i]);
   }
   return 0;
}
