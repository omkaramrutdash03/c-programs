//. Write a program to count the number of vowels, consonants and other characters in a string inputted by the user.
//OMKAR AMRUT DASH c2_27
#include<stdio.h>
int main()
{
   int length=0,i,nv=0,nc=0,other=0;
   char str[30];
   printf("enter the string:");
   gets(str);
   while(str[length]!='\0')
    length++;
    for(i=0;i<length;i++)
    {
      if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&& str[i]<='Z')
      {
         if(str[i]=='a'||str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
         {
            nv++;
         }
         else
         {
           nc++;
         }
      }
      else
      {
         other++;
      }
    }
    printf("total no of vowels is %d\n total no of consonants is %d\n other charecters is %d.",nv,nc,other);
   return 0;
}
