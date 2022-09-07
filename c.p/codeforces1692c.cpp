#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t;
    cin>>t;
    while(t--){
        char arr[8][8];
    int index1,index2;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<7;i++){
        int c1=0,c2=0,c3=0;
        for(int j=0;j<8;j++){
            int e;
            if(arr[i-1][j]=='#'){
                c1++;
            }
            if(arr[i+1][j]=='#'){
                c2++;
            }
            if(arr[i][j]=='#'){
                e=j;
                c3++;
            }
            index1=i,index2=e;
        }
        if(c1>1 && c2>1 && c3==1){
            
            break;
        }
    }
        cout<<index1+1<<" "<<index2+1<<endl;
    }
    return 0;
}