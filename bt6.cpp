#include <stdio.h>

int main() {
    float a, b, ketQua;
    char toanTu;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    // Nh?p toán t?
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &toanTu);

    switch (toanTu) {
        case '+':
            ketQua = a + b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '-':
            ketQua = a - b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '*':
            ketQua = a * b;
            printf("Ket qua: %.2f\n", ketQua);
            break;
        case '/':
            if (b == 0) {
                printf("Loi: Khong the chia cho 0\n");
            } else {
                ketQua = a / b;
                printf("Ket qua: %.2f\n", ketQua);
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le\n");
    }

    return 0;
}

