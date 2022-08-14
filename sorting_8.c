//Write a program that will read n integers dynamically and sort them in  ascending order
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *ptr,n,i,j,temp;
      printf("enter total number of elements in the array: ");
      scanf("%d",&n);
      ptr=(int *)malloc(n *sizeof(int));
      printf("Enter %d Numbers:",n);
      for(i=0;i<=n-1;i++)
      {
            scanf("%d",(ptr+i));
      }
      for(i=0;i<n-1;i++)
      {
            for(j=0;j<n-i-1;j++)
            {
                  if(*(ptr+j)>*(ptr+(j+1)))
                  {
                        temp=*(ptr+j);
                        *(ptr+j)=*(ptr+(j+1));
                        *(ptr+(j+1))=temp;
                  }
            }
      }
      printf("After Sorting in Ascending Order:");
      for(i=0;i<n;i++)
      printf("%d ",*(ptr+i));
      return 0;
}
