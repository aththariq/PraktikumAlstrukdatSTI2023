//Nama: Aththariq Lisan Qur'an Daulah Sentono
//NIM: 18222013
//Tanggal: 18 Oktober 2023
//Topik Praktikum: Praktikum 
//Deskripsi: Soal 3

#include <stdio.h>
#include "hashmap.h"    

void CreateEmpty(HashMap *M){
    M-> Count = Nil;
    for(int i = 0; i < MaxEl; i++){
        M->Elements[i].Key = Undefined;
        M->Elements[i].Value = Undefined;
    }
}

address Hash(keytype K){
    return K % MaxEl;
}

valuetype Value(HashMap M, keytype k){
    address i = Hash(k);
    while (M.Elements[i].Key != k && M.Elements[i].Key != Undefined)
    {
        i = (i + 1) % MaxEl;
    }
    if (M.Elements[i].Key == k)
    {
        return M.Elements[i].Value;
    }
    else
    {
        return Undefined;
    }
}

void Insert(HashMap *M, keytype k, valuetype v){
    address indeks = Hash(k);
    while (M->Elements[indeks].Key!= Undefined){
        indeks = (indeks + 1) % MaxEl;
    }
    M->Elements[indeks].Key = k;
    M->Elements[indeks].Value = v;
    M->Count++;
}