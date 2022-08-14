// Write a program to enter a text that has commas. Replace all the commas with semi colons and then display it.
//OMKAR AMRUT DASH c2_27
#include<stdio.h>
int main()
{
   int i;
   char str[30];
   printf("enter the string:");
   gets(str);
   for(i=0;str[i]!='\0';i++)
   {
    if(str[i]==',')
    {
         str[i]=';';
          i++;
    }
   }
   str[i]='\0';
   printf("the corrected string is :%s",str);
   return 0;
}
