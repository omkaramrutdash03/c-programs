#include<stdio.h>
void mult(int arr[r][c],int r,int c)
int main()
{
   int i,j,r1,c1,r2,c2,p;
   int a[50][50],b[50][50],mult[50][50];
   printf("enter the number of rows and columns of 1st matrix:");
   scanf("%d %d",&r1,&c1);
   printf("enter the number of rows and columns of 2nd matrix:");
   scanf("%d %d",&r2,&c2);
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
    printf("1.display inputted matrix\n2.mutiply two matrices");
    if(p==1)
    {
        display(a,r1,c1);
        display(b,r2,c2);
    }
    if(p==2)
    {
       //multiply(a,b);

    }
    return 0;
    }
    void display(arr[r][c],r,c)
    {
        int i,j;
        printf("enter elements for 1st matrix\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
       {
         printf("");
         scanf("%d",&arr[i][j]);
       }
    }
    }
