#include <stdio.h>
const double PI = 3.14159;
int main() {
    double r;
	scanf("%lf", &r);
	
	if ( r > 0){
		double M,S;
		M = 2.0* r * PI; 
		S = r * r * PI;
		
		printf("%lf\n", M);
		printf("%lf", S);
	} else {
		printf("ERROR");
	}

    return 0;
}

