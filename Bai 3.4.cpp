#include <stdio.h>
int main() {
    double Gia,Kg_Mua,Thue,Gia_Tri;
	scanf("%lf", &Gia);
	scanf("%lf", &Kg_Mua);
	scanf("%lf", &Thue);
	
	Gia_Tri = (Kg_Mua * Gia) + (Kg_Mua * Gia)*Thue/100.0;
	
	printf("%lf\n", Gia_Tri);
	
    return 0;
}

