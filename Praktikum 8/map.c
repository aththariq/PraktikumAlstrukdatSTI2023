//Nama: Aththariq Lisan Qur'an Daulah Sentono
//NIM: 18222013
//Tanggal: 18 Oktober 2023
//Topik Praktikum: Praktikum 8 
//Deskripsi: Soal 2

#include <stdio.h>
#include "map.h"

void CreateEmpty(Map *M){
    M->Count = Nil;
}

boolean IsEmpty(Map M){
    return (M.Count == Nil);
}

boolean IsFull(Map M){
    return (M.Count == MaxEl);
}

valuetype Value(Map M, keytype k){
    int i = 0;
    while (i < M.Count && M.Elements[i].Key != k){
        i++;
    }
    if (i < M.Count){
        return M.Elements[i].Value;
    } else {
        return Undefined;
    }
}

void Insert(Map *M, keytype k, valuetype v){
    if(IsEmpty(*M)){
        M->Elements[0].Key = k;
        M->Elements[0].Value = v;
        M->Count++;
    } else {
        if (Value(*M, k) == Undefined){
            M->Elements[M->Count].Key = k;
            M->Elements[M->Count].Value = v;
            M->Count++;
        }
    }
}

void Delete(Map *M, keytype k){
    if (Value(*M, k) != Undefined){
        int i = 0;
        while (i < M->Count && M->Elements[i].Key != k){
            i++;
        }
        while (i < M->Count){
            M->Elements[i] = M->Elements[i+1];
            i++;
        }
        M->Count--;
    }
}

boolean IsMember(Map M, keytype k){
    int i = 0;
    while (i < M.Count && M.Elements[i].Key != k){
        i++;
    }
    return (i < M.Count);
}


