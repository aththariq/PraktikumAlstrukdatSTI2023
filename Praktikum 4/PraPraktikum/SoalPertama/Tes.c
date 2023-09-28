#include <stdio.h>
#include "array.c" // Sesuaikan dengan path file array.h

int main() {
    // Buat sebuah TabInt
    TabInt T;
    
    // Inisialisasi TabInt T
    MakeEmpty(&T);
    
    // Isi TabInt T dengan nilai-nilai
    SetEl(&T, 1, 10);   // Isi elemen ke-1 dengan nilai 10
    SetEl(&T, 2, 5);    // Isi elemen ke-2 dengan nilai 5
    SetEl(&T, 3, 20);   // Isi elemen ke-3 dengan nilai 20
    SetEl(&T, 4, 15);   // Isi elemen ke-4 dengan nilai 15
    SetNeff(&T, 4);     // Set Neff ke 4
    
    // Panggil fungsi IdxMaxTab
    IdxType idxMinx = IdxMinTab(T);
    
    // Tampilkan hasil indeks elemen maksimum
    printf("Indeks elemen maksimum: %d\n", idxMinx);
    
    return 0;
}
