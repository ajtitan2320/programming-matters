#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l,r,c=0;
    printf("enter the left range = ");
    scanf("%d",&l);
    printf("enter the right range = ");
    scanf("%d",&r);
    while(l<=r){
        if(l%10==2 || l%10==3 || l%10==9)
        {
            c++;
        }
        l++;
    }
    printf("the no. of lucky numbers are = %d",c);
    return 0;
}