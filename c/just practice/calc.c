#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        float i = 0.1;
        for(i=0.1;i<=0.6;i=i+0.1){
            float b;
            scanf("%f", &b);
            printf("%f\n",b-i);
        }
    }
    return 0;
}