// NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Pasca Praktikum 1
//Deskirpsi: Soal Ketiga

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int num = 2; // Mulai dari bilangan 2

    while (count < N) {
        int isPrime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Bukan bilangan prima jika ada pembagi selain 1 dan dirinya sendiri
                break;
            }
        }

        if (isPrime) {
            int reversed = 0;
            int original = num;

            while (original > 0) {
                int digit = original % 10;
                reversed = reversed * 10 + digit;
                original /= 10;
            }

            if (num == reversed) {
                count++;
                if (count == N) {
                    printf("%d\n", num);
                    break;
                }
            }
        }
        num++;
    }

    return 0;
}
