// Write a program to enter a line of text. Then enter a pattern and count the number of times the pattern is repeated in the text.
//OMKAR AMRUT DASH C2_27
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50],str2[50];
    int i, j,len1=0,len2=0,c=0,count=0;
     printf("Enter the string :");
     scanf(" %[^\n]", str1);
      while (str1[len1] != '\0')
        len1++;
    printf("Enter the pattern\n:");
    scanf(" %[^\n]", str2);
    len2=strlen(str2);
    for(i=0;i<len1;)
    {
        j=0;
        c=0;
        while(str1[i]==str2[j])
        {
              c++;
              j++;
              i++;
        }
        if(c==len2)
          {
             count++;
          }
          else
            i++;
    }
    printf("frequency of the pattern is %d",count);
  return 0;
  }
