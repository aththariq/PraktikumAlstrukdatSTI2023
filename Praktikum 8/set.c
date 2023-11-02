//Nama: Aththariq Lisan Qur'an Daulah Sentono
//NIM: 18222013
//Tanggal: 18 Oktober 2023
//Topik Praktikum: Praktikum 8 
//Deskripsi: Soal 1

#include <stdio.h>
#include "set.h"

void CreateEmpty(Set *S){
    S->Count = Nil;
}

boolean IsEmpty(Set S){
    return (S.Count == Nil);
}

boolean IsFull(Set S){
    return (S.Count == MaxEl);
}

void Insert(Set *S, infotype Elmt){
    if (!IsMember(*S, Elmt)){
        S->Elements[S->Count] = Elmt;
        S->Count++;
    }
}

void Delete(Set *S, infotype Elmt){
    if (IsMember(*S, Elmt)){
        int i = 0;
        while (i < S->Count && S->Elements[i] != Elmt){
            i++;
        }
        while (i < S->Count-1){
            S->Elements[i] = S->Elements[i+1];
            i++;
        }
        S->Count--;
    }
}

boolean IsMember(Set S, infotype Elmt){
    int i = 0;
    while (i < S.Count && S.Elements[i] != Elmt){
        i++;
    }
    return (i < S.Count);
}