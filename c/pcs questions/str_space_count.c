#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int l=0,c=0;
    char s[100];
    gets(s);
    int d=strlen(s);
    while(l<d){
        if(s[l]=='\0')
        {
            c++;
        }
        l++;
    }
    printf("%d",c);
    return 0;
}