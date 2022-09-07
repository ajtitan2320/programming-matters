// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int x;
//         scanf("%d",&x);
//         if(x<=4 && x>=1)
//         printf("yes\n");
//         else
//         printf("no\n");
//     }
// 	return 0;
// }


// #include <stdio.h>

// int main() {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int x;
//         scanf("%d",&x);
//         if(x%3==0){
//             printf("normal\n");
//         }
//         else if(x%3==1){
//             printf("huge\n");
//         }
//         else if(x%3==2){
//             printf("small\n");
//         }
//     }
// 	return 0;
// }


#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,j,i,c=0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++){
                if(arr[i]+arr[i+1]>=arr[i]*arr[i+1])
                c=c+1;
        }
        printf("%d\n",c);
    }
	return 0;
}





