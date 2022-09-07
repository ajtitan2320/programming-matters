#include<stdio.h>
#include<stdlib.h>
int mystrlen(char arr[]){
    int i=0,l=0;
    while(arr[i]!='\0'){
        if(arr[i]==' '){
            
        }
        else
        l++;
        i++;
    }
    return l;
}
int main()
{
    char arr[50];
    int c;
    fflush(stdin);
    gets(arr);
    c=mystrlen(arr);
    printf("%d",c);
    return 0;
}