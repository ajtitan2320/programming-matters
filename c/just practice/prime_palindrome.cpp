#include<bits/stdc++.h>
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
        return 0;
}
int main()
{
    int n, c, f = 0, i ,d;
    cin >> n;
    if (n == 1)
        cout << 2 << endl;
    else
    {
        for (i = n;i<20; i++)
        {
            c = reverse(i);
            d = prime(i);
            cout<<c<<" "<<d<<endl;
            if (c == d)
                {
                    cout <<c <<d;
                    break;
                }
        }
    }
    return 0;
}