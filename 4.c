#include<stdio.h>
#include<string.h>
typedef struct
{
    int day,month,year;
}dob;
typedef struct
{
    char name[50];
    char id[20];
    dob bday;
    float basic_pay,da,hra;
    char city[25];

}emp;
void input(emp*);
float process(emp*);
void display(emp*);
int main()
{
    emp e[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the details of employee %d.\n",i+1);
        input(&e[i]);
    }
    for(i=0;i<5;i++)
    {
        display(&e[i]);
    }
    return 0;
}
void input (emp *e)
{
    printf("Enter the name of the employee:");
    scanf(" %[^\n]",e->name);
    printf("Enter the ID of the employee:");
    scanf(" %[^\n]",e->id);
    printf("Enter the day of birth:");
    scanf("%d",&e->bday.day);
    printf("Enter the month of birth:");
    scanf("%d",&e->bday.month);
    printf("Enter the  year of birth:");
    scanf("%d",&e->bday.year);
    printf("Enter the basic pay of the employee:");
    scanf("%f",&e->basic_pay);
    printf("Enter the city of the employee:");
    scanf(" %[^\n]",e->city);
}
float process(emp *e)
{
    float gross;
    e->da=0.2*e->basic_pay;
    e->hra=0.1*e->basic_pay;
    gross=e->basic_pay+e->da+e->hra;
    return gross;
}
void display(emp *e)
{
    if(process(e)>50000&&strcmp(e->city,"bhubaneswar")==0)
    {
        printf("The name of the employee is: %s\n",e->name);
        printf("The Id of the employee is: %s\n",e->id);
        printf("The date of birth of employee is: %d/%d/%d \n",e->bday.day,e->bday.month,e->bday.year);
        printf("The city of the employee is: %s\n",e->city);
    }
}
