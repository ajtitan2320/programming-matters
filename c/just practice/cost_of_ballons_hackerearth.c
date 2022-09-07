#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,n,i,s1=0,s2=0,mx,m,mn;
		scanf("%d%d%d",&a,&b,&n);
		mx=a;
		mn=b;
		if(mx<b)
		{
			mx=b;
			mn=a;
		}
		int arr1[n],arr2[n];
		for(i=0;i<n;i++){
			scanf("%d%d",&arr1[i],&arr2[i]);
			s1=s1+arr1[i];
			s2=s2+arr2[i];
		}
		if(s1>s2){
			m=(mn*s1)+(mx*s2);
		}
		else if(s1==s2){
			m=(mn*s1)+(mx*s2);
		}
		else{
			m=(mn*s2)+(mx*s1);
		}
		printf("%d\n",m);
	}
}
