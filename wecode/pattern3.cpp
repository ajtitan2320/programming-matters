/*

1
2 3
4 5 6
7 8 9 10

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number = ";
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<c++<<" ";
            }
        }
        cout<<endl;
    }
}