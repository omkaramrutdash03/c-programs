//. Write a function check_prime that will return 1 if the number passed to  it is prime and return -1 if it is composite. Call this in main() to write the  complete program.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
void display(int str[],int y);
void insert(int str[],int y);
void delete(int str[],int y);
int main()
{
  {
     int i,n,m,res,g;
     int str[40];
     printf("enter total no of elements into the array:");
     scanf("%f",&n);
      printf("enter elements into the array:");
      for(i=0;i<n;i++)
     scanf("%d",&str[i]);
     printf(" 1.read the integer array\n 2.insert an element\n 3.delete an element\n");
     printf("\n choose the option:");
     scanf("%d",&g);
     if(g==1)
     {
        res=sum(m,n);
        printf(" the sum is:%f",res);
     }
     else if(g==2)
     {
        res=difference(m,n);
        printf("the difference is:%f",res);
     }
     else if(g==3)
     {
        res=product(m,n);
        printf("the product is:%f",res);
     }
     else
     {
       printf("choose correct option");
     }
     return 0;
  }
  void display(int str[],int y)
  {
    int i;
    printf("the inputted array is:");
    for(i=0;i<y;i++)
    {
       printf("%d ",str[i]);
    }
  }
 void insert(int str[],int y)
 {
   int i,n,element,posn;
   printf("enter the total no of elements in the array:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("enter the elements:");
     scanf("%d",&str[i]);
   }
   printf("enter the number you want to insert:\n");
   scanf("%d",&element);
   printf("enter the index you want to insert:\n");
   scanf("%d",&posn);
   if(posn>n)
   {
       printf("error");
   }
   else if(posn<=n)
   {
       for(i=n-1;i>=posn;i--)
   {
     str[i+1]=str[i];
   }
   str[posn]=element;

   for(i=0;i<n+1;i++)
   {
     printf("%d ",str[i]);
   }
   }
 }
}

// void delete(int str[],int y)
 //{

 //}
