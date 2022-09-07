#include<stdio.h>
int main()
{
    int m,n,max=0,i,j;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            printf("Enter a[%d][%d]: ",i,j); 
            scanf("%d",&arr[i][j]);
        }
    }
    // for( i=0;i<m;i++){
    //     for( j=0;j<n;j++){
    //         printf("%d\n",arr[i][j]);
    //     }
    // }
    for( i=0;i<m;i++){
        int sum=0;
        for( j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
        if(max<sum){
            max=sum;
        }
    }
    printf("%d",max);
    return 0;
}
