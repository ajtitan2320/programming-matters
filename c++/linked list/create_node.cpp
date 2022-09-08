
#include<iostream>
using namespace std;
class Node{
    public:
    int Data;
    Node *next;
    Node (int Data){
        this -> Data = Data;
        this -> next = NULL;
    }
};
int main()
{
    Node *n1 = new Node(10);
    cout<< n1->Data<<endl;
    cout<< n1->next<<endl;
    return 0;
}