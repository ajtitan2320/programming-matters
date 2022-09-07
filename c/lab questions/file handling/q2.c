// WRITE A PROGRAM TO CREATE A FILE WITH THREE PARAGRAPHS. DISPLAY THE CONTENTS AND COUNT THE NUMBER OF VOWELS AND CONSONANTS IN THE FILE. DISPLAY THE COUNT ON THE STANDARD OUTPUT (SCREEN)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;
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
    while((ch=fgetc(p))!=EOF){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            c1++;
        }
        else{
            c2++;
        }
    }
    printf("the no. of vowels are = %d",c1);
    printf("\nthe no. of consonants are = %d",c2);

    fclose(p);
    return 0;
}