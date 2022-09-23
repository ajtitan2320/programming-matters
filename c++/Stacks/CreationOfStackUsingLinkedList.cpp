#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->next = NULL;
        this->data = data;
    }
};
node* top = NULL;
void push(int data){
    node* temp = new node(data);
    top->next = temp;
    top = temp;
}
void pop(){
    if(top == NULL){
        return ;
    }
    node* temp = top;
    top = top->next;
}
bool isEmpty()
{
    if (top == NULL)
        return true;

    else
        return false;
}

int peek()
{
    if (top == NULL)
        return -1;

    else
        return top->data;
}
void display()
{
    node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    push(5);
    push(40);
    push(9);
    display();
    pop();
    display();

    if (isEmpty())
        cout << "Stack Is Empty\n";
    else
        cout << "Stack Is Not Empty\n";

    cout << "Peek Element is " << peek() << endl;   
    return 0;
}