#include <stdio.h>
#include "listlinier.h"
#include "remove.h"

int main() {
    // Buat list baru
    List L;
    CreateEmpty(&L);

    // Tambahkan elemen ke dalam list
    InsVLast(&L, 1);
    InsVLast(&L, 1);
    InsVLast(&L, 3);
    InsVLast(&L, 1);

    // Cetak isi list sebelum penghapusan duplikat
    printf("Isi awal list: ");
    PrintInfo(L);

    // Hapus duplikat
    RemoveDuplicates(&L);

    // Cetak isi list setelah penghapusan duplikat
    printf("Isi list setelah penghapusan duplikat: ");
    PrintInfo(L);

    return 0;
}
