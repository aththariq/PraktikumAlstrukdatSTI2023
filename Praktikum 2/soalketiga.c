//NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Praktikum 2
//Deskirpsi: Soal Ketiga

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int angka[n];
    
    for (int i=0; i<n; i++) {
        scanf("%d", &angka[i]);
    }

    int jumlah = 0;
    for (int i=0; i<n; i++) {
        int temp = angka[i];
        int digit = 0;
        while (temp != 0) {
            temp = temp/10;
            digit++;
        }
        if (digit%2==0) {
            jumlah++;
        }
    }
    printf("%d\n", jumlah);
    return 0;
}