// Write a program that will input n numbers, calculate the sum of all even numbers and all odd numbers in the array and print the larger sum.
//OMKAR AMRUT DASH C2_27//
#include<stdio.h>
int main()
{
     int i, n, sume=0,sumo=0;
     int numbers[50];
     printf("enter total numbers in array:\n");
       scanf("%d",&n);
       printf("\n enter the numbers:");
     for(i=0;i<n;i++)
     {
       //printf("\n enter the numbers:\n");
       scanf("%d",&numbers[i]);
     }
     printf("the inputted array is:");
      for(i=0;i<n;i++)
    {
       printf("%d ",numbers[i]);
    }

     for(i=0;i<n;i++)
     {
       if(numbers[i]%2==0)
       {
            sume=sume+numbers[i];
       }

       else
       sumo=sumo+numbers[i];
     }

    if(sume>sumo)
     {
         printf("\nthe sum of even number is greater :%d",sume);
     }
    else if(sume<sumo)
     {
         printf("\nthe sum of odd number is greater :%d",sumo);
     }
    else
     printf("\nthe sum of even number is equal to sum of odd numbers :%d",sume);
     return 0;
}
