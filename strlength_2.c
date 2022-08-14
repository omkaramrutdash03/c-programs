//2. Write a program to input a string and find its length
//OMKAR AMRUT DASH c2_27
#include<stdio.h>
int main()
{
   int count=0;
   char str[30];
   printf("enter the string:");
   gets(str);
   while(str[count]!='\0')
    count++;
   printf("the length of the string is:%d",count);
   return 0;

}
