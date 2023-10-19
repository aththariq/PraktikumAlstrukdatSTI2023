#include <stdio.h>
#include "queue.h"

int main() {
    Queue q;
    ElType val;

    // Menguji CreateQueue
    CreateQueue(&q);

    // Menguji isEmpty dan displayQueue
    printf("Is queue empty? %s\n", isEmpty(q) ? "Yes" : "No");
    printf("Queue: ");
    displayQueue(q);
    printf("\n");

    // Menguji enqueue
    enqueue(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 15);
    printf("After enqueue: ");
    displayQueue(q);
    printf("\n");

    // Menguji length
    printf("Length of queue: %d\n", length(q));

    // Menguji isFull
    printf("Is queue full? %s\n", isFull(q) ? "Yes" : "No");

    // Menguji dequeue
    dequeue(&q, &val);
    printf("Dequeued element: %d\n", val);
    printf("After dequeue: ");
    displayQueue(q);
    printf("\n");

    return 0;
}
