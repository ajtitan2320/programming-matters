// to make a array using pointers and find thier sum
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0;
    printf("enter the range of elements in the array = ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(n));
    for(i=0;i<n;i++){
        scanf("%d",ptr+ i);
    }
    for(i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    printf("\nthe sum is = %d\n",sum);
}