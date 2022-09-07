#include <stdio.h>

int main()
{
    int n, i, b, c;
    int ch;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter your choice\n 1-- first position\n2-- last position\n3--particular position\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\nenter the value = ");
        scanf("%d", &b);
        for (i = n - 1; i >= 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = b;
        break;
    case 2:
        printf("\nenter the value = ");
        scanf("%d", &b);
        arr[n - 1] = b;
        break;
    case 3:
        printf("\nenter the index = ");
        scanf("%d", &c);
        printf("\nenter the value = ");
        scanf("%d", &b);
        for (i = n - 1; i >= c; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[c] = b;
        break;
    default:
    printf("wrong choice");
    }
    for (i = 0; i <= n - 1; i++)
        {
            printf("%d\n", arr[i]);
        }
    return 0;
}