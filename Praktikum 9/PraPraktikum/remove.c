// NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Praktikum 9
//Deskirpsi: Soal 2

#include <stdio.h>
#include "remove.h"

void RemoveDuplicates(List *L) {
    address P = First(*L);
    while (P != Nil) {
        address Q = Next(P);
        address Prec = P;
        while (Q != Nil) {
            if (Info(P) == Info(Q)) {
                address R = Q;
                Q = Next(Q);
                DelAfter(L, &R, Prec); 
            } else {
                Prec = Q; 
                Q = Next(Q);
            }
        }
        P = Next(P);
    }
}

