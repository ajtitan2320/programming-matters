#include<stdio.h>
int non_rec(int a);
int rec(int b);
int main()
{
    int a,n,r;
    printf("enter the number = ");
    scanf("%d",&a);
    n=non_rec(a);
    r=rec(a);
    printf("by recursion = %d\nwithout recursion = %d",r,n);
    return 0;
}
int non_rec(int a){
    int s=0;
    while(a!=0){
        s=s+a%10;
        a=a/10;
    }
    return s;
}
int rec(int b){
    if(b!=0){
        return (b%10+rec(b/10));
    }
    else {
        return 0;
    }
}