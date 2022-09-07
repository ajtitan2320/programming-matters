#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, i, sum = 0;
        scanf("%d", &n);
        int arr[n];
        for (i = 0; i <= n - 1; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i <= n - 1; i++)
        {
            if (arr[i] < arr[i+1])
            {
                a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = a;
            }
        }
        for (i = 0; i < n-1; i++)
        {
            sum = sum + arr[i];
        }
        printf("%d", sum);
    }
    return 0;
}