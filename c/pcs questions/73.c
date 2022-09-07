#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    for(i=0;i<=n-1;i++){
        if(avg<arr[i]){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}