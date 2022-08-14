//Write a program to read a sentence. Then count the number of words in the sentence.
//OMKAR AMRUT DASH c2_27
#include<stdio.h>
int main()
{
   int i,count=0;
   char str[30];
   printf("enter the string:");
   gets(str);
  for(i=0;str[i]!='\0';i++)
   {
      if(str[i]==' ' && str[i+1]!=' ')
      count++;
   }
   printf("total number of words in the string is:%d",count+1);
   return 0;

}
