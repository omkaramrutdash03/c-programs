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
   for(j=0;j<n-1;j++)
   {
       min=j;
       i=j+1;
       while(i<n)
       {
           if(strcmp(str[i],str[j])>0)
               min=1;
           i++;
       }
       if(min!=j)
       {
           strcpy(temp,str[j]);
           strcpy(str[j],str[min]);
           strcpy(str[min],temp);
       }
   }
   printf(" the lexographical order is:\n");
   for(i=0;i<n;i++)
   {
     printf("%s\n",str[i]);

   }
   return 0;
}
