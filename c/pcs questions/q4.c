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
int main()
{
    int n, i = 0;
    printf("enter the range = ");
    scanf("%d", &n);
    emp s1[n];
    for (i = 0; i < n; i++)
    {
        int j=0,s=0;
        printf("\n\n%d employee\n\n",i+1);
        printf(" name = ");
        fflush(stdin);
        gets(s1[i].name);
        printf("\n age = ");
        scanf("%d", &s1[i].age);
        printf("\nbasic salary = ");
        scanf("%d",&s1[i].base);
        s1[i].total= 1.15*s1[i].base;
        
    }
    sort(s1,n);
    for(i=0;i<n;i++){
        printf(" name = %s\n",s1[i].name);
        printf(" roll no. = %d\n",s1[i].age);
        printf(" percentage = %0.2f",s1[i].total);
    }
    return 0;
}