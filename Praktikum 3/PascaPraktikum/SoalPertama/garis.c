//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: PascaPraktikum 3
//Deskripsi: soal 1

#include <stdio.h>
#include <math.h>
#include "garis.h"

void MakeGARIS (POINT P1, POINT P2, GARIS * L){
    PAwal(*L) = P1;
    PAkhir(*L) = P2;
}

void BacaGARIS (GARIS * L){
    POINT P1, P2;
    do {
        BacaPOINT(&P1);
        BacaPOINT(&P2);
        if (EQ(P1, P2)) {
            printf("Garis tidak valid\n");
        } else {
            MakeGARIS(P1, P2, L);
            break; // Menghentikan loop ketika GARIS valid ditemukan
        }
    } while (EQ(P1, P2));
}

void TulisGARIS (GARIS L){
    printf("(");
    TulisPOINT(PAwal(L));
    printf("),(");
    TulisPOINT(PAkhir(L));
    printf(")");
}

float PanjangGARIS (GARIS L){
    float x1, x2, y1, y2;
    x1 = Absis(PAwal(L));
    x2 = Absis(PAkhir(L));
    y1 = Ordinat(PAwal(L));
    y2 = Ordinat(PAkhir(L));
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

float Gradien (GARIS L){
    float x1, x2, y1, y2;
    x1 = Absis(PAwal(L));
    x2 = Absis(PAkhir(L));
    y1 = Ordinat(PAwal(L));
    y2 = Ordinat(PAkhir(L));
    return ((y2-y1)/(x2-x1));
}

boolean IsTegakLurus (GARIS L1, GARIS L2){
    return (Gradien(L1)*Gradien(L2) == -1);
}

boolean IsSejajar (GARIS L1, GARIS L2){
    return (Gradien(L1) == Gradien(L2));
}