#include <stdio.h>
#include <math.h>
int main(){
	int n;
	double x;
	
	scanf("%lf %d",&x,&n);
	if(n<1||x<0){
		printf("Error");
	}else{
		double S=sqrt(x);
		for(int i=1;i<n;i++){
			S = sqrt(S+x);
		}
		printf("%.4lf",S);
	}
	
	return 0;
}
