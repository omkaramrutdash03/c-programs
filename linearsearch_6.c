//Write a program by using pointer and function, for linear search
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
void find(int,int,int*);
int main()
{
   int arr[100],i,element,n,res;
   printf("enter the total no of elements in the array:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
   printf("enter the element you want to search:");
   scanf("%d",&element);
   find(n,element,arr);
   return 0;
}
void find(int n,int x,int *p)
{
   int i,found=0;
   for(i=0;i<n;i++)
   {
     if(*(p+i)==x)
     {
       found=1;
       printf("the number is found at index: %d",i);
       break;
     }
   }
   if(found==0)
   {
      printf("the element is not found");
   }

}

