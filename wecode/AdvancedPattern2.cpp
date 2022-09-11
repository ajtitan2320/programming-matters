/*


* * * *
* * *
* *
*
*
* *
* * *
* * * *


*/
#include<iostream>
using namespace std;
int main()
{
    
    for(int i=0;i<8;i++){
        int n=4;
        for(int j=0;j<4;j++){
            if(i<n--){
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