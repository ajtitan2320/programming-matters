#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=35,*p;
    p=&x;
    printf("\n%d",*p);
    return 0;
}