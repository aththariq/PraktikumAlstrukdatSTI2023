// NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Praktikum 9
//Deskirpsi: Soal 3

#include <stdio.h>
#include "OddEvenList.h"

void sortList(List *L){ //bubble sort
    address P = First(*L);
    while (P != Nil){
        address Q = Next(P);
        while (Q != Nil){
            if (Info(P) > Info(Q)){
                infotype temp = Info(P);
                Info(P) = Info(Q);
                Info(Q) = temp;
            }
            Q = Next(Q);
        }
        P = Next(P);
    }
}

void OddEvenList(List L, List *Odd, List *Even){
    CreateEmpty(Odd);
    CreateEmpty(Even);
    
    address P = First(L);
    while (P != Nil){
        if (Info(P) % 2 == 0){
            InsVLast(Even, Info(P));
        } else {
            InsVLast(Odd, Info(P));
        }
        P = Next(P);
    }
    sortList(Odd);
    sortList(Even);
}