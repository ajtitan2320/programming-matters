#include <iostream>
#include<vector>
using namespace std;
int PivotElement(vector<int> &arr, int n)
{
    int s = 0, e = n - 1, m;
    while (s < e)
    {
        m = s + (e - s) / 2;
        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
    }
    return s;
}
int binary_search(vector<int> &arr, int start, int end, int k)
{
    int s = start, e = end, m;
    while (s <= e)
    {
        m = s + (e - s) / 2;
        if (arr[m] == k)
        {
            return m;
        }
        else if (arr[m] > k)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return -1;
}
int findPosition(vector<int> &arr, int n, int k)
{
    int p = PivotElement(arr, n);
    if (arr[p] <= k && k <= arr[n - 1])
        return binary_search(arr, p, n - 1, k);
    else
        return binary_search(arr, 0, p - 1, k);
}

int main()
{
    vector<int> arr;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int am;
        cin>>am;
        arr.push_back(am);
    }
    int Index = findPosition(arr, n, k);
    cout << Index << endl;
    return 0;
}