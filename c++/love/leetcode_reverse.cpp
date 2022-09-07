#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n)
{
            int r, i = 0, ans = 0;
            while (n != 0)
            {
                r = n % 10;
                ans = ans*10 +  r;
                if(ans < INT_MIN/10 || ans > INT_MAX/10){
                return 0;
                }
                n = n / 10;
                i++;
            }
            return ans;
    
}
int main()
{
    int n;
    cin>>n;
    
    if(n >= -pow(2, 31) && n <= (pow(2, 31)) - 1){
    int c=reverse(n);
    cout<<c;}
    else{
        return 0;
    }
}