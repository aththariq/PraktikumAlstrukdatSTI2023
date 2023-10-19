#include <stdio.h>
#include "queue.h"

int main(){
    Queue q;
    ElType val;
    CreateQueue(&q);
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    displayQueue(q);
    dequeue(&q, &val);  
    displayQueue(q);

    return 0;
}