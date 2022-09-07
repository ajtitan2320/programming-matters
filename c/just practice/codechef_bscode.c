#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y,c=0;
        scanf("%d%d%d",&n,&x,&y);
        char arr[n];
        scanf("%s",arr);
        for(int i=0;i<n;i++){
            if((arr[i]=='1' && arr[i+1]=='0') || (arr[i]=='0' && arr[i+1]=='1')){
                c=1;
                break;
            }
        }
        int small=x;
        if(x>y){
            small=y;
        }else{
            small=x;
        }
        printf("%d\n",small);
        
    }
	return 0;
}