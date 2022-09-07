#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j,a,b;
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
    for(i=0;i<3;i++){
        printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    unsigned int loc= &arr[0][0] + sizeof(arr[0][0])*(c*(a-1)+(b-1));
    printf("%u",loc);
    }
    return 0;
}