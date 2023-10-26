//Nama: Aththariq Lisan Qur'an Daulah Sentono
//NIM: 18222013
//Tanggal: 18 Oktober 2023
//Topik Praktikum: Praktikum 
//Deskripsi: Soal 2

#include "dividestack.h"
#include <stdio.h>

void divideStack(Stack *s, Stack *oddS, Stack *evenS){
    Stack tempStack;
    CreateEmpty(&tempStack);
    while (!IsEmpty(*s)) {
        infotype X;
        Pop(s, &X);
        Push(&tempStack, X);
    }
    while (!IsEmpty(tempStack)) {
        infotype X;
        Pop(&tempStack, &X);
        if (X % 2 == 0) {
            Push(evenS, X);
        } else {
            Push(oddS, X);
        }
        Push(s, X);
    }
}