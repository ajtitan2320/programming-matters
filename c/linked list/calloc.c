#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    int *ptr;
    printf("enter the range = ");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("error");
        exit(1);
    }
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i));
    }
    return 0;
}