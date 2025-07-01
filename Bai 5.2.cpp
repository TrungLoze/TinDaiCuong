#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n],tong_am=0,dem_am=0,tong_duong=0;
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i] > 0){
        	tong_duong += a[i];
		}else if (a[i] < 0) {
			tong_am += a[i];
			dem_am++;
		}
    }
    if(dem_am > 0){
    	printf("%lf ",(double)tong_am/dem_am);
	}else{
		printf("Mang khong co so am ");
	}
	if(tong_duong > 0){
		printf("%lf",(double)tong_duong);
	}else{
		printf("Mang khong co so duong");
	}  
}

