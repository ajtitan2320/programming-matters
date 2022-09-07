#include<stdio.h>
#include<stdlib.h>
int s(int a){
    a=10;
    return a; 
}
int main()
{
    int a;
    scanf("%d",&a);
    a=s(a);
    printf("%d",a);
    return 0;
}