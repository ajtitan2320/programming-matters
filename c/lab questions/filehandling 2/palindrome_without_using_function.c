#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr1[100];
    printf("enter the string = ");
    scanf("%s",arr1);
    char arr2[100];
    mycopy(arr2,arr1);
    return 0;
}