#include <stdio.h>

#define PI 3.14159

double tinh_dien_tich_hinh_tron(double r) {
    if (r <= 0) {
        printf("Ban kinh khong thoa man !\n");
        return -1.0; 
    }

    return PI * r * r;
}

int main() {
    double r;

    printf("Nhap ban kinh cua hinh tron: ");
    if (scanf("%lf", &r) != 1) {
        fprintf(stderr, "Ban kinh sai.\n");
        return 1; 
    }

    double dien_tich = tinh_dien_tich_hinh_tron(r);

    if (dien_tich != -1.0) {
        printf("Dien tich hinh tron la: %.2lf\n", dien_tich);
    }

    return 0;
}
