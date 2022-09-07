#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}
