// Write a program to input two strings and then concatenate.
//OMKAR AMRUT DASH c2_27
#include<stdio.h>
int main()
{
   int i,j,c=0;
   char str1[30],str2[30];
   printf("enter the string 1:");
   gets(str1);
   printf("enter the string 2:");
   gets(str2);
   for(i=0;str1[i]!='\0';i++)
      c++;
   for(i=c,j=0;str2[j]!='\0';i++,j++)
   {
     str1[i]=str2[j];
   }
   str1[i]='\0';
   printf("the concatenate string is :%s",str1);
   return 0;
}
