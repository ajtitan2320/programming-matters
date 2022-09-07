//DEVELOP A PROGRAM IN C TO READ A STRUCTURE IN THE MAIN PROGRAM OF AN EMPLOYEE WITH NAME, EMPCODE, AND SALARY AS THE MEMBERS. WRITE A FUNCTION TO PRINT THE DETAILS OF THE EMPLOYEE.(PASS BY VALUE)
#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char name[20];
    int empcode;
    float salary;
}emp;
void display(emp e){
    printf("\nname  = %s",e.name);
    printf("\nemployee code = %d",e.empcode);
    printf("\nsalary = %f",e.salary);
}
int main()
{
    emp e;
    printf("enter the name  = ");
    scanf("%[^\n]s",e.name);
    printf("enter the employee code = ");
    scanf("%d",&e.empcode);
    printf("enter the salary = ");
    scanf("%f",&e.salary);
    display(e);
    return 0;
}