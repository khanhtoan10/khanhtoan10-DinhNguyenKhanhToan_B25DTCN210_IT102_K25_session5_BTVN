#include <stdio.h>

int main() {
    float thuNhap, thueSuat, thuePhaiDong;

    // Nh?p m?c thu nh?p t? ng�?i d�ng
    printf("So Tien : ");
    scanf("%f", &thuNhap);

    // X�c �?nh thu? su?t theo m?c thu nh?p
    if (thuNhap <= 5) {
        thueSuat = 5;
    } else if (thuNhap <= 10) {
        thueSuat = 10;
    } else {
        thueSuat = 15;
    }

    // T�nh thu? ph?i ��ng
    thuePhaiDong = thuNhap * (thueSuat / 100);

    // Hi?n th? k?t qu?
    printf("Thue thu nhap phai dong : %.2f\n", thuePhaiDong);

    return 0;
}

