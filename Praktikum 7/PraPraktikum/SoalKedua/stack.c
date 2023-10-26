//Nama: Aththariq Lisan Qur'an Daulah Sentono
//NIM: 18222013
//Tanggal: 18 Oktober 2023
//Topik Praktikum: Praktikum 
//Deskripsi: Soal 2

#include "stack.h"
#include <stdio.h>

void CreateEmpty(Stack *S){
    Top(*S) = Nil;
}   

boolean IsEmpty(Stack S){
    return (Top(S) == Nil);
}

boolean IsFull(Stack S){
    return (Top(S) == MaxEl-1);
}

void Push(Stack *S, infotype X){
    Top(*S)++;
    InfoTop(*S) = X;
}

void Pop(Stack *S, infotype *X){
    *X = InfoTop(*S);
    Top(*S)--;
}

