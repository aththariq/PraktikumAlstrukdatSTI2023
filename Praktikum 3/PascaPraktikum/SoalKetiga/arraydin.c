//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: PascaPraktikum 3
//Deskripsi: soal 3

#include "arraydin.h"
#include <stdio.h>
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

void InsertLast(ArrayDin *array, ElType el){
    if (array->Neff == array->Capacity){
        array->Capacity *= 2;
        array->A = (ElType *) realloc(array->A, array->Capacity * sizeof(ElType));
    }
    array->A[array->Neff] = el;
    array->Neff++;
}

void InsertFirst (ArrayDin *array, ElType el){
    if (array->Neff == array->Capacity){
        array->Capacity *= 2;
        array->A = (ElType *) realloc(array->A, array->Capacity * sizeof(ElType));
    }
    int j;
    for (j = array->Neff; j > 0; j--){
        array->A[j] = array->A[j-1];
    }
    array->A[0] = el;
    array->Neff++;
}

void DeleteAt(ArrayDin *array, IdxType i){
    int j;
    for (j = i; j < array->Neff; j++){
        array->A[j] = array->A[j+1];
    }
    array->Neff--;
}

void DeleteLast(ArrayDin *array){
    array->Neff--;
}

void DeleteFirst(ArrayDin *array){
    int j;
    for (j = 0; j < array->Neff; j++){
        array->A[j] = array->A[j+1];
    }
    array->Neff--;
}

void PrintArrayDin(ArrayDin array){
    printf("[");
    int i;
    for (i = 0; i < array.Neff; i++){
        printf("%d", array.A[i]);
        if (i != array.Neff-1){
            printf(",");
        }
    }
    printf("]\n");
}

void ReverseArrayDin(ArrayDin *array){
    int i;
    for (i = 0; i < array->Neff/2; i++){
        ElType temp = array->A[i];
        array->A[i] = array->A[array->Neff-i-1];
        array->A[array->Neff-i-1] = temp;
    }
}

ArrayDin CopyArrayDin(ArrayDin array){
    ArrayDin array2;
    array2.A = (ElType *) malloc(array.Capacity * sizeof(ElType));
    array2.Capacity = array.Capacity;
    array2.Neff = array.Neff;
    int i;
    for (i = 0; i < array.Neff; i++){
        array2.A[i] = array.A[i];
    }
    return array2;
}

IdxType SearchArrayDin(ArrayDin array, ElType el){
    int i;
    for (i = 0; i < array.Neff; i++){
        if (array.A[i] == el){
            return i;
        }
    }
    return -1;
}