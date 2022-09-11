/*


*
* *
* * *
* *
*


*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number = ";
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++){
        if(i<=(n+1)/2){
            k++;
        }
        else{
            k--;
        }
        for(int j=0;j<(n+1)/2;j++){
            if(j<k){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}