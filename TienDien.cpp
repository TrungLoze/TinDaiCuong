#include <stdio.h>
#include <string.h>
int tienDien(int soDien) {
    if (soDien <= 250) {
        return soDien * 2000;
    } else if (soDien <= 400) {
        return 250 * 2000 + (soDien - 250) * 3000;
    } else if(soDien <= 600) {
        return 250 * 2000 + 150 * 3000 + (soDien - 400) * 4000;
    } else {
        return 250 * 2000 + 150 * 3000 + 200 * 4000 + (soDien - 600) * 5000;
    }
}

typedef struct {
    char tenHo[100];
    int tienDien;
} HoDan;

int main() {
    int i=0;
    HoDan Ho[100];
    do{
        fflush(stdin);
        fgets(Ho[i].tenHo,100,stdin);
        Ho[i].tenHo[strlen(Ho[i].tenHo)-1] = '\0';
        
        // Kiem tra neu nguoi dung nhap chuoi rong thi dung
        if(strlen(Ho[i].tenHo) == 0) break;
        
        scanf("%d",&Ho[i].tienDien);
        i++;
    }while(i < 100); 
    
    if(i == 0) {
        printf("Khong co ho dan nao duoc nhap!\n");
        return 0;
    }
    
    for(int j=0;j<i;j++){
        printf("Ho dan %d: %s\n",j+1,Ho[j].tenHo);
        printf("Tien dien: %d\n",Ho[j].tienDien);
    }
    
    for(int j=0;j<i-1;j++){
        for(int k=j+1;k<i;k++){
            if(Ho[j].tienDien > Ho[k].tienDien){
                HoDan temp = Ho[j];
                Ho[j] = Ho[k];
                Ho[k] = temp;
            }
        }
    }
    
    printf("\nDanh sach sau khi sap xep:\n");
    for(int j=0;j<i;j++){
        printf("Ho dan %d: %s\n",j+1,Ho[j].tenHo);
        printf("Tien dien: %d\n",Ho[j].tienDien);
    }

    return 0;
}
