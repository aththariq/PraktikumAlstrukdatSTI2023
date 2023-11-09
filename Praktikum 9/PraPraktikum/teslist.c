#include <stdio.h>
#include "listlinier.h"

/* int main() {
    // Buat list baru
    List L;
    CreateEmpty(&L);

    // Tambahkan elemen ke dalam list
    InsVLast(&L, 5);
    InsVLast(&L, 10);
    InsVLast(&L, 15);
    InsVLast(&L, 20);

    // Cetak isi list
    printf("Isi awal list: ");
    PrintInfo(L);

    // Contoh penggunaan fungsi-fungsi lain
    infotype max = Max(L);
    printf("Nilai maksimum: %d\n", max);

    infotype min = Min(L);
    printf("Nilai minimum: %d\n", min);

    float average = Average(L);
    printf("Rata-rata nilai: %.2f\n", average);

    // Lakukan inversi list
    InversList(&L);
    printf("Isi setelah inversi list: ");
    PrintInfo(L);

    // Buat list baru
    List L2;
    CreateEmpty(&L2);

    InsVLast(&L2, 25);
    InsVLast(&L2, 30);
    printf("Isi list L2: ");
    PrintInfo(L2);

    // Konkatenasi list L dan L2 ke L3
    List L3;
    CreateEmpty(&L3);
    Konkat1(&L, &L2, &L3);

    // Cetak isi list L3 setelah konkatenasi
    printf("Isi list L3 setelah konkatenasi: ");
    PrintInfo(L3);

    return 0;
}
 */

/* int main() {
    // Buat list baru
    List L;
    CreateEmpty(&L);

    // Tambahkan elemen ke dalam list
    InsVLast(&L, 1);
    InsVLast(&L, 2);
    InsVLast(&L, 3);
    InsVLast(&L, 4);

    // Cetak isi list sebelum penghapusan
    printf("Isi awal list: ");
    PrintInfo(L);

    // Hapus elemen dengan nilai 2
    infotype toDelete = 2;
    DelP(&L, toDelete);

    // Cetak isi list setelah penghapusan
    printf("Isi list setelah penghapusan: ");
    PrintInfo(L);

    return 0;
} */

int main() {
    // Buat list baru
    List L;
    CreateEmpty(&L);

    // Tambahkan elemen ke dalam list
    InsVLast(&L, 1);
    InsVLast(&L, 2);
    InsVLast(&L, 3);
    InsVLast(&L, 4);

    // Cetak isi list sebelum penghapusan
    printf("Isi awal list: ");
    PrintInfo(L);

    // Tentukan elemen sebelum yang akan dihapus
    address Prec = First(L);

    // Hapus elemen setelah elemen pertama
    address Pdel;
    DelAfter(&L, &Pdel, Prec);

    // Cetak isi list setelah penghapusan
    printf("Isi list setelah penghapusan: ");
    PrintInfo(L);

    return 0;
}

