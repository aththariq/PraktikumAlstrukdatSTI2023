//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 4
//Deskripsi: soal 1

#include <stdio.h>  
#include "array.h"

void MakeEmpty (TabInt *T) {
    T->Neff = 0;
}

int NbElmt (TabInt T) {
    return T.Neff;
}

int MaxNbEl(TabInt T) {
    return (IdxMax - IdxMin + 1);
}


IdxType GetFirstIdx (TabInt T) {
    return IdxMin;
}

IdxType GetLastIdx (TabInt T) {
    return T.Neff;
}

ElType GetElmt (TabInt T, IdxType i){
    return T.TI[i];
}

void SetTab (TabInt Tin, TabInt *Tout) {
    IdxType i;
    for (i=IdxMin;i<=GetLastIdx(Tin); i++){
        Tout->TI[i]= Tin.TI[i];
    }
    Tout->Neff = Tin.Neff;
}

void SetEl (TabInt *T, IdxType i, ElType v){
    T->TI[i] = v;
    if (i > GetLastIdx(*T))  {
        T->Neff++;
    }
}

void SetNeff (TabInt *T, IdxType N){
    T->Neff = N;
}

boolean IsIdxValid (TabInt T, IdxType i){
    return (i>=IdxMin && i<=IdxMax);
}

boolean IsIdxEff (TabInt T, IdxType i){
    return (i>=IdxMin && i<=T.Neff);
}

boolean IsEmpty (TabInt T){
    return (T.Neff==0);
}

boolean IsFull (TabInt T){
    return (T.Neff==MaxNbEl(T));
}

void TulisIsi (TabInt T) {
    IdxType i;
    if (IsEmpty(T)){
        printf("Tabel kosong\n");
    } else {
        for (i=GetFirstIdx(T); i<=T.Neff; i++){
            printf("%d:%d\n",i, T.TI[i]);
        }
    }
}

TabInt PlusTab (TabInt T1, TabInt T2){
    TabInt result;
    MakeEmpty(&result);

    for(IdxType i=GetFirstIdx(T1); i<=GetLastIdx(T1); i++){
        SetEl(&result, i, GetElmt(T1, i) + GetElmt(T2, i));
    }
    result.Neff = T1.Neff;
    return result;
}

TabInt MinusTab (TabInt T1, TabInt T2){
    TabInt result;
    MakeEmpty(&result);

    for(IdxType i=GetFirstIdx(T1); i<=GetLastIdx(T1); i++){
        SetEl(&result, i, GetElmt(T1, i) - GetElmt(T2, i));
    }
    result.Neff = T1.Neff;
    return result;
}

ElType ValMax (TabInt T){
    int i;
    ElType max;
    max = T.TI[IdxMin];
    for (i=IdxMin + 1; i<=T.Neff; i++){
        if (T.TI[i]>max){
            max = T.TI[i];
        }
    }
    return max;
}

ElType ValMin (TabInt T){
    int i;
    ElType min;
    min = T.TI[IdxMin];
    for (i=IdxMin + 1; i<=T.Neff; i++){
        if (T.TI[i]<min){
            min = T.TI[i];
        }
    }
    return min;
}

IdxType IdxMaxTab (TabInt T){
    int i;
    ElType max;
    IdxType idxmax;
    max = T.TI[GetFirstIdx(T)];
    idxmax = GetFirstIdx(T);
    for (i=GetFirstIdx(T)+1; i<=T.Neff; i++){
        if (T.TI[i]>max){
            max = T.TI[i];
            idxmax = i;
        }
    }
    return idxmax;
}

IdxType IdxMinTab (TabInt T){
    int i;
    ElType min;
    IdxType idxMin;
    min = T.TI[GetFirstIdx(T)];
    idxMin = GetFirstIdx(T);
    for (i=GetFirstIdx(T)+1; i<=T.Neff; i++){
        if (T.TI[i]<min){
            min = T.TI[i];
            idxMin = i;
        }
    }
    return idxMin;
}