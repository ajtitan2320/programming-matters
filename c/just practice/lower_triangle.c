#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=m-1;j++){
            if(j<=i)
            printf("%d\t",arr[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}