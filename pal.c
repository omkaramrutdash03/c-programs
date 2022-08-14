//Write a function to check a string passed to it is palindrome or not. It  returns 1 if it is a palindrome and -1 if it is not. Write the complete program  and test.
//OMKAR AMRUT DASH C2_27
#include<stdio.h>
int pal(char str[]);
int main()
{
    char str[100];
    int res,x;
    printf("Enter a  string : ");
    gets(str);
    res=pal(str);
    printf("\nResult : %d\n",res);
    return 0;
}
int pal(char str[])
{
    int len=0,mid,end,begin=0,flag=0;
    while(str[len]!='\0')
        len++;
    mid=len/2;
    end=len-1;
    while(begin<mid)
    {
        if(str[begin]!=str[end])
        {
            return -1;
            break;
        }
        begin++;
        end--;
        return 1;
    }
}
