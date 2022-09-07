#include<stdio.h>
#include<stdlib.h>
struct value{
    int a;
    int b;
};
void print(struct value *h){
    printf("%d %d\n",h->a,h->b);
}
int main()
{
    struct value x1={10,20};
    struct value x2={13,243};
    print(&x1);
    print(&x2);
    return 0;
}