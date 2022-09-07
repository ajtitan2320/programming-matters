#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    int roll_no;
    float marks;
};
void print(struct student *a){
    printf("%s\n%d\n%0.1f\n",a->name,a->roll_no,a->marks);
}
int main()
{
    struct student x1={"ashish joshi",39,98.56};
    struct student x2={"ajtitan",33,92.56};
    print(&x1);
    print(&x2);
    return 0;
}