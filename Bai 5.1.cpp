#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if(n<=0){
		printf("Error");
	}else{
		int A[n],tong=0;
		for(int i=0;i<n;i++){
			scanf("%d",&A[i]);
			tong+=A[i];
		}
		for(int i=n-1;i>=0;i--){
			printf("%d ",A[i]);
		}
		printf("\n%d",tong);
	}
}
