//WRITE A PROGRAM TO INPUT 50 INTEGERS IN A FILE.DISPLAY ONLY THOSE INTEGERS WHICH ARE MULTIPLE OF 7 ON THE STANDARD OUTPUT.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;
    int n;
    p=fopen("numbers.dat","w");
    while(1){
        scanf("%d",&n);
        if(n!=-1){
            putw(n,p);
        }
        else{
            break;
        }
    }
    fclose(p);
    p=fopen("numbers.dat","r");
    while((n=getw(p))!=-1){
        if(n%7==0){
            printf("\n%d",n);
        }
    }
    fclose(p);
    return 0;
}