//. Write a program to input two matrices and do the matrix addition after checking suitable condition.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int main()
{
  int i,j,m,n,r,c;
  int a[50][50],b[50][50],sum[50][50];
  printf("enter the number of rows and columns of 1st matrix:");
  scanf("%d %d",&m,&n);
  printf("enter elements for 1st matrix\n");
  for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
     {
         printf("");
         scanf("%d",&a[i][j]);
     }
  }
   printf("enter the number of rows and columns of 2nd matrix:");
  scanf("%d %d",&r,&c);
  printf("enter elements for 2nd matrix\n");
  for(i=0;i<r;i++)
  {
     for(j=0;j<c;j++)
     {
         printf("");
         scanf("%d",&b[i][j]);
     }
  }
  if(m==r && n==c)
  {
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
         sum[i][j]=a[i][j]+b[i][j];
     }
    }
    printf("the sum of the two matrices is:\n");
     for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
      {
         printf("%d ",sum[i][j]);

      }
      printf("\n");
    }
  }
  else
  printf("addition is not possible.");
  return 0;
}
