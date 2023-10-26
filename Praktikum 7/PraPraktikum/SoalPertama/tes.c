#include <stdio.h>
#include "stack.h"

void printStack(Stack S) {
    printf("Is stack empty? %s\n", IsEmpty(S) ? "Yes" : "No");
    printf("Is stack full? %s\n", IsFull(S) ? "Yes" : "No");
}

void PrintStack(Stack S) {
    Stack tempStack;
    CreateEmpty(&tempStack);

    printf("Isi stack: ");
    while (!IsEmpty(S)) {
        infotype X;
        Pop(&S, &X);
        Push(&tempStack, X);
    }

    while (!IsEmpty(tempStack)) {
        infotype X;
        Pop(&tempStack, &X);
        printf("%d ", X);
        Push(&S, X);
    }
    printf("\n");
}


int main() {
    Stack S;
    infotype X;

    // Inisialisasi stack
    CreateEmpty(&S);
    printf("Stack initialized.\n");

    // Push elemen ke dalam stack
    Push(&S, 5);
    Push(&S, 10);
    Push(&S, 15);
    printf("Pushed elements onto the stack.\n");

    // Cetak isi dari stack
    PrintStack(S);

    // Pop elemen dari stack
    Pop(&S, &X);
    printf("Popped %d from the stack.\n", X);

    // Cetak isi dari stack setelah operasi Pop
    PrintStack(S);

    return 0;
}
