//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 1
//Deskripsi: soal 3

#include <stdio.h>  
#include "arraydin.h"
#include <stdlib.h>

ArrayDin MakeArrayDin(){
    ArrayDin array;
    array.A = (ElType *) malloc(InitialSize * sizeof(ElType));
    array.Capacity = InitialSize;
    array.Neff = 0;
    return array;
}

void DeallocateArrayDin(ArrayDin *array){
    free(array->A);
    array->Capacity = 0;
    array->Neff = 0;
}

boolean IsEmpty(ArrayDin array){
    return array.Neff == 0;
}

int Length(ArrayDin array){
    return array.Neff;
}

ElType Get(ArrayDin array, IdxType i){
    return array.A[i];
}

int GetCapacity(ArrayDin array){
    return array.Capacity;
}

void InsertAt(ArrayDin *array, ElType el, IdxType i){
    if (array->Neff == array->Capacity){
        array->Capacity *= 2;
        array->A = (ElType *) realloc(array->A, array->Capacity * sizeof(ElType));
    }
    int j;
    for (j = array->Neff; j > i; j--){
        array->A[j] = array->A[j-1];
    }
    array->A[i] = el;
    array->Neff++;
}

void DeleteAt(ArrayDin *array, IdxType i){
    int j;
    for (j = i; j < array->Neff; j++){
        array->A[j] = array->A[j+1];
    }
    array->Neff--;
}