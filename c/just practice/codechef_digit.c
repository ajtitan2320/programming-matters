#include <stdio.h>
void digitsum(int n);
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    digitsum(n);
	}
	return 0;
}
void digitsum(int n){
    int i=0;
    int b=n;
    while(i%2==0){
        int a=b;
        int r;
        while(a!=0){
            r=a%10;
            i=i+r;
            a=a/10;
        }
        if(i%2==0){
            b=b+1;
        }
    }
    printf("%d\n",b);
}

