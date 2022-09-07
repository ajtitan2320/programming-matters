#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    struct node *hade=(struct node *)malloc(sizeof(struct node));
    hade->data=465;
    hade->link=NULL;
    head->link=hade;
    hade=malloc(sizeof(struct node));
    hade->data=1234;
    hade->link=NULL;
    head->link->link=hade;
    printf("%d\n%d",head->data,hade->data);
    return 0;
}
