//Write a program to delete an element from a certain position in an array of n numbers after taking suitable user inputs.
//OMKAR AMRUT DASH C2_27 //
#include<stdio.h>
int main()
{
   int i,n,element,posn;
   int numbers[100];
   printf("enter the total no of elements in  the array:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(i=0;i<n;i++)
   {
     printf("");
     scanf("%d",&numbers[i]);
   }
   printf("enter the position you want to delete:\n");
   scanf("%d",&posn);
   if(posn>=n+1)
   {
      printf("errror");
   }
   else
   {
    {
     for(i=0;i<n;i++)
     numbers[i]=numbers[i+1];
    }
    printf("the new array:");
     for(i=0;i<n-1;i++)
      printf("%d",numbers[i]);
   }
   return 0;

}
