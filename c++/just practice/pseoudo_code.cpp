#include <iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, j = 0, c = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
                c++;
            else if (j == 0)
            {
                swap(arr[i], arr[i + 1]);
                j = 1;
            }
        }
        c = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
                c++;
        }
        if (c == n - 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}
// for (i = 0; i < n - 1; i++)
//                 {
//                     if (arr[i] <= arr[i + 1])
//                      c++;
//                 }


        
        // for (i = 0; i < n; i++)
        // {
        //     cout << arr[i];
        // }