#include<stdio.h>
#include<stdlib.h>
void mystrcpy(char arr1[],char arr2[]){
    int i=0;
    while(arr2[i]!='\0'){
        arr1[i]=arr2[i];
        i++;
    }
    arr1[i]='\0';
}
int main()
{
    char arr[50],arr1[50];
    gets(arr);
    mystrcpy(arr1,arr);
    puts(arr1);
    return 0;
}