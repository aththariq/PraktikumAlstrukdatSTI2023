// NIM: 18222013
// Nama: Aththariq Lisan Qur'an Daulah Sentono
// Tanggal: 21  September 2023
// Topik Praktikum: Pasca Praktikum
// Deskripsi: Soal Pertama

#include <stdio.h>

#include <stdio.h>

int main() {
    int fibonacci[50];
    int sum = 0;
    int i, n;
    scanf("%d", &n);

    fibonacci[0] = 1;
    fibonacci[1] = 1;
    
    if(n>=1 && n<=50){
        for (i = 2; i < n; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
            if (fibonacci[i] % 2 == 0) {
                sum += fibonacci[i];
            }
        }
        printf("%d\n", sum);
    }
    else{
       printf("%d\n", -1); 
    }
    return 0;
}
