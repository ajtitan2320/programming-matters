// write a c program to store info of  students where info consist of stname,roll no.,marks in 5 percentage ,
#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
    char name[50];
    int age;
    int base;
    float total
}emp;
void sort(emp s1[],int n){
        int i=0,j=0;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(s1[i].total>s1[j].total){
                    emp t=s1[i];
                    s1[i]=s1[j];
                    s1[j]=t;
                }
            }
        }
    }
emp insert(emp s1)
{
        printf(" \nname = ");
        fflush(stdin);
        gets(s1.name);
        printf("\n age = ");
        scanf("%d", &s1.age);
        printf("\nbasic salary = ");
        scanf("%d",&s1.base);
        s1.total= 1.15*s1.base;
        return s1;
}
int main()
{
    int n, i = 0;
    printf("enter the range = ");
    scanf("%d", &n);
    emp s1[n];
    for (i = 0; i < n; i++)
    {
        s1[i]=insert(s1[i]);
        
    }
    sort(s1,n);
    for(i=0;i<n;i++){
        printf(" \nname = %s",s1[i].name);
        printf(" \nage  = %d\n",s1[i].age);
        printf(" \ntotal salary = %0.2f",s1[i].total);
    }
    return 0;
}