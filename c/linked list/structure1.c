#include<stdio.h>
#include<stdlib.h>
struct sum{
    int a;
    int b;
};
int main()
{
    struct sum c;
    struct sum d;
    scanf("%d%d",&c.a,&c.b);
    scanf("%d%d",&d.a,&d.b);
    printf("%d %d\n",c.a,c.b);
    printf("%d %d",d.a,d.b);
    return 0;
}
