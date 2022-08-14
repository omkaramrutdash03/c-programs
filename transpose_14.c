//. Write a program to display transpose of the inputted matrix.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int main()
{
  int i,j,m,n;
  int arr[50][50], trans[50][50];
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
  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          trans[j][i]=arr[i][j];
      }
  }
  printf("the transpose of entered matrix is:\n");
   for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          printf("%d ",trans[i][j]);
      }
      printf("\n");
  }

   return 0;
}
