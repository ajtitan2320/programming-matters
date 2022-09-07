// #include<stdio.h>
// int main()
// {
//     long long int t;
//     scanf("%d",&t);
//     while(t--){
//         long long int n,i,c1=0,c2=0;
//         scanf("%d",&n);
//         int arr[n];
//         for(i=0;i<n;i++){
//             scanf("%d",&arr[i]);
//         }
//         for(i=0;i<n;i++){
//             if(arr[i]>0)
//             c1++;
//             if(arr[i]<0)
//             c2++;
//         }
//         printf("%d\n",(c1*(c1-1))/2 + (c2*(c2-1))/2);
//     }
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n1, n2, n, lcm, gcd, i;
        scanf("%d%d", &n2, &n);
        if (n2 == 1)
        {
            printf("1\n");
        }
        else
        {
            n1 = pow(n2, n);
            for (i = 1; i <= n1 && i <= n2; ++i)
            {
                if (n1 % i == 0 && n2 % i == 0)
                    gcd = i;
            }
            lcm = (n1 * n2) / gcd;
        }
        printf("%d", lcm / gcd);
    }
}
