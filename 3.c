#include <stdio.h>
typedef struct{
   int h,m,s ;
}time;
time diff(time t1,time t2);
int main()
{
    time start,end, dif;
    printf("Enter the start time(h,m,s):");
    scanf("%d %d %d", &start.h,&start.m,&start.s);
    printf("Enter the stop time(h,m,s):");
    scanf("%d %d %d", &end.h,&end.m,&end.s);
    dif=diff(start,end);
    printf("time difference= %d:%d:%d\n", dif.h,dif.m,dif.s);
    return 0;
}
time diff(time start,time end)
{
   time temp;
   if(start.s>end.s)
   {
       end.m--;
       end.s=end.s+60;
   }
    if(start.m>end.m)
   {
       end.h--;
       end.m=end.m+60;
   }
   temp.m =end.m- start.m;
   temp.h = end.h- start.h;
   temp.s=end.s-start.s;
   return temp;
}
