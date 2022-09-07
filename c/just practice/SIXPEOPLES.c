#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,a,b;
        scanf("%d%d",&x,&y);
        a=(x*3);
        b=(y*2);
        if(a>b){
            printf("%d\n",b);
        }
        else if(a==b){
            printf("%d\n",a);
        }
        else{
            printf("%d\n",a);
        }
    }
    return 0;
}