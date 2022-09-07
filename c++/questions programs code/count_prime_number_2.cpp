#include<iostream>
#include<vector>
using namespace std;
int countPrimes(int n) {
        int Count = 0;
        vector<bool> Prime(n+1,true);
        Prime[0]=Prime[1]=false;
        for(int i=0;i<n;i++){
            if(Prime[i]==true){
                Count++;
                for(int j=2*i;j<n;j+=i){
                    Prime[j]=false;
                }
            }
        }
        return Count;
    }
int main()
{
    int n;
    cin>>n;
    int ans=countPrimes(n);
    cout<<endl<<ans<<endl;
    return 0;
}