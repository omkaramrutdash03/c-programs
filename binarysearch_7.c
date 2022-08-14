//Write a program to input an array of n elements and apply binary search algorithm to  search an element. Print the position of the element if it is found, otherwise display the message the element not found
//OMKAR AMRUT DASH C2_27 //
#include<stdio.h>
int main()
{
   int i,element,found=0,n,mid,low=0,high;
   int numbers[100];
   printf("enter the total no of elements in the array:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(i=0;i<n;i++)
   {
     printf("");
     scanf("%d",&numbers[i]);
   }
   printf("enter the number you want to search:\n");
   scanf("%d",&element);
   high=n-1;
   while(low<=high)
   {
      mid=(low+high)/2;
     if(element<numbers[mid])
     {
       high=mid-1;
     }
     else if(element>numbers[mid])
     {
       low=mid+1;
     }
     else if(element=numbers[mid])
     {
       printf("the number is found at index:%d",mid);
       found=1;
       break;
     }
   }
   if(found==0)
    {
      printf("not found.");
    }
    return 0;
}

