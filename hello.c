#include <stdio.h>
// Program C sederhana untuk input dan output biodata

void main() {
    int usia;
    char nama[20];
    float ipk;
    printf("nama kamu siapa?");
    fgets (nama, sizeof(nama), stdin);
    printf("usia kamu berapaa");
    scanf ("%d", &usia);
    printf("ipk kamu berapa?");
    scanf("%f", &ipk);

    printf("\n\nnama kamu adalah: %s", nama);
    printf("\nusia kamu adalah: %d tahun", usia);
    printf("\nipk kamu segini: %.2f", ipk);
}
