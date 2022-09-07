//3. WAP to calculate Simple and Compound Interest
#include<stdio.h>
int main()
{
    int p,r,t,n,ci,si;
    printf("enter the principle value = ");
    scanf("%d",&p);
    printf("\nenter the rate value = ");
    scanf("%d",&r);
    printf("\nenter the time value = ");
    scanf("%d",&t);
    printf("\nenter the n value = ");
    scanf("%d",&n);
    ci=p*pow((1+r/n),t*n)-p;
    si=p*r*t;
    printf
    return 0;
}