#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[n],i,s=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n-1;i++){
        s=s+arr[i];
    }  
    printf("%d",s);
    return 0;
}