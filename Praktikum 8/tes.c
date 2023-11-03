#include <stdio.h>
#include "set.h"

int main() {
    Set S;
    infotype Elmt;

    // Membuat set kosong
    CreateEmpty(&S);

    // Menguji apakah set kosong
    if (IsEmpty(S)) {
        printf("Set kosong.\n");
    } else {
        printf("Set tidak kosong.\n");
    }

    // Menambahkan elemen ke dalam set
    Elmt = 5;
    Insert(&S, Elmt);

    Elmt = 7;
    Insert(&S, Elmt);

    Elmt = 5; // Menambahkan elemen yang sudah ada
    Insert(&S, Elmt);

    // Menguji apakah set penuh
    if (IsFull(S)) {
        printf("Set penuh.\n");
    } else {
        printf("Set tidak penuh.\n");
    }

    // Mencetak semua elemen dalam set
    printf("Elemen dalam set: ");
    for (int i = 0; i < S.Count; i++) {
        printf("%d ", S.Elements[i]);
    }
    printf("\n");

    // Menghapus elemen dari set
    Elmt = 7;
    Delete(&S, Elmt);

    // Mencetak semua elemen dalam set setelah penghapusan
    printf("Elemen dalam set setelah penghapusan: ");
    for (int i = 0; i < S.Count; i++) {
        printf("%d ", S.Elements[i]);
    }
    printf("\n");

    // Menguji apakah sebuah elemen merupakan member dari set
    Elmt = 5;
    if (IsMember(S, Elmt)) {
        printf("%d adalah anggota dari set.\n", Elmt);
    } else {
        printf("%d bukan anggota dari set.\n", Elmt);
    }

    return 0;
}
