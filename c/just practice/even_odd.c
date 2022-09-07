#include <stdio.h>
int main() {
  FILE *p1,*p2,*p3;
  p1=fopen("text1.txt","w");
  
  int c;
  while(1){
    scanf("%d",&c);
    if(c!=-1){
        putw(c,p1);
    }
    else{
        break;
    }
  }
  fclose(p1);
  p1 = fopen("text1.txt", "r");
  p2=fopen("text2.txt","w");
  p3=fopen("text3.txt","w");
  while ( (c = getw(p1)) != -1 ) {
      if(c%2==0){
          putw(c,p2);
      }
      else{
          putw(c,p3);
      }
  }
  fclose(p1);
  fclose(p2);
  fclose(p3);
  p2=fopen("text2.txt","r");
  p3=fopen("text3.txt","r");
  while ( (c = getw(p2)) != -1 ) {
        printf("%d ",c);
  }
  printf("\n\n");
  while ( (c = getw(p3)) != -1 ) {
        printf("%d ",c);
  }
  fclose(p2);
  fclose(p3);
  printf("\ndone !!!!");
  return 0;
}