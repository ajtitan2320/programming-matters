#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<=n-1;i++){
        arr2[i]=arr1[n-i-1];
    }
    for(i=0;i<=n-1;i++){
        printf("%d",arr2[i]);
    }
    return 0;
}

