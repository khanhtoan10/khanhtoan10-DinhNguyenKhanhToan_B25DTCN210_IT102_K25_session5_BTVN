#include <stdio.h>

int main() {
    float diem;

    printf("Nhap Diem : ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le. Vui long nhap tu 0 den 10.\n");
        return 1;
    }

    if (diem >= 8) {
        printf("Hoc luc gioi\n");
    } else if (diem >= 6.5) {
        printf("Hoc luc kha\n");
    } else if (diem >= 5) {
        printf("Hoc luc trung binh\n");
    } else {
        printf("Hoc luc yeu\n");
    }
                                                                                                                                                                                                                                                                                                                                
}

