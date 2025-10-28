#include <stdio.h>

int main() {
    char kyTu;

    printf("Nhap mot ky tu: ");
    scanf(" %c", &kyTu);

    if (kyTu >= 'a' && kyTu <= 'z') {
        char chuHoa = kyTu - 32;
        printf("Chu hoa tuong ung: %c\n", chuHoa);
    } else if (kyTu >= 'A' && kyTu <= 'Z') {
        char chuThuong = kyTu + 32;
        printf("Chu thuong tuong ung: %c\n", chuThuong);
    } else {
        printf("Khong phai chu cai.\n");
    }

}

