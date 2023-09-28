//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 4
//Deskripsi: soal 2

#include <stdio.h>  
#include "deret.h"
#include <math.h>

int aritmatika(int a, int b, int n){
    int hasil;
    hasil = a + (n-1)*b;
    return hasil;
}

int geometri(int a, int r, int n){
    int hasil;
    hasil = a * pow(r, n-1);
    return hasil;
}

void deret_aritmatika(int a, int b, int n, int *result){
    int i;
    for(i=0; i<n; i++){
        result[i] = a + i*b;
    }
}

void deret_geometri(int a, int r, int n, int *result){
    int i;
    for(i=0; i<n; i++){
        result[i] = a * pow(r, i);
    }
}

void segitiga_pascal(int n, int *result){
    int i, j;
    
    for (i = 0; i < n; i++) {
        result[i] = 1;
        // printf("%d\t %d\n", result[i],i); buatcheck doang
        for (j = i - 1; j > 0; j--) {
            // Hitung elemen-elemen tengah sesuai rumus segitiga Pascal
            result[j] += result[j - 1];
            // printf("%d\t %d\n", result[j],j); buat check doang
        }
    }
}
