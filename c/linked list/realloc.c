#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i));
    }
    ptr=(int *)realloc(ptr,n*2*sizeof(int));
    printf("\nenter another 2 integer\n");
    for(i=n;i<n+2;i++)
    scanf("%d",ptr+i);
    for(i=0;i<n+2;i++)
    printf("%d\t",*(ptr+i));
    
    return 0;
}