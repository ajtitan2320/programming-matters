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
    count_of_nodes(head);
    return 0;
}
void count_of_nodes(struct node *head){
    if(head==NULL){
        printf("no element in linked list");
        return 0;
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr= ptr->link;
    }
    return 0;
}
