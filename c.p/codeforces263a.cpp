#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[5][5],i1,i2,c=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                c= (abs(i-2)+abs(j-2));
            }
        }
    }
    cout<<c;
    return 0;
}