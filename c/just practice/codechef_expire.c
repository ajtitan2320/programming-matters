#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        if(m*k>=n)
        printf("yes\n");
        else
        printf("no\n");
    }
	return 0;
}

