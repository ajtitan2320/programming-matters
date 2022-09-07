#include<iostream>
#include<math.h>
using namespace std;
int decimal_to_binary(int Decimal){
    int ans=0,i=0;
    while(Decimal){
        int Remainder=Decimal%2;
        ans=ans+ pow(10,i)*Remainder;
        Decimal/=2;
        i++;
    }
    return ans;
}
int main()
{
    int Decimal ;
    cin>>Decimal;
    int Binary = decimal_to_binary(Decimal);
    cout<<Binary;
    return 0;
}