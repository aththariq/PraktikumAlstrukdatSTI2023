#include <stdio.h>  
#include "mesinkarakterv2.h"
#include "mesinkata.h"

int main() {
    int count = 0;
    int total = 0;
    Word kata;
    STARTWORD();
    if (EndWord) {
        printf("Pita karakter kosong\n");
    } else {
        for (int i = 0; i < currentWord.Length; i++) {
            kata.TabWord[i] = currentWord.TabWord[i];
        }
        kata.Length = currentWord.Length;
        count++;
        total++;
        do {   
            ADVWORD();
            total++;
            if (currentWord.Length == kata.Length) {
                for (int i = 0; i < currentWord.Length; i++) {
                    if (currentWord.TabWord[i] != kata.TabWord[i]) {
                        break;
                    } else {
                        count++;
                    }
                }
            }
        } while(!EndWord);
        printf("%d/%d\n", count, total);
    }
    return 0;
}