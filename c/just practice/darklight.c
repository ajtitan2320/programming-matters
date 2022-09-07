#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,i;
        scanf("%d%d",&n,&k);
        if(k==0){
            if(n%4==0){
                printf("Off\n");
            }
            else 
            printf("On\n");
        }
        else{
            if(n==0)
            printf("On\n");
            else
            printf("Ambiguous\n");
        }
    }
    return 0;
}

// if(n%4==1 || n%4==2 || n%4==3)