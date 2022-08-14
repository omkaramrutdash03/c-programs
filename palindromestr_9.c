//. Write a program that will check the given string is palindrome or not.
//OMKAR AMRUT DASH C2_27
#include <stdio.h>
#include <stdlib.h>
int main()
{
     char str[50];int i,len=0,mid,begin,end;
     printf("Enter the string :");
     gets(str);
      while(str[len]!= '\0')
           len++;
     mid=len/2;
     begin=0;end=len-1;
     while (begin<mid)
     {
          if(str[begin]!=str[end])
          {
               printf("%s is not a palindrome",str);
               exit(0);
          }
          begin=begin+1;
          end=end-1;
     }
          printf("%s is a palindrome",str);
     return 0;
}
