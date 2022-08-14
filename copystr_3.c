// Write a program that will copy one string into another string and display it.
//OMKAR AMRUT DASH c2_27
#include<stdio.h>
int main()
{
     char  str1[20], str2[20];
     int i=0;
     printf("enter the string:");
     gets(str1);
     for(i=0; str1[i] != '\0'; i++)
            str2[i] = str1[i];
     printf("\nThe given string is: %s", str1);
     printf("\nThe copied string is: %s", str2);
    return 0;
}
