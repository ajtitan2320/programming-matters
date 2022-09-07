#include <iostream>
using namespace std;
int reverse(int n)
{
    int m;
    while (n != 0)
    {
        m = (m * 10) + (n % 10);
        n = n / 10;
    }
    return m;
}
int prime(int a)
{
    int c = 0, i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        return a;
    else
    {
        return 0;
    }
}
int main()
{
    int n, c=0, f = 0, i ,d=1;
    cin >> n;
    if (n == 1)
        cout << 2 << endl;
    else
    {
        while(f!=1)
        {
            f=0;
            if(c==d){
                cout<<c<<endl;
                f=1;
            }
            n=n+1;
            c = reverse(n);
            d = prime(n);
            
        }
    }
    return 0;
}
