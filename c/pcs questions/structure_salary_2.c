#include <stdio.h>
#include <stdlib.h>
float total[50];
struct emp
{
    char name[50];
    int age;
    int basic;
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
        total[i]=(float)1.15*(e[i].basic);
        //printf("\n%f\n",total[i]);
    }
}
struct emp sort_salary(struct emp e[],int n )
{
    int i,j,a;
    for (i = 0; i < n; i++)
    {
        for(j=i+1;j<n;j++){
            if(total[i]>total[j]){
                t=e[i];
                e[i]=e[j];
                e[j]=t;
                a=total[i];
                total[i]=total[j];
                total[j]=a;
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
        printf("\ntotal salary = %f",total[i]);
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