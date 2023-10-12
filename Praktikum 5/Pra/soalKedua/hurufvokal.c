//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 5
//Deskripsi: soal 2

/* Dengan menggunakan ADT Mesin Karakter yang sudah anda implementasikan pada soal sebelumnya, buatlah sebuah program C untuk menuliskan/memberikan output pada layar yaitu: untaian karakter setiap huruf vokal beserta banyaknya huruf vokal tersebut yang terbaca pada pita mesin karakter kecuali huruf vokal yang menjadi pengecualian yang menjadi input pada program tersebut. Program yang anda buat harus terlebih dulu menerima input sebuah variabel char yang akan menyimpan huruf vokal yang menjadi pengecualian sebelum mesin karakter dijalankan. 

Selain itu, program yang anda buat harus memberikan output ke layar dengan menuliskan terlebih dulu untaian huruf-huruf vokal kemudian diikuti angka yang menyatakan banyaknya huruf vokal tersebut, di mana keduanya dipisahkan dengan satu spasi. Kemudian, jika ternyata pada pita karakter tidak ditemukan huruf vokal selain huruf pengecualian atau tidak ditemukan huruf vokal sama sekali, maka program cukup menuliskan angka 0 pada layar. */
#include "mesinkarakter.h"
#include <stdio.h>

char currentChar;
boolean EOP;
static FILE *pita;

// void START() {
//     pita = stdin;
//     ADV();
// }

// void ADV() {
//     fscanf(pita, "%c", &currentChar);
//     EOP = IsEOP();
//     if (EOP) {
//         fclose(pita);
//     }
// }

// char GetCC() {
//     return currentChar;
// }

// boolean IsEOP() {
//     return (currentChar == MARK);
// }

int main() {
    char exc;
    int count;

    scanf("%c", &exc);
    count = 0;

    START();

    while (!EOP) {
        if ((GetCC() == 'a' || GetCC() == 'e' || GetCC() == 'i' || GetCC() == 'o' || GetCC() == 'u') && (GetCC() != exc)) {
            printf("%c", GetCC());
            count += 1;
        }
        ADV();
    }

    if (count != 0) {
        printf(" %d\n", count);
    }
    else {
        printf("%d\n", count);
    }

    return 0;
}