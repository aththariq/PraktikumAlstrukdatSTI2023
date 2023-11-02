#include <stdio.h>
#include "hashmap.h"

#include <stdio.h>
#include "hashmap.h"

int main() {
    HashMap M;
    keytype keys[] = {5, 15, 25, 35, 45}; // contoh kunci
    valuetype values[] = {10, 20, 30, 40, 50}; // contoh nilai

    // Menggunakan fungsi CreateEmpty
    CreateEmpty(&M);

    // Menggunakan fungsi Insert
    for (int i = 0; i < 5; i++) {
        Insert(&M, keys[i], values[i]);
    }

    // Menggunakan fungsi Value untuk mencari nilai berdasarkan kunci
    keytype searchKey = 25;
    valuetype result = Value(M, searchKey);
    if (result != Undefined) {
        printf("Nilai yang ditemukan untuk kunci %d adalah %d\n", searchKey, result);
    } else {
        printf("Kunci %d tidak ditemukan\n", searchKey);
    }

    return 0;
}
