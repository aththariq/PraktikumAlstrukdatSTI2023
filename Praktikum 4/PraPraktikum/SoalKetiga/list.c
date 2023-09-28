//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 4
//Deskripsi: soal 3

#include <stdio.h>
#include "list.h"


List MakeList() {
    List L;
    for (int i = 0; i <= MaxEl; i++) {
        L.A[i] = Mark;
    }
    return L;
}

boolean IsEmpty(List L) {
    return (L.A[0] == Mark);
}

ElType Get(List L, IdxType i){
    return (L.A[i]);
}

void Set(List *L, IdxType i, ElType v){
    L->A[i] = v;
}

int Length(List L){
    int sum = 0;
    while (L.A[sum] != Mark && sum <= LastIdx(L)
    {
        sum++;
    }
    
    return sum;
}

IdxType FirstIdx(List L){
    return 0;
}

IdxType LastIdx(List L){
    return (Length(L)-1);
}

boolean IsIdxValid(List L, IdxType i){
    return (i>=0 && i<=(MaxEl-1));
}

boolean IsIdxEff(List L, IdxType i){
    return (i>=FirstIdx(L) && i<=LastIdx(L) && L.A[i] != InvalidIdx);
}

boolean Search(List L, ElType X){
    boolean found = false;
    for (int i = 0; i <= LastIdx(L); i++) {
        if (L.A[i] == X) {
            found = true;
            break; 
        }
    }
    return found;
}


void InsertFirst(List *L, ElType X) {
    if (IsEmpty(*L)) {
        L->A[0] = X;
    } else {
        for (int i = LastIdx(*L); i >= 0; i--) {
            L->A[i + 1] = L->A[i];
        }
        L->A[0] = X;
    }
}

void InsertAt(List *L, ElType X, IdxType i){
    if (IsEmpty(*L)){
        L->A[0] = X;
    } else {
        for (int j=LastIdx(L); j>=i; j--){
            L->A[j+1] = L->A[j];
        }
        L->A[i] = X;
    }
}

void InsertLast(List *L, ElType X){
    if (IsEmpty(*L)){
        L->A[0] = X;
    } else {
        L->A[LastIdx(*L)+1] = X;
    }
}

void DeleteFirst(List *L) {
    for (int i = 0; i < LastIdx(*L); i++) {
        L->A[i] = L->A[i + 1];
    }
    L->A[LastIdx(*L)] = Mark;
}

void DeleteAt(List *L, IdxType i) {
    for (int j = i; j < LastIdx(*L); j++) {
        L->A[j] = L->A[j + 1];
    }
    L->A[LastIdx(*L)] = Mark;
}


void DeleteLast(List *L) {
    L->A[LastIdx(*L)] = Mark;
}

List Concat(List L1, List L2) {
    List L;
    L = MakeList();
    int i, j;
    for (i = 0; i <= LastIdx(L1); i++) {
        L.A[i] = L1.A[i];
    }
    for (; i <= LastIdx(L2)+LastIdx(L1); i++) {
        L.A[j] = L2.A[j];
        j++;
    }
    return L;
}