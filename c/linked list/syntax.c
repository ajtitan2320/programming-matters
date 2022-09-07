#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head-> data=46;
    head-> link=NULL;
    struct node *vam=(struct node *)malloc(sizeof(struct node));
    vam-> data=78;
    vam-> link=NULL;
    head->link=vam;
    struct node *lam=(struct node *)malloc(sizeof(struct node));
    lam-> data=232;
    lam-> link=NULL;
    vam-> link=lam;
    printf("%d\n%d\n%d",head->data,vam-> data,lam-> data);
    return 0;
}