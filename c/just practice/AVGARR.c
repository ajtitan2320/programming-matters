#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,i,sum=0;;
        scanf("%d%d",&n,&x);
        int arr[x*2];
        for(i=0;i<=x*2;i++)
        arr[i]=i-x;
        if(n==1){
            printf("%d ",x);
        }
        else if(n%2==0){
            for(i=1;i<=n/2;i++)
            printf("%d %d ",x+i,x-i);
        }
        else if(n%2!=0){
            for(i=1;i<=(n-1)/2;i++)
            printf("%d %d ",x+i,x-i);
            printf("%d ",x);
        }
    }
    return 0;
}