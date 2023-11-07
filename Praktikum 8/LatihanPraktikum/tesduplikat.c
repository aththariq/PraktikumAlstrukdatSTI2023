#include <stdio.h>
#include "duplicate.h"

int main() {
    int arr[] = {1, 1, 2, 3};
    int arrSize = 4;
    int arrRes[4];
    int arrResSize;

    removeDuplicateDesc(arr, arrSize, arrRes, &arrResSize);

    printf("Array setelah menghapus duplikat dan mengurutkan secara menurun:\n");
    for (int i = 0; i < arrResSize; i++) {
        printf("%d ", arrRes[i]);
    }
    printf("\n");

    return 0;
}