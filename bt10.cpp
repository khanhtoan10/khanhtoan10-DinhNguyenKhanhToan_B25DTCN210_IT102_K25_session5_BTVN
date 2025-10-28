#include <stdio.h>

int main() {
    int soDien, loaiHo;
    long tienBacThang = 0;
    float phuPhi = 0.0, tongTien = 0.0;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    printf("Nhap loai ho (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &loaiHo);

    if (soDien < 0 || loaiHo < 1 || loaiHo > 3) {
        printf("Du lieu nhap khong hop le.\n");
        return 1;
    }

    if (soDien <= 50) {
        tienBacThang = soDien * 1500;
    } else if (soDien <= 100) {
        tienBacThang = 50 * 1500 + (soDien - 50) * 2000;
    } else if (soDien <= 200) {
        tienBacThang = 50 * 1500 + 50 * 2000 + (soDien - 100) * 2500;
    } else {
        tienBacThang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (soDien - 200) * 3000;
    }

    switch (loaiHo) {
        case 1:
            phuPhi = 0.05 * tienBacThang;
            break;
        case 2:
            phuPhi = 0.10 * tienBacThang;
            break;
        case 3:
            phuPhi = 0.08 * tienBacThang;
            break;
    }

    tongTien = tienBacThang + phuPhi;

    printf("Tien dien phai tra: %.0f VNÐ\n", tongTien);

}

