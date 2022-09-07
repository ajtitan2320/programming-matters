#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<=n-1;i++){
        int sum=0;
        for(j=0;j<=n-1;j++){
            sum+=arr[i][j];
        }
        printf("\n%d",sum);
    }
    return 0;
}