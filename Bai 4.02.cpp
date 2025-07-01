#include <stdio.h>
#include <math.h>
int main(){
	int n,SQRT,test=1;
	scanf("%d",&n);
	SQRT = sqrt(n);
	
	if(n<=1){
		test=0;
	}else{
		for(int i=2;i<=SQRT;i++){
			if(n%i==0){
				test=0;
				break;
			}
		}
	}
	
	
	
	if (test){
		printf("La so nguyen to");
	}else{
		printf("Khong phai so nguyen to");
	}
	return 0;
}
