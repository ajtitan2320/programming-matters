#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,p,n,c=0;
        scanf("%d%d%d",&n,&a,&b);
        if(a>1){
            if(b<=n-1)
            c=c+2;
            else
            c=c+1;
            p=c;
            printf("%d\n",p);
        }
        else if(b<n){
            if(a>1)
            c=c+2;
            else
            c=c+1;
            p=c/n;
            printf("%d\n",p*n);
        }
        else{
            printf("0\n");
        }
    }
	return 0;
}

