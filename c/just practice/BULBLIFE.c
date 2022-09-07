#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,i,sum=0;
        float avg;
        scanf("%d%d",&n,&x);
        int arr[n];
        for(i=0;i<=n-2;i++){
            scanf("%d",&arr[i]);
        }
        for(i=0;i<=n-2;i++){
            sum=sum + arr[i];
        }
        for(i=0;i<=1000000;i++){
            avg=0;
            avg=(float)(sum+i)/n;
            if(avg>=x){
                printf("%d\n",i);
                break;
            }
        }
    }
}

