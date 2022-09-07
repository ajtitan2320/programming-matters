#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,a,b;
        scanf("%d%d",&x,&y);
        a=(x*10);
        b=(y*10)/2;
        if(a<b)
        printf("second\n");
        else if(a==b)
        printf("any\n");
        else
        printf("first\n");
    }
	return 0;
}

