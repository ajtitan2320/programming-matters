#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,c=0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[n]);
        }
        for(i=0;i<n;i++){
            if(arr[i]!=arr[i+1])
            c++;
            else
        }
        printf("%d\n",c);
    }
    return 0;
}