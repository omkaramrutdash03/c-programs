//Write a program that will sort a list of numbers in ascending order by using Selection sort algorithm.
//OMKAR AMRUT DASH C2_27 //
#include<stdio.h>
int main()
{

   int i,n,j,temp,min;
   int numbers[100];
   printf("enter the total no of elements in the array:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(i=0;i<n;i++)
   {
     printf("");
     scanf("%d",&numbers[i]);
   }
   for(i=0;i<n-1;i++)
   {
       min=i;
     for(j=i+1;j<n;j++)
     {
       if(numbers[j]<numbers[min])
       {
         min=j;
       }
     }
     if(min!=j)
     {

      temp=numbers[i];
      numbers[i]=numbers[min];
      numbers[min]=temp;
     }
   }
   printf("the array in ascending order :");
   for(i=0;i<n;i++)
   printf("%d ",numbers[i]);
   return 0;
}
