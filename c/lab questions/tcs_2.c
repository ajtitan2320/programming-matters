#include<stdio.h>
#include<string.h>
int main()
{
    int sing=0,mult=0;
    char str[100];
    char alph[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    printf("enter the string = ");
    scanf("%s",str);
    for(int i=0;i<26;i++){
        char check=alph[i];
        int n=0;
        for(int j=0;j<strlen(str);j++){
            if(check==str[j]){
                n++;
            }
        }
        if(n==1){
            sing++;
        }
        else if(n>1){
            mult++;
        }
    }
    printf("\nsingle = %d",sing);
    printf("\nmulti = %d",mult);
    return 0;
}