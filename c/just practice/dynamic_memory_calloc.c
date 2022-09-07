#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the number of integer = ");
    scanf("%d",&n);
    int *ptr= (int *)calloc(n,sizeof(n));
    for(i=0;i<=n-1;i++){
        printf("enter the integer = ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<=n-1;i++){
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}