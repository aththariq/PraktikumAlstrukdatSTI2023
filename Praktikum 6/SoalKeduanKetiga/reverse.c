//Nama: Aththariq Lisan Qur'an Daulah Sentono
//NIM: 18222013
//Tanggal: 18 Oktober 2023
//Topik Praktikum: Praktikum 6
//Deskripsi: Soal 3

#include <stdio.h>
#include "reverse.h"

void transferReverse(Queue* q1, Queue* q2){

    if (!IsEmpty(*q1))
    {
        ElType val;
        val = dequeue(q1);
        transferReverse(q1, q2);
        enqueue(q2, val);
    }
}