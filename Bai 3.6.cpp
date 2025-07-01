#include <stdio.h>
#include <math.h>

int main() {
    double x,y,F;
	scanf("%lf", &x);
	scanf("%lf", &y);
	
	for (int i=0;i<=6;i++){
		F+=pow(x,i)*pow(y,(6-i));
	}
	
	printf("%lf", F);
	
    return 0;
}

