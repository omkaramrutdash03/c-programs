//. Write a program to input two matrices and do the matrix multiplication after checking suitable condition.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int main()
{
   int i,j,r1,c1,r2,c2,k;
   int a[50][50],b[50][50],mult[50][50];
   printf("enter the number of rows and columns of 1st matrix:");
   scanf("%d %d",&r1,&c1);
   printf("enter the number of rows and columns of 2nd matrix:");
   scanf("%d %d",&r2,&c2);
   if(c1!=r2)
   {
    printf("multiplication is not possible.");
   }
   else
   {
    printf("enter elements for 1st matrix\n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
     {
         printf("");
         scanf("%d",&a[i][j]);
     }
    }

    printf("enter elements for 2nd matrix\n");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
     {
         printf("");
         scanf("%d",&b[i][j]);
     }
    }
    {
      for(i=0;i<r1;i++)
      {
        for(j=0;j<c2;j++)
        {
            mult[i][j]=0;
            for(k=0;k<c1;k++)
            {
                mult[i][j]=mult[i][j]+a[i][k]*b[k][j];


            }
        }
      }
      printf("the multiplication of the two matrices is:\n");
     for(i=0;i<r1;i++)
     {
       for(j=0;j<c2;j++)
       {
         printf("%d  ",mult[i][j]);

       }
       printf("\n");
    }
  }
  }
  return 0;
}
