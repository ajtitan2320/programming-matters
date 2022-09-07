#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,h;
        scanf("%d%d",&n,&h);
        int arr[n];
        for(int i=0;i<=n-1;i++){
            scanf("%d",&arr[i]);
        }
        int c=0;
        for(int i=0;i<=n-1;i++){
            if(arr[i]>h)
            c=c+1;
        }
        printf("%d\n",c);
    }
    return 0;
}