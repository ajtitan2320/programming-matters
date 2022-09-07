#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,a;
        scanf("%d%d",&n,&a);
        char str[n+a];
        scanf("%s",str);
        for(i=0;i<a;i++){
            str[n+i]=str[i];
        }
        str[n+a]=NULL;
        printf("%s\n",str);
    }


}

// not so;lved