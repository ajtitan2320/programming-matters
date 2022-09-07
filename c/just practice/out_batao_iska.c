#include<stdio.h>
#include<stdlib.h>
int *fun(){
    int num=10;
    return &num;
}
int main()
{
    int *ptr;
    ptr=fun();
    printf("%d",*ptr);
    return 0;
}