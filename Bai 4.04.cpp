#include <stdio.h>

int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	
	if (a<=0 || b<=0){
		printf("ERROR");
	}else{
		unsigned long long ucln, bcnn;
		unsigned long long temp1=a,temp2=b;
		while(temp2!=0){
			unsigned long long temp=temp2;
			temp2=temp1%temp2;
			temp1=temp;
		}
		ucln = temp1;
		bcnn = (a*b)/ucln;
		
		printf("%llu\n%llu", ucln,bcnn);
	}
	
	return 0;
}
