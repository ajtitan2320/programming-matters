#include <stdio.h>

int main() {
	int t; 
	scanf("%d", &t);
	while(t--){
	    int sum = 0;
	    int arraylen;
	    scanf("%d", &arraylen);
	    int array[arraylen];
	    for(int i = 0; i<arraylen; i++){
	        scanf("%d", &array[i]);
	    }
	    for(int i = 0; i<arraylen; i++){
	        if(array[i] < array[i+1]){
	            int n = array[i];
	            array[i] = array[i+1];
	            array[i+1] = n;
	        }
	    }
	    for(int i = 0; i<arraylen-1; i++){
	        sum += array[i];
	    }
	    printf("%d\n", sum);
	}
	return 0;
}

