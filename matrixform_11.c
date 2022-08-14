//. Write a program that will read a 2D array and display it in matrix format
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int main()
{
  int i,j,m,n;
  int arr[50][50];
  printf("enter the number of rows and columns");
  scanf("%d %d",&m,&n);
  printf("enter elements in the matrix\n");
  for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
     {
         printf("");
         scanf("%d",&arr[i][j]);
     }
  }
  printf("the entered matrix is:\n");
   for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          printf("%d ",arr[i][j]);
      }
      printf("\n");
  }

   return 0;
}


