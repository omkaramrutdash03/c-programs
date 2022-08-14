//8. Write a program that will read two integers and compute the LCM//
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
   int a,b,max,c;
     printf("Enter a & b : ");
     scanf("%d%d",&a,&b);
     max= (a>b) ? a:b;
     c=max;
     while(1)
     {
        if(max%a==0 && max%b==0)
        {
           printf("LCM of %d & %d is %d",a,b,max);
           break;
        }
        c=max++;
     }
  return 0;
}
