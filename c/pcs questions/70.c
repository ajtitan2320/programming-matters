#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;n!=0;i++){
        arr[i]=n%2;
        n=n/2;
    }
    n=i;
    for(i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}