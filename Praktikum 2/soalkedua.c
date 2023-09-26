// NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Praktikum 2
//Deskirpsi: Soal Kedua

#include <stdio.h>

int main() {
    char kalimat[100]; 
    int jumlahkata = 0;
    int panjangkalimat;

    scanf("%[^\n]", kalimat); 

    for (int i=0; kalimat[i] != '\0'; i++) {
        if (kalimat[i]==' ')  {
            jumlahkata++;
        }
    }
    jumlahkata++;

    printf("%d\n", jumlahkata);

    return 0;
}
