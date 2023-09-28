#include <stdio.h>
#include "deret.c"

int main() {
    int a, b, n;
    int result[100];
    int i;

    scanf("%d", &a);
    segitiga_pascal(a, result);
    /* for (i = 0; i < a; i++) {
        printf("%d ", result[i]);
    } */

    return 0;
}