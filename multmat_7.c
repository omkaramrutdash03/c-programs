//Design the matrix multiplication program by using user defined functions. It should have three functions: input_matrix, multiply_matrix and  display_matrix.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
void input(int a[10][10], int b[10][10], int r1,int r2, int c1, int c2);
void multiply(int a[10][10], int b[10][10], int mult[10][10],int r1,int r2, int c1,int c2);
void display(int mult[10][10],int r1,int c2);
int main()
{
    int nr1, nc1, nr2, nc2, a[10][10], b[10][10], mult[10][10];
    printf("Enter no. of rows and column of first matrix : \n");
    scanf("%d %d",&nr1,&nc1);
    printf("Enter no. of rows of second matrix : \n");
    scanf("%d %d",&nr2,&nc2);
    if(nc1!=nr2)
    {
        printf("Multiplication of matrices is invalid.");
    }
    else
    {
        input(a,b,nr1,nr2,nc1,nc2);
        multiply(a,b,mult,nr1,nr2,nc1,nc2);
        display(mult,nr1,nc2);
    }
    return 0;
}
void input(int a[10][10], int b[10][10], int r1,int r2, int c1, int c2)
{
    int i,j;
    printf("Enter the elements of matrix a : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           // printf("a%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix b : \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            //printf("b%d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
}
void multiply(int a[10][10], int b[10][10], int mult[10][10],int r1,int c1,int r2, int c2)
{
    int i,j,k;
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                mult[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    mult[i][j]=mult[i][j] + a[i][k]*b[k][j];
                }
            }
        }
}
void display(int mult[10][10],int r1,int c2)
{
    int i,j;//nr1,nc2;
    printf("The product of the matrices is : ");
    for(i=0;i<r1;i++)
    {
        printf("\n");
        for(j=0;j<c2;j++)
            printf("%d\t",mult[i][j]);
    }
}
