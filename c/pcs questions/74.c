#include <stdio.h>
int main()
{
    int n, i, j, a;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}