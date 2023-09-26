//NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Praktikum 2
//Deskirpsi: Soal Pertama

#include  <stdio.h>

int main() {

    long long int sisimiring; 
    int i,j;
    scanf("%lld", &sisimiring);
     
    //ketupat bagian atas
    for (i=0; i<sisimiring; i++) {
        for (j=0; j<sisimiring-(i+1); j++) {
            printf(" ");
        }
        for (j=0; j<=i; j++) {
            printf("*");
        }
        for (j=0; j<=i-1; j++) {
            printf("*");
        } 
        printf("\n");
    }

    //ketupat bagian bawah
    for (i=0; i<(sisimiring); i++) {
        for (j=0; j<=(i-1); j++) {
            printf(" ");
        }
        for (j=0; j<=sisimiring-i-1; j++) {
            printf("*");
        }
        for (j=0; j<=sisimiring-i-2; j++) {
            printf("*");
        }
        printf("\n");
    }
}