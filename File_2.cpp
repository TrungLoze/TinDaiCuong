#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *file=fopen("so.dat","wb");

	if(file == NULL){
		printf("ERROR");
		return 0;
	}
	
	for(int i=0;i<100;i+=5){
		fwrite(&i,sizeof(int),1,file);
		//fprintf(file,"%d ", n);
	}
	
	fclose(file);
	return 0;
}
