//. Define a function (pointer as a parameter) that reverses (in place) the elements of a given array. Call it in main().
#include<stdio.h>
void reverse(int *,int);
int main()
{
   int i,n,arr[30];
   printf("enter total number of elements:");
   scanf("%d",&n);
   printf("enter the array:");
   for(i=0;i<n;i++)
     scanf("%d",(arr+i));
   reverse(arr,n);
   return 0;
}
void reverse(int *p, int n)
{
  int i;
  printf("the reverse of the array is:");
  for(i=n-1;i>=0;i--)
     printf("%d ",*(p+i));
}
