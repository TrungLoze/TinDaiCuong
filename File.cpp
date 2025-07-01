#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ten[100];
    int diem;
    char khoa_thi[100];
} ThiSinh;

int main() {
    FILE *file_nhap, *file_xuat;
    file_nhap = fopen("file_nhap.txt", "r");
    file_xuat = fopen("file_xuat.txt", "w");

    if (file_nhap == NULL || file_xuat == NULL) {
        printf("ERROR");
    }

    ThiSinh TS[100], SV;
    int n = 0;
    do {
        printf("Nhap thong tin thi sinh %d: ", n+1);
        printf("Nhap ten: ");
        fflush(stdin);
        fgets(SV.ten, sizeof(SV.ten), stdin);
        SV.ten[strlen(SV.ten) - 1] = '\0';
        if(strlen(SV.ten) > 0) {
            printf("Nhap diem: ");
            scanf("%d", &SV.diem);
            printf("Nhap khoa thi: ");
            fflush(stdin);
            fgets(SV.khoa_thi, sizeof(SV.khoa_thi), stdin);
            SV.khoa_thi[strlen(SV.khoa_thi) - 1] = '\0';
            TS[n]=SV;
            n++;
    	}
    } while(strlen(SV.ten) > 0);

        for(int i = 0; i < n; i++) {
            fprintf(file_xuat, "%s %d %s\n", TS[i].ten, TS[i].diem, TS[i].khoa_thi);
        }

        fclose(file_nhap);
        fclose(file_xuat);

        return 0;
    }
