//Write a program to input a string and then reverse it.
//OMKAR AMRUT DASH c2_27
#include<stdio.h>
int main()
{
   int i,j, len=0;
   char str[30];char rev[30];
   printf("enter the string:");
   gets(str);
   while(str[len]!=0)
    {
        len++;
    }
    j=len-1;

   for(i=0;i<len;i++)
    {
       rev[i]=str[j];
       j--;
    }
    rev[i]='\0';
    printf("the reverse of the string is:%s",rev);
   return 0;
}
