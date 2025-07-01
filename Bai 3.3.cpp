#include <stdio.h>
int main() {
    double X,Y,A,B,C;
	scanf("%lf", &X);
	scanf("%lf", &Y);
	
	A = X*X + Y*Y;
	B = (X+Y)*(X+Y);
	C = (X-Y)*(X-Y);
	
	printf("%lf\n", A);
	printf("%lf\n", B);
	printf("%lf", C);
	
    return 0;
}

