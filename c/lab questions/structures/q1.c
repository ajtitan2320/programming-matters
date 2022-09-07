//DEVELOP A PROGRAM TO INTIALIZE A STRUCTURE STUDENT WITH MEMBERS: ROLL NUMBER, AGE, GENDER, MARKS. CALCULATE THE SIZE OF STRUCTURE.
#include<stdio.h>
#include<stdlib.h>
// #pragma pack(1)  used for avoiding structure padding
struct students{
    int rno;
    int age;
    char gender;
    int marks;
};
int main()
{
    struct students s;
    printf("the size of the structure is = %d",sizeof(s));
    return 0;
}