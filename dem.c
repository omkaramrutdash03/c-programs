// Write a program to sort a list of strings lexicographically (as per dictionary).
//OMKAR AMRUT DASH C2_27 //
#include<stdio.h>
#include<string.h>
int main()
{
   int i,n,j,min;
   char str[50][50], temp[20];
   printf("enter the total no of words you want to compare:");
   scanf("%d",&n);
   printf("enter the words:");
   for(i=0;i<n;i++)
   {
     scanf(" %[^\n]",str[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=0;j<n-i-1;j++)
       {
           if(strcmp(str[j],str[j+1])>0)
           {
           strcpy(temp,str[j]);
           strcpy(str[j],str[j+1]);
           strcpy(str[j+1],temp);
           }
       }
   }
   printf(" the lexographical order is:\n");
   for(i=0;i<n;i++)
   {
     printf("%s\n",str[i]);

   }
   return 0;
}
