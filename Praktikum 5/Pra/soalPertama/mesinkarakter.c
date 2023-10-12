//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 5
//Deskripsi: soal 1

#include <stdio.h>
#include "mesinkarakter.h"

char currentChar;
boolean EOP;
static FILE *pita;
static int retval;

void START() {
    /* Mesin siap dioperasikan. Pita disiapkan ... */
    /* Algoritma */
    pita = stdin;
    ADV();
}

void ADV() {
    /* Pita dimajukan satu karakter. ... */
    /* Algoritma */
    retval = fscanf(pita, "%c", &currentChar);
    EOP = (currentChar == MARK);
    if (EOP) {
        fclose(pita);
    }
}

char GetCC() {
    /* Mengirimkan currentChar */
    /* Algoritma */
    return currentChar;
}

boolean IsEOP() {
    /* Mengirimkan true jika currentChar = MARK */
    /* Algoritma */
    return EOP;
}