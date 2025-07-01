#include <stdio.h>

int main(){
	int n,S=1;
	scanf("%d",&n);
	if(n<0 || n>8){
		printf("ERROR");
	}else{
		for (int i=2;i<=n;i++){
			S *= i;
		}
		printf("%d",S);
	}
	
	return 0;
}
