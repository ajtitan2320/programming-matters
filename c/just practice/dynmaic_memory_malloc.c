#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("how may integer you want = ");
    scanf("%d",&n);
    int *ptr= (int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("null/error");
        return 0;
    }
    for(i=0;i<=n-1;i++){
        printf("enter the integer = ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<=n-1;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}