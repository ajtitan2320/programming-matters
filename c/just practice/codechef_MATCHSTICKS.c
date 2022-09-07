#include<stdio.h>
int main()
{
    int arr[10]={6,2,5,5,4,5,6,3,7,6};
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,s=0,n=0;
        scanf("%d%d",&a,&b);
        n=a+b;
        while(n!=0){
            int r;
            r=n%10;
            s=s+arr[r];
            n=n/10;
        }
        printf("%d\n",s);
    }
    return 0;
}