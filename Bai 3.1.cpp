#include <stdio.h>

int main() {
    double Toan, Ly, Hoa, tong;

    scanf("%lf", &Toan);
    scanf("%lf", &Ly);
    scanf("%lf", &Hoa);

    tong = Toan + Ly + Hoa;

    printf("%.6lf\n", tong);
    printf("%.6lf\n", tong / 3.0);

    return 0;
}

