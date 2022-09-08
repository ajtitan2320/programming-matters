#include<iostream>
using namespace std;
class  node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void Insert(node* &tail,int data){
    node* temp = new node(data);
    tail-> next = temp;
    tail = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}
void AnyPositionInsert(node* &head,node* &tail,int position,int data){
    node* temp = head;
    int count = 1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    node* t = new node(data);
    t->next = temp->next;
    temp->next = t;
}
int main(){
    node *node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    Insert(tail,11);
    Insert(tail,13);
    Insert(tail,14);
    Insert(tail,15);
    int position, data;
    cout<<"enter your position = ";
    cin>>position;
    cout<<"enter the value = ";
    cin>>data;

    AnyPositionInsert(head,tail,position,data);
    print(head);
}