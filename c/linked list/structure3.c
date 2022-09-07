#include<stdio.h>
#include<stdlib.h>
struct point{
    int x;
    int y;
};
int main()
{
    int i;
    struct point arr[2];
    for(i=0;i<2;i++){
        scanf("%d%d",&arr[i].x,&arr[i].y);
    }
    for(i=0;i<2;i++){
        printf("%d %d\n",arr[i].x,arr[i].y);
    }
    return 0;
}