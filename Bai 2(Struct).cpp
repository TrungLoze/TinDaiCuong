#include <stdio.h>
#include <string.h>

typedef struct {
	char Hoten[100];
	int NamSinh;
} sinhvien ;
int main(){
	int n=0,i;
	sinhvien DS[100],SV;
	do{
		fflush(stdin);
		fgets(SV.Hoten, sizeof(SV.Hoten),stdin);
		SV.Hoten[strlen(SV.Hoten)-1]='\0';
		if(strlen(SV.Hoten)>0){
			scanf("%d",&SV.NamSinh);
			DS[n] = SV;
			n++;
		}
		
	}while(strlen(SV.Hoten)>0);

	for(i=0;i<n;i++){
		printf("%s %d\n",DS[i].Hoten,DS[i].NamSinh);
	}
	return 0;
}
