//WRITE A PROGRAM TO CREATE A FILE AND WRITE A PARAGRAPH IN THAT FILE FROM THE CONSOLE. FINALLY, READ AND DISPLAY THE CONTENT OF THE FILE WRITTEN ON THE STANDARD OUTPUT.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;
    p=fopen("my.txt","w");
    char s[1000];
    char ch;
    while((ch=getchar())!=EOF){
        fputc(ch,p);
    }
    fclose(p);
    printf("\n\n\n");
    p=fopen("my.txt","r");
    while((ch=fgetc(p))!=EOF){
        putchar(ch);
    }
    fclose(p);
    return 0;
}