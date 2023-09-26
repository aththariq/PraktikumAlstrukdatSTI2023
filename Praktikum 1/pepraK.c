//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 1
//Deskripsi: Program ini berisi tentang menuliskan ke layar

#include <stdio.h>

int main() {
    int i;
    int angka;
    scanf("%d", &angka);

    for (i = 1; i <= angka; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
             if (i % 5 == 0) {
                printf("Ril");
            }
            if (i % 3 == 0) {
                printf("Nyata");
            }
           
        } else {
            printf("%d", i);
        }

        if (i < angka) {
            printf("\n");
        }
    }
    return 0;
}
