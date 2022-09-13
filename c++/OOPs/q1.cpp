/* create a class person */



#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    void show();
};
void person::show(){
    cout<<name<<" "<<age<<endl;
}
int main()
{
    person p1,p2;
    cout<<"Enter The Details Of First Person"<<endl;
    cout<<"Name = ";
    getline(cin,p1.name);
    cout<<"Age = ";
    cin>>p1.age;
    cout<<"Enter The Details Of Second Person"<<endl;
    cout<<"Name = ";
    getline(cin,p2.name);
    getline(cin,p2.name);
    cout<<"Age = ";
    cin>>p2.age;
    cout<<endl<<endl;
    p1.show();
    p2.show();
    return 0;
}