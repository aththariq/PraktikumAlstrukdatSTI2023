//Nama: Aththariq Lisan Qur'an Daulah Sentono
//NIM: 18222013
//Tanggal: 18 Oktober 2023
//Topik Praktikum: Praktikum 6
//Deskripsi: Soal 1

#include <stdio.h>
#include "queue.h"


void CreateQueue(Queue *q){
    IDX_HEAD(*q) = IDX_UNDEF;
    IDX_TAIL(*q) = IDX_UNDEF;
}   

boolean isEmpty(Queue q){
    return (IDX_HEAD(q) == IDX_UNDEF && IDX_TAIL(q) == IDX_UNDEF);
}

boolean isFull(Queue q){
    return (IDX_TAIL(q) - IDX_HEAD(q) + 1 == CAPACITY);
}

int length(Queue q){
    if (isEmpty(q))
        return 0;
    if (IDX_TAIL(q) > IDX_HEAD(q))
    {
        return (IDX_TAIL(q) - IDX_HEAD(q)) + 1;
    }
    else
    {
        return (IDX_TAIL(q) + CAPACITY + 1) - IDX_HEAD(q);
    }
}

void enqueue(Queue *q, ElType val){
    if (isEmpty(*q))
    {
        IDX_HEAD(*q) = 0;
        IDX_TAIL(*q) = 0;
    }
    else
    {
        if (IDX_TAIL(*q) == CAPACITY - 1)
        {
            IDX_TAIL(*q) = 0;
        }
        else
        {
            IDX_TAIL(*q)++;
        }
    }
    TAIL(*q) = val;
}

void dequeue(Queue *q, ElType *val){
    *val = HEAD(*q);
    if (IDX_HEAD(*q) == IDX_TAIL(*q))
    {
        IDX_HEAD(*q) = IDX_UNDEF;
        IDX_TAIL(*q) = IDX_UNDEF;
    }
    else
    {
        if (IDX_HEAD(*q) == CAPACITY - 1)
        {
            IDX_HEAD(*q) = 0;
        }
        else
        {
            IDX_HEAD(*q)++;
        }
    }
}

void displayQueue(Queue q)
{
    ElType val;
    printf("[");
    while (!isEmpty(q))
    {
        dequeue(&q, &val);
        if (length(q) != 0)
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