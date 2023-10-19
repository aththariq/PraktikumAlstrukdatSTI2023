#include <stdio.h>
#include "mesinkarakter.h"

#include <stdio.h>
#include "mesinkarakter.h"

int main() {
    FILE *pita = stdin; // Mengatur pita untuk merujuk ke aliran standar masukan (stdin)

    char karakter;
    

    // Membaca karakter dari pita (stdin)
    karakter = getc(pita);

    // Mencetak karakter yang dibaca
    printf("Anda mengetikkan: %c\n", karakter);

    return 0;
}
