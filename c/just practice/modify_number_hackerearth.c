#include <stdio.h>

int main()
{
    int n, i, c1 = 0, c2 = 0, f = 0, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0, j = 1; i < n, j < n; i++, j++)
    {
        if (n > 1)
        {
            while (arr[i] != 0)
            {
                arr[i] = arr[i] - 1;
                c1++;
            }
            while (arr[j] != 0)
            {
                arr[j] = arr[j] - 1;
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
    if (n % 2 == 0)
    {
        if (f == n / 2 + 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,j=0,s=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("NO");
        return 0;
    }
    else{
        while((j<n && (s!=0)))
			s=0;
            for(i=0;i<n-1;i+2){
                if(arr[i]!=0 && arr[i+1]!=0){
                    arr[i]=arr[i]-1;
                    arr[i+1]=arr[i+1]-1;
                }
                s=s+arr[i]+arr[i+1];
                
            }
            j++;
        }
    }
    if(s==0 && (n%2)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}