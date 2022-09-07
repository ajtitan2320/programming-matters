// #include <stdio.h>
// int swap(int m,int arr1[], int arr2[])
// {
//     int t;
//     t = arr1[m];
//     arr1[m] = arr2[m + 1];
//     arr2[m + 1] = t;
// }
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n, i, j = 0, c = 0;
//         scanf("%d", &n);
//         int arr[n];
//         for (i = 0; i < n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         for (i = 0; i < n - 1; i++)
//         {
//             if (arr[i] <= arr[i + 1])
//                 c++;
//             else
//             {
//                 if (j == 0)
//                 {
//                     int m=i;
//                     swap(m,arr[i], arr[i + 1]);
//                     j = 1;
//                     c = c + 1;
//                 }
//             }
//         }
//         if (c == n - 1)
//         {
//             printf("sorted\n");
//         }
//         else
//         {
//             printf("not sorted\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k = 0, i;
        scanf("%d", &n);
        int m[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &m[i]);
            if (m[i - 1] > m[i] && i >= 1)
            {
                t = m[i-1];
                m[n-1] = arr2[m + 1];
                arr2[m + 1] = t;
                if (m[i - 2] > m[i - 1] && i >= 2)
                {
                    k += 2;
                }
                else if (i == 1)
                {
                    k += 1;
                }
                else
                {
                    k += 1;
                }
            }
        }
        if (k < 2)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
