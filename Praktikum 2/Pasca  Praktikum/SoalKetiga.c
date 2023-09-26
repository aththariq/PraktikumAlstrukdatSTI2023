// NIM: 18222013
// Nama: Aththariq Lisan Qur'an Daulah Sentono
// Tanggal: 21  September 2023
// Topik Praktikum: Pasca Praktikum
// Deskripsi: Soal Ketiga 

#include <stdio.h>
// #include <math.h> gajadi pake lol
#include <stdbool.h>

int hitungdigit (long long int n) {
    long long int digit = 0;
    while (n > 0) {
        n = n / 10;
        digit++;
    }
    return digit;
}

bool armstrong (long long int n) {
    int digit = hitungdigit(n);
    long long int temp = n;
    long long int sum = 0;
    while (temp > 0) {
        int digittemp = temp % 10;
        long long int looppangkat  =  1;
        // sum = sum + pow(digittemp, digit);  ga bisa pake pow, ga akurat
        for (int i = 0; i < digit; i++) {
            looppangkat *= digittemp;
        }
        sum += looppangkat;
        temp = temp / 10;
    }
    return (sum==n);
}

int main () {
    long long int i, j;
    scanf("%lld %lld", &i,  &j);
    
    for(i; i<=j; i++){
        if (armstrong(i)) {
            printf("%lld\n", i);
        }
    }
    
    return 0;
}