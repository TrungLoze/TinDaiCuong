#include <stdio.h>
double mu(double a, double b){
	double x=1;
	for(int i=1;i<=b;i++){
		x*=a;
	}
	return x;
}
int giaithua(int a){
	int x=1;
	for(int i=1;i<=a;i++){
		x*=i;
	}
	return x;
}

int main(){
	int n;
	double x,S=1.0;
	scanf("%d %lf",&n,&x);
	if(n<=0){
		printf("Error");
	}else{
		for(int i=1;i<=n;i++){
			S+= mu(x,i)/giaithua(i);
		}
		printf("%lf",S);
	}
	
	return 0;
}
