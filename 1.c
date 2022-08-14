#include<stdio.h>
 typedef struct{
    int rollno;
    char name[20];
    float totalmarks;
 }student;
int main()
{
   student s[20];
   int i,n;
   printf("\n Enter how many student records: ");
   scanf("%d",&n);
   printf("\n Enter the student records:\n");
   for(i=0; i<n; i++)
   {
       printf("\n Enter roll no: ");
       scanf("%d",&s[i].rollno);
       printf("\n Enter name: ");
       scanf(" %[^\n]",s[i].name);
       printf("\n Enter total marks out of 500 : ");
       scanf("%f",&s[i].totalmarks);
   }
   printf("\nThe students with more than 400 marks:");
  for (i=0; i<n; i++)
  {
      if(s[i].totalmarks>400)
       {
           printf("\n Student Record %d:", i+1);
           printf("\n Roll No: %d", s[i].rollno);
           printf("\n Name: %s",s[i].name);
           printf("\n Total Marks: %.f", s[i].totalmarks);
       }
       else
        printf("no student");
   }
}
