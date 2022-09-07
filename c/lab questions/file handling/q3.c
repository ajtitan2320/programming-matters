//WRITE A PROGRAM TO CREATE A FILE AND COPY ITS CONTENTS TO ANOTHER FILE SUCH THAT THERE IS NO SPACE BETWEEN THE WORDS IN THE COPIED FILE.DISPLAY THE CONTENTS OF THE NEWLY COPIED FILE ON THE OUTPUT SCREEN.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;
    FILE *p1;
    int c1=0,c2=0;
    p=fopen("my.txt","w");
    char s[1000];
    char ch;
    while((ch=getchar())!=EOF){
        fputc(ch,p);
    }
    fclose(p);
    printf("\n\n\n");
    p=fopen("my.txt","r");
    p1=fopen("my1.txt","w");
    while((ch=fgetc(p))!=EOF){
        if(ch!=' '){
            putc(ch,p1);
        }
    }
    fclose(p);
    fclose(p1);
    p1=fopen("my1.txt","r");
    while((ch=fgetc(p1))!=EOF){
        putchar(ch);
    }
    fclose(p1);
    return 0;
}