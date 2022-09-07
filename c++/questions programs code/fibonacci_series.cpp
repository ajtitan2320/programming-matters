#include<iostream>
using namespace std;
int main()
{
    int Number;
    cin>>Number;
    int First = 0;
    int Second = 1;
    cout<<First<<" "<<Second<<" ";
    for(int i=0;i<Number;i++){
        int NextNumber = First + Second;
        cout<<NextNumber<<" ";
        First = Second;
        Second = NextNumber;
    }
    return 0;
}