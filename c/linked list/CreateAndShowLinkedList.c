#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node *Next;
}*First=NULL;
void Create(int arr[],int n){
    struct Node* Temp,*Last;
    First = (struct Node *)malloc(sizeof(struct Node));
    First->Data = arr[0];
    First->Next = NULL;
    Last = First;
    for(int i=1;i<n;i++){
        Temp = (struct Node *)malloc(sizeof(struct Node));
        Temp->Data = arr[i];
        Temp->Next = NULL;
        Last->Next = Temp;
        Last = Temp;
    }
}
void Display(struct Node *p){
    while(p!=NULL){
        printf("%d ",p->Data);
        p=p->Next;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    Create(arr,8);
    Display(First);
    return 0;
}