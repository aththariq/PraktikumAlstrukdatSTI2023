// NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Pasca Praktikum 1
//Deskirpsi: Soal Pertama

#include <stdio.h>

int main() {
    int pertama, kedua, ketiga;

    scanf("%d %d %d", &pertama, &kedua, &ketiga);

    int terbesar = pertama; // Asumsikan angka pertama sebagai angka terbesar awalnya.

    if (kedua > terbesar) {
        terbesar = kedua;
    }
    
    if (ketiga > terbesar) {
        terbesar = ketiga;
    }

    printf("Diantara %d, %d, dan %d. Angka terbesar adalah %d\n", pertama, kedua, ketiga, terbesar);

    return 0;
}
