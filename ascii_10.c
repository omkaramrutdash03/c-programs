// Write a program to convert the given string, “GOOD MORNING” to “good morning”.
//OMKAR AMRUT DASH c2_27
#include<stdio.h>
int main()
{
   int i=0;
   char str[30];
   printf("enter the string:");
   gets(str);
   while(str[i]!='\0')
   {
     if(str[i]!=' ')
     {
       str[i]=str[i]+32;
     }
     i++;
   }
   str[i]='\0';
   printf("the corrected string is:%s",str);
   //printf("%s",str);
   return 0;

}
