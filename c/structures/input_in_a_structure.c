#include<stdio.h>
#include<stdlib.h>
struct charset{
    char a;
    int b;
};
void keyvalue(char *a,int *b){
    scanf("%c %d",a,b);
};
int main()
{
    struct charset cs;
    keyvalue(&cs.a,&cs.b);
    printf("%c %d",cs.a,cs.b);
    return 0;
}