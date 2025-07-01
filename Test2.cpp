#include <stdio.h>

int main(){
	int a,max,dem;
	scanf("%d",&a);
	max=a;
	while(true){
		scanf("%d",&a);
		if(a>0 && a%5==0){
			break;
		}
		if(a > max){
			max=a;
			dem=0;
		}
		if(max==a){
			dem++;
		}
		
	}
	printf("So lon nhat la %d, so lan xuat hien la %d",max,dem);
	return 0;
}
