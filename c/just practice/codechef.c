#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y,c1=0,c2=0,f;
        scanf("%d%d%d",&n,&x,&y);
        char arr[n];
        scanf("%s",arr);
        printf("%c\n",arr[0]);
        for(int i=0;i<n;i++){
            if((char)arr[i]=="1" && (char)arr[i+1]=="0"){
                c1=c1+1;
            }
            if((char)arr[i]=="0" && (char)arr[i+1]=="1"){
                c2=c2+1;
            }
        }
        f=(x*c2)+(y*c1);
        printf("%d\n",f);
    }
	return 0;
}


