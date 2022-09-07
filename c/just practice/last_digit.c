#include <stdio.h>
int main(){
	int n,i,s=0;
	scanf("%d",&n);
	int num[n];
	for( i=0; i<n; i++){
		scanf("%d", &num[i]);
		s=s*10+num[i]%10;
	}
	printf("%d\n",s);
	if(s%10==0)
	printf("yes");
	else
	printf("no");
    return 0;
}