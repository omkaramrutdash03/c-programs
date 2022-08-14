//Write a program that will read n integers dynamically, add them and display  the sum.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,j,min,temp;
    printf("enter total number of elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
     for(i=0;i<n-1;i++)
    {
       min=*ptr;
       for(j=i+1;j<n;j++)
       {
         if(*(ptr+j)<min)
         {
          min=*(ptr+j);
         }
       }
     if(min!=*(ptr+j))
      {
          temp=*(ptr+i);
         *(ptr+i)=min;
          min=temp;
      }
    }
    free(ptr);
    for(i=0;i<n;i++)
    printf("%d ",*(ptr+i));
    return 0;
}


