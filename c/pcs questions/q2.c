//wap a c program to print time in hr:min:sec
#include<stdio.h>
#include<stdlib.h>
typedef struct time{
    int hr;
    int min;
    int sec;
}t;
int main()
{
    t t1;
    printf("enter the no. of hours = ");
    scanf("%d",&t1.hr);
    printf("\nenter the no. of minutes = ");
    scanf("%d",&t1.min);
    printf("\nenter the no. of seconds = ");
    scanf("%d",&t1.sec);
    printf("\n\n%d:%d:%d",t1.hr,t1.min,t1.sec);
    return 0;
}