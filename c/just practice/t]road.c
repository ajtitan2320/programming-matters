#include <stdio.h>

int main() {
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        if(a%2==0 && b%2==0){
            if(a-b==2 || a-b==-2 || a-b==1 || a-b==-1)
            printf("yes\n");
            else
            printf("no\n");
        }
        if(b%2==0 && a%2!=0){
            if(a>b){
                if(a-b==1 || a-b==-1)
                printf("no\n");
                else
                printf("no\n");
            }
            else{
                if(a-b==1 || a-b==-1)
                printf("yes\n");
                else
                printf("no\n");
            }
            
        }
        if(b%2!=0 && a%2!=0){
            if(a-b==2 || a-b==-2 || a-b==1 || a-b==-1)
            printf("yes\n");
            else
            printf("no\n");
        }
        if(a%2==0 && b%2!=0){
            if(a-b==1 || a-b==-1 || b-a==-1 || b-a==1)
            printf("yes\n");
            else
            printf("no\n");
        }
        
    }
	return 0;
}


