// NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Pasca Praktikum 1
//Deskirpsi: Soal Kedua

#include <stdio.h>

int main() {
    int angka1, angka2;
    scanf("%d %d", &angka1, &angka2);

    // Cek apakah hasil penjumlahan atau pengalian kedua angka adalah kelipatan 4.
    if ((angka1 + angka2) % 4 == 0 || (angka1 * angka2) % 4 == 0) {
        printf("Y\n");
    } else {
        printf("N\n");
    }

    return 0;
}
