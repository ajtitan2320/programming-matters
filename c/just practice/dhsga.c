#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i,p,c,count=0;
        scanf("%d",p);
        for(i=11;i>=0;i--){
            c=pow(2,i);
            while(p>c){
                p=p-c;
                count++;
            }
        }
        printf("%d",count);
    }
    return 0;
}
