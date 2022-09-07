#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int d,d1,d2;
        scanf("%d",&d);
        d1= d - (d*10)/100;
        d2=d-100;
        if(d1>=d2){
            printf("%d\n",100);
        }
        else{
            printf("%d\n",(d*10)/100);
        }
    }
    return 0;
}