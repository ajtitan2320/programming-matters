#include <stdio.h>
int main() {
  FILE *p1,*p2;
  p1=fopen("text1.txt","w");
  if(p1==NULL){
    return 0;
  }
  char ch;
  while((ch=getchar())!=EOF){
    fputc(ch,p1);
  }
  fclose(p1);
  p1=fopen("text1.txt","r");
  p2=fopen("text2.txt","w");
  if(p2==NULL || p1==NULL){
    return 0;
  }
  while((ch=fgetc(p1))!=EOF){
    fputc(ch,p2);
  }
  fclose(p2);
  fclose(p1);
  p2=fopen("text2.txt","r");
  if(p2==NULL){
    return 0;
  }
  while((ch=fgetc(p1))!=EOF){
    putchar(ch);
  }
  fclose(p2);
  return 0;
}
