#include<stdio.h>
#include<stdlib.h>
struct code{
    int i;
    char c;
    struct code *p;
};
int main()
{
    struct code v;
    v.i=6;
    v.c='a';
    v.p=NULL;

    struct code v2;

    v2.i=8;
    v2.c='b';
    v2.p=NULL;

    v.p=&v2;
    printf("%d %c",v.p->i,v.p->c);
    return 0;
}
