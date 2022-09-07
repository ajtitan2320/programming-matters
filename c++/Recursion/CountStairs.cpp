#include<iostream>
using namespace std;
int Stairs(int e){
    if(e==0){
        return 1;
    }
    if(e<0){
        return 0;
    }
    return Stairs(e-1)+Stairs(e-2);
}
int main()
{
    int dest;
    cin>>dest;
    int ans = Stairs(dest);
    cout << ans << endl;
    return 0;
}