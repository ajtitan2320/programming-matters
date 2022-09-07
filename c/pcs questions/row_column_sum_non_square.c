#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }printf("\n");
    }
    for(i=0;i<c;i++){
        int s=0;
        for(j=0;j<r;j++){
            s=s+arr[j][i];
        }printf("%d\n",s);
    }
    return 0;
}