#include <stdio.h>
#include <stdlib.h>
struct emp
{
    char name[50];
    int age;
    int basic;
    float total;
}t;
struct emp insert(struct emp e[],int n )
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n\n%d person\n\n",i+1);
        printf("enter the name = ");
        fflush(stdin);
        gets(e[i].name);
        printf("enter the age = ");
        scanf("%d",&e[i].age);
        printf("enter the basic salary");
        scanf("%d",&e[i].basic);
        e[i].total=e[i].basic+(float)(e[i].basic/10)+(float)(e[i].basic/20);
    }
}
struct emp sort_salary(struct emp e[],int n )
{
    int i,j,a;
    for (i = 0; i < n; i++)
    {
        for(j=i+1;j<n;j++){
            if(e[i].total>e[j].total){
                t=e[i];
                e[i]=e[j];
                e[j]=t;
                a=e[i].total;
                e[i].total=e[j].total;
                e[j].total=a;
            }
        }
    }
}
struct emp print(struct emp e[],int n )
{
    int i;
    printf("\n************sorted according to salary*************\n");
    for (i = 0; i < n; i++)
    {
        printf("\nname = %s",e[i].name);
        printf("\nage = %d",e[i].age);
        printf("\ntotal salary = %f",e[i].total);
    }
}
int main()
{
    int n;
    printf("enter the range = ");
    scanf("%d", &n);
    struct emp e[n];
    insert(e,n);
    sort_salary(e,n);
    print(e,n);
    return 0;
}