#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top=-1;
    }
    void Push(int element){
        if(top==size){
            cout<<"already full";
            return ;
        }
        arr[++top] = element;
    }
    void Pop(){
        if(top==-1){
            cout<<"no element is present";
            return ;
        }
        top--;
    }
    int Peek(){
        if(top==-1){
            cout<<"no element is present";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top == -1){
            return 1;
        }
        return 0;
    }
    void display(){
        while(top!=-1){
            cout<<arr[top--]<<" ";
        }
    }
};
int main()
{
    Stack stk(10);
    stk.Push(1);
    stk.Push(2);
    stk.Push(3);
    stk.Push(4);
    stk.Push(5);
    stk.Push(6);
    stk.Push(7);
    stk.Pop();
    bool a = stk.isEmpty();
    int p = stk.Peek();
    cout<<a<<" "<<p<<endl;
    stk.display();
    return 0;
}