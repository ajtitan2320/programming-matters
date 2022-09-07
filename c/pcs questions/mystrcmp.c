#include<stdio.h>
#include<stdlib.h>
int mystrcmp(char arr1[], char arr2[]){
    int i=0;
    while(arr1[i]!='\0' || arr2[i]!='\0'){
        if(arr1[i]>arr2[i])
        return 1;
        if(arr1[i]<arr2[i])
        return 2;
        i++;
    }
    return 0;
}
int main()
{
    char arr1[50],arr2[50];
    gets(arr1);
    gets(arr2);
    int c=mystrcmp(arr1,arr2);
    if(c==0)
        printf("same");
        else{
            printf("not same");
        }
    return 0;
}