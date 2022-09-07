// write a c program to store info of  students where info consist of stname,roll no.,marks in 5 percentage ,
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char name[50];
    int roll;
    int marks[5];
    float per;
}s;
int main()
{
    int n, i = 0;
    printf("enter the range = ");
    scanf("%d", &n);
    s s1[n];
    for (i = 0; i < n; i++)
    {
        int j=0,s=0;
        printf("enter the %d name = ",i+1);
        fflush(stdin);
        gets(s1[i].name);
        printf("\nenter the %d roll no. = ",i+1);
        scanf("%d", &s1[i].roll);
        printf("enter the marks of 5 subjects of %d student\n",i+1);
        for(j=0;j<5;j++){
            scanf("%d", &s1[i].marks[j]);
            s=s+s1[i].marks[j];
        }
        s1[i].per=(float)s/5.0;
    }
    for(i=0;i<n;i++){
        printf("\n\n%d students \n\n",i+1);
        printf(" name = %s\n",s1[i].name);
        printf(" roll no. = %d\n",s1[i].roll);
        printf(" percentage = %0.2f",s1[i].per);
    }
    return 0;
}