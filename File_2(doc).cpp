#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *file=fopen("so.dat","rb");

	if(file == NULL){
		printf("ERROR");
		return 0;
	}
	
	for(int i=0;i<100;i++){
		int n;
		fread(&n,sizeof(int),1,file);
		printf("%d",n);
		//fprintf(file,"%d ", n);
	}
	
	fclose(file);
	return 0;
}
