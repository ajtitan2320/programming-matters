#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void InsertFromBehind(node* &head,int data){
    node *temp = new node(data);
    temp ->next = head;
    head = temp;
}
void print(node* &head){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    InsertFromBehind(head,9);
    print(head);
    return 0;
}