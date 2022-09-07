#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,sum=0;
    printf("range = ");
    scanf("%d",&n);
    printf("sum enter kar = ");
    scanf("%d",&sum);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("%d %d ",arr[i],arr[j]);
                // break;
            }
        }
    }
    return 0;
}