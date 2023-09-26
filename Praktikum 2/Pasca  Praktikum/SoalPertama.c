// NIM: 18222013
// Nama: Aththariq Lisan Qur'an Daulah Sentono
// Tanggal: 21  September 2023
// Topik Praktikum: Pasca Praktikum
// Deskripsi: Soal Pertama

#include <stdio.h>

int main() {
    int i;
    int angka;

    scanf("%d", &angka);
    int arr[angka];

    if(angka==1){
        scanf("%d", &angka);
        printf("%d\n", angka);}

    if (angka >= 2) {
        for(i=0; i<angka; i++){
            scanf("%d", &arr[i]);
        }

        int terbesar = arr[0];

        for(i=0; i<angka; i++){
            if(arr[i] > terbesar){
                terbesar = arr[i];
            }
        }
        int terbesarkedua = arr[0]; 
        if (angka!=2){
            for(i=0; i<angka; i++){
                if(arr[i] > terbesarkedua && arr[i]!=terbesar){
                    terbesarkedua = arr[i];
                }
            }
            printf("%d\n", terbesarkedua);
        } else {
            if (arr[0]>arr[1]) {
                printf("%d\n", arr[1]);

            }else {
                printf("%d\n", arr[0]);
            }
        }
    }
    return 0;  
}
