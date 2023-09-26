//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 1
//Deskripsi: Program ini berisi tentang menuliskan ke layar

#include <stdio.h>

int main() {
    long long int sum = 1;
    long long int angka;
    int satuan=0;

    scanf("%lld", &angka);

    if (angka == 0) {
        printf("0 0\n");
        return 0;
    }
    else {
        while (angka > 0){
            int digit = angka % 10;
            if (digit != 0 ) {
                sum *= digit;
            }
            angka /= 10;
        }
        int product = sum;

        while (product > 0) {
            int temp =  product % 10;
            if (temp!=0){
                satuan++;
            }
            product/=10;
        }

    printf("%lld %lld\n", sum, satuan);    
    return 0;
    }
}