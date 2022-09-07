#include <stdio.h>

int main()
{
    int n, i, c1 = 0, c2 = 0, f = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
	if(n==1){
		printf("NO");
		return 0;
	}
    for (i = 0; i < n-1; i++)
    {
        if (n > 1)
        {
            while (arr[i] != 0)
            {
                arr[i] = arr[i] - 1;
                c1++;
            }
            while (arr[i+1] != 0)
            {
                arr[i+1] = arr[i+1] - 1;
                c2++;
            }
            if (c1 == c2)
            {
                f++;
            }
        }
    }
    // printf("\n%d\n%d",c1,c2);
    // for(i=0;i<n;i++){
    //     printf("\n%d",arr[i]);
    // }
        if ((f == n / 2) && n%2==0 )
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    
}