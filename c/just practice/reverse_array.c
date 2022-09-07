// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {

//     char ch,s[100],sen[100];
//     scanf("%c",&ch);
//     scanf("%s",&s);
//     scanf("%s",&sen); 
//     printf("%c\n",ch);
//     printf("%s\n",s);
//     printf("%s\n",sen);
//     return 0;
// }
#include <stdio.h>
int max_of_four(int arr){
    int max,i;
    max=arr[0];
    for(i=0;i<=3;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main() {
    int arr[15],i;
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    int ans = max_of_four(int arr);
    printf("%d", ans);
    
    return 0;
}
