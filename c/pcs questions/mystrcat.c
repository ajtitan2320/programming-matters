#include<stdio.h>
#include<stdlib.h>
void mystrcat(char arr1[], char arr2[]){
    int i=0,l=0;
    while(arr1[i]!='\0'){
        i++;
    }
    while(arr2[l]!='\0'){
        arr1[i]=arr2[l];
        l++;
        i++;
    }
    arr1[i]='\0';
}
int main()
{
    char arr1[50],arr2[50];
    gets(arr1);
    gets(arr2);
    mystrcat(arr2,arr1);
    puts(arr2);
    return 0;
}