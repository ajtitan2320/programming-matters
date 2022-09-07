#include<stdio.h>
#include<stdlib.h>
void sort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int t = *(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=t;
            }
        }
    }
}
int main()
{
    int arr[100];
    int n;
    printf("enter the range = ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}