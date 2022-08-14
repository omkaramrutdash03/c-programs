// Develop a top down modular program to implement a calculator. The program should request user to input two numbers and calculate one of the following as per the choice of the user selected from a menu.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
float sum(float ,float );
float difference(float,float);
float product(float,float );
float division(float,float);
int main()
{
     int g;
     float m,n,res;
     printf("enter two numbers:");
     scanf("%f %f",&m,&n);
     printf(" 1.sum\n 2.difference\n 3.product\n 4.division\n choose the option:");
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
     else if(g==4)
     {
        res=division(m,n);
        printf("the division is:%f",res);
     }
     else
     {
       printf("choose correct option");
     }
     return 0;
}
  float sum(float x,float y)
  {
    return x+y;
  }
  float difference(float x,float y)
  {
    return x-y;
  }
   float product(float x,float y)
  {
    return x*y;
  }
   float division(float x,float y)
  {
    return x/y;
  }
