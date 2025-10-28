#include <stdio.h>

int main() {
    int tuoi;
    int giaVeCoBan = 20000;
    float phanTramTra = 0.0;
    int soTienPhaiTra;

    printf("Nhap Tuoi : ");
    scanf("%d", &tuoi);

    if (tuoi < 0 || tuoi > 120) {
        printf("Tuoi khong hop le\n");
        return 1;
    }

    if (tuoi < 6) {
        phanTramTra = 0.0;
    } else if (tuoi <= 18) {
        phanTramTra = 0.5;
    } else if (tuoi <= 60) {
        phanTramTra = 1.0;
    } else {
        phanTramTra = 0.7;
    }

    soTienPhaiTra = (int)(giaVeCoBan * phanTramTra);

    printf("So tien ve : %d VNÐ\n", soTienPhaiTra);

}

