#include<iostream>
using namespace std;
bool home(int s,int e){
    if(s==e){
        return true;
    }
    return home(s+1,e);
}
int main()
{
    int src=1;
    int destination=10;
    bool ans=home(src,destination);
    cout << ans;
    return 0;
}