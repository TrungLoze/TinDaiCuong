#include<stdio.h>
#include<math.h>
double mu(double a, double b){
	double x=1;
	for(int i=1;i<=b;i++){
		x*=a;
	}
	return x;
}
int main(){
	int n;
	double x;
	scanf("%lf %d",&x,&n);
	
	if(n<1||x<0){
		printf("Error");
	}else{
		double S=1.0;
		for(int i=1;i<=n;i++){
			S += mu(x,i)/i;
		}
		printf("%.4lf",S);
	}
	
	return 0;
}
