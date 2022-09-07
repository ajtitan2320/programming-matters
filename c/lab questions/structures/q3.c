//DEVELOP A PROGRAM TO FIND TOTAL AND AVERAGE SALES OF 'N' EMPLOYEES (EMPCODE, EMP NAME, EMP SALE) USING ARRAY OF STRUCTURES.
#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int EmpCode;
    char EmpName[10];
    int EmpSale;
}emp;
int main()
{
    emp e[10];
    int n,s=0;
    float avg;
    printf("enter how many employees you want = ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the name  = ");
        scanf("%s",e[i].EmpName);
        printf("enter the employee code = ");
        scanf("%d",&e[i].EmpCode);
        printf("enter the sale = ");
        scanf("%d",&e[i].EmpSale);
        s+=e[i].EmpSale;
    }
    avg=s/n;
    printf("\nthe total sales are = %d",s);
    printf("\nthe average sales are = %f",avg);
    return 0;
}