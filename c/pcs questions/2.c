//WAP to find the addition, subtraction, multiplication, division of two numbers
#include<stdio.h>
int main()
{
    int num1,num2,add,sub,mul;
    float div;
    printf("enter the 2 number = ");
    scanf("%d%d",&num1,&num2);
    //add
    add=num1+num2;
    //subtract
    sub=num1-num2;
    //multiplication
    mul=num1*num2;
    //dividation
    if (num2!=0){
        div=(float)num1/num2;
        printf("dividation = %0.1f\n",div);
    }
    else{
        printf("the dividation is not possible\n");
    }    
    printf("addition = %d\n",add);
    printf("subtraction = %d\n",sub);
    printf("multiplication = %d\n",mul);
    
    return 0;
}