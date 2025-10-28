#include <stdio.h>

int main() {
    int soM3;
    long tongTien = 0;

    printf("Nhap so met khoi nuoc tieu thu: ");
    scanf("%d", &soM3);

    if (soM3 < 0) {
        printf("So met khoi khong hop le.\n");
        return 1;
    }

    if (soM3 <= 10) {
        tongTien = soM3 * 6000;
    } else if (soM3 <= 20) {
        tongTien = 10 * 6000 + (soM3 - 10) * 7000;
    } else if (soM3 <= 30) {
        tongTien = 10 * 6000 + 10 * 7000 + (soM3 - 20) * 8500;
    } else {
        tongTien = 10 * 6000 + 10 * 7000 + 10 * 8500 + (soM3 - 30) * 10000;
    }

    printf("Tong tien phai tra: %ld VNÐ\n", tongTien);

}

