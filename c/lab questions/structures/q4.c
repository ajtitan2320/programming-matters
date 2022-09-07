//DEVELOP A PROGRAM TO READ A SET  OF NAME, ROLL NUMBER, DATE OF BIRTH AND DATE OF ADMISSION OF 'N' STUDENTS IN THE COLLEGE WHERE DATE OF BIRTH AND DATE OF ADMISSION CONSISTS OF THREE MEMBERS SUCH AS DAY,MONTH, AND YEAR AS A SEPERATE STRUCTURE.
#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int day;
    int month;
    int year;
}dates;
typedef struct {
    char name[50];
    int rno;
    dates dob;
    dates doa;
}students;
int main()
{
    students s[20];
    int n;
    printf("enter how many students you want = ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the name  = ");
        scanf("%s",s[i].name);
        printf("enter the roll no. = ");
        scanf("%d",&s[i].rno);
        printf("enter the date of birth (d - m - y) = ");
        scanf("%d %d %d",&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
        printf("enter the date of admission (d - m - y) = ");
        scanf("%d %d %d",&s[i].doa.day,&s[i].doa.month,&s[i].doa.year);
    }
    for(int i=0;i<n;i++){
        printf("\n\nstudent %d\n\n",i+1);
        printf("\nname  = %s",s[i].name);
        printf("\nthe roll no. = %d",s[i].rno);
        printf("\ndate of birth  = %d/%d/%d",s[i].dob.day,s[i].dob.month,s[i].dob.year);
        printf("\ndate of admission  = %d/%d/%d",s[i].doa.day,s[i].doa.month,s[i].doa.year);
    }
    return 0;
}