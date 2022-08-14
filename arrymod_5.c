//Develop a top down modular program that will perform the following task a. Read an integer array. b. Insert an element at the kth position c. Delete an element from the kth position
//OMKAR AMRUT DASH C2_27
#include <stdio.h>
void read(int arr[100],int n);
void display(int arr[100],int n);
void insert(int arr[100],int n);
void delete(int arr[100],int n);
int main()
{
    int n;
    int arr[100],n1,p,s;
    printf("choose an option\n1.add an element into the array\n 2.delete an element in an array\n");
    scanf("%d",&s);
    printf("Enter the total number of elements into the array:");
    scanf("%d",&n);
    read(arr,n);
    if(s==1)
    {
        insert(arr,n);
        display(arr,n+1);
    }
    else if(s==2)
    {
        delete(arr,n);
        display(arr,n-1);
    }
    else
        printf("select correct option");
    return 0;
}
void read(int arr[100],int n)
{
    printf("Enter the elemets");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int arr[100],int n)
{
    printf("The new array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void insert(int arr[100],int n)
{
    int i,n1,p;
    printf("Enter the number you want to add ");
    scanf("%d",&n1);
    printf("Enter in which position you want to add\t:");
    scanf("%d",&p);
    for(i=n;i>=p;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=n1;
}
void delete(int arr[100],int n)
{
     int i,pos;
    printf("Enter the position of number to be deleted : \n");
    scanf("%d",&pos);
     if(pos>=n+1)
    {
      printf("errror");
    }
    else
    {
      for(i=pos-1;i<n;i++)
      {
        arr[i]=arr[i+1];
      }
    }
}
