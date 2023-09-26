//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 1
//Deskripsi: soal 2

#include <stdio.h>
#include  "panjangstring.h"

int panjangString(char *str) {
    int panjang = 0;
    while (*str != '\0') {
        panjang++;
        str++;
    }
    return panjang;
}
