//Write a program to delete an element from a certain position in an array of n numbers after taking suitable user inputs.
//OMKAR AMRUT DASH C2_27 //
#include<stdio.h>
int main()
{
    int i, n, pos, num[50];
    printf("Enter the total number of elements : \n");
    scanf("%d",&n);
    printf("Enter the numbers : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter the position of number to be deleted : \n");
    scanf("%d",&pos);
     if(pos>=n+1)
    {
      printf("errror");
    }
    else
    {
      for(i=pos;i<n;i++)
      {
        num[i]=num[i+1];
      }
      printf("The array  after deletion is : \n");
      for(i=0;i<n-1;i++)
      {
        printf("%d\n",num[i]);
      }
    }
    return 0;
}
