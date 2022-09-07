#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    int age;
    int roll_no;
    float marks;
};
void print(char name[],int age,int roll_no,float marks){
    printf("%s %d %d %0.1f",name,age,roll_no,marks);
}
int main()
{
    struct student s1={"ashish joshi",17,39,93};
    print(s1.name,s1.age,s1.roll_no,s1.marks);
    return 0;
}