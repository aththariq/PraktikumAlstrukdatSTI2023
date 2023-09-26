//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 1
//Deskripsi: soal 2

#include <stdio.h>
#include  "balikstring.h"

int panjangString(char*ch){
    int i = 0;
    while (ch[i] != '\0'){
        i++;
    }
    return i;
}

void membalikString(char* str) {
    int i, j;
    char temp;
    i = 0;
    j = panjangString(str) - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}