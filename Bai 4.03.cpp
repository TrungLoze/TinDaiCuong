#include <stdio.h>

int main(){
	int n,Tong=0;
	scanf("%d",&n);
	
	if(n<=0 || n>=1000){
		printf("ERROR");
	}else{
		while(n!=0){
			Tong += n%10;
			n /=10;
		}
		printf("%d",Tong);
	}
	return 0;
}
