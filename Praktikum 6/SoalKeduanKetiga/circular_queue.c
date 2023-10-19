//Nama: Aththariq Lisan Qur'an Daulah Sentono
//NIM: 18222013
//Tanggal: 18 Oktober 2023
//Topik Praktikum: Praktikum 6
//Deskripsi: Soal 2

#include <stdio.h>
#include "circular_queue.h"

void CreateQueue(Queue *Q){
    IDX_HEAD(*Q) = IDX_UNDEF;
    IDX_TAIL(*Q) = IDX_UNDEF;
}   

boolean IsEmpty (Queue Q){
    return (IDX_HEAD(Q) == IDX_UNDEF && IDX_TAIL(Q) == IDX_UNDEF);
}

boolean IsFull (Queue Q){
    return (IDX_TAIL(Q) - IDX_HEAD(Q) + 1 == (IDX_MAX+1));
}

int Length (Queue Q){
    if (IsEmpty(Q))
        return 0;
    if (IDX_TAIL(Q) > IDX_HEAD(Q))
    {
        return (IDX_TAIL(Q) - IDX_HEAD(Q)) + 1;
    }
    else
    {
        return ((IDX_TAIL(Q) + (IDX_MAX+1) - IDX_HEAD(Q))+1);
    }
}

void enqueue(Queue *Q, ElType val){
    if (IsEmpty(*Q))
    {
        IDX_HEAD(*Q) = 0;
        IDX_TAIL(*Q) = 0;
    }
    else
    {
        if (IDX_TAIL(*Q) == (IDX_MAX+1) - 1)
        {
            IDX_TAIL(*Q) = 0;
        }
        else
        {
            IDX_TAIL(*Q)++;
        }
    }
    TAIL(*Q) = val;
}

ElType dequeue (Queue * Q){
    ElType val;
    val = HEAD(*Q);
    if (IDX_HEAD(*Q) == IDX_TAIL(*Q))
    {
        IDX_HEAD(*Q) = IDX_UNDEF;
        IDX_TAIL(*Q) = IDX_UNDEF;
    }
    else
    {
        if (IDX_HEAD(*Q) == (IDX_MAX+1) - 1)
        {
            IDX_HEAD(*Q) = 0;
        }
        else
        {
            IDX_HEAD(*Q)++;
        }
    }
    return val;
}

void displayQueue(Queue q)
{
    ElType val;
    printf("[");
    while (!IsEmpty(q))
    {
        int val = dequeue(&q);
        if (Length(q) != 0)
        {
            printf("%d,", val);
        }
        else
        {
            printf("%d", val);
        }
    }
    printf("]\n");
}