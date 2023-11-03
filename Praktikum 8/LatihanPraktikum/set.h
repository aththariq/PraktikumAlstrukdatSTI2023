#ifndef set_H
#define set_H
#include <stdio.h>
#include "boolean.h"

/* MODUL Set
Deklarasi stack yang dengan implementasi array eksplisit-statik rata kiri
*/

#define Nil 0
#define MaxEl 100

typedef int infotype;
typedef int address;

typedef struct
{
    infotype Elements[MaxEl];
    address Count;
} Set;

/* Definisi Set S kosong : S.Count = Nil */
/* S.Count = jumlah element Set */
/* S.Elements = tempat penyimpanan element Set */

/* ********* Prototype ********* */

/* *** Konstruktor/Kreator *** */
void CreateEmpty(Set *S);
/* I.S. Sembarang */
/* F.S. Membuat sebuah Set S kosong berkapasitas MaxEl */
/* Ciri Set kosong : count bernilai Nil */

/* ********* Predikat Untuk test keadaan KOLEKSI ********* */
boolean IsEmpty(Set S);
/* Mengirim true jika Set S kosong*/
/* Ciri Set kosong : count bernilai Nil */

boolean IsFull(Set S);
/* Mengirim true jika Set S penuh */
/* Ciri Set penuh : count bernilai MaxEl */

/* ********** Operator Dasar Set ********* */
void Insert(Set *S, infotype Elmt);
/* Menambahkan Elmt sebagai elemen Set S. */
/* I.S. S mungkin kosong, S tidak penuh
        S mungkin sudah beranggotakan Elmt */
/* F.S. Elmt menjadi anggota dari S. Jika Elmt sudah merupakan anggota, operasi tidak dilakukan */

void Delete(Set *S, infotype Elmt);
/* Menghapus Elmt dari Set S. */
/* I.S. S tidak kosong
        Elmt mungkin anggota / bukan anggota dari S */
/* F.S. Elmt bukan anggota dari S */

boolean IsMember(Set S, infotype Elmt);
/* Mengembalikan true jika Elmt adalah member dari S */

/* ********** Primitif Dasar Set ********* */
void Union(Set *S1, Set *S2, Set *S3);
/* Menghasilkan S3 yang merupakan hasil gabungan S1 dan S2 yang tidak sama karena set unique*/ 

void Intersection(Set *S1, Set *S2, Set *S3);
/* Menghasilkan S3 yang merupakan hasil irisan S1 dan S2 */

void Difference(Set *S1, Set *S2, Set *S3);
/* Menghasilkan S3 yang merupakan hasil  S1 - S2 (set difference)*/

void PrintSet(Set S);
/* Mencetak set S ke layar */

void CopySet(Set Sin, Set *Sout);
/* Menyalin Sin ke Sout */

boolean IsSubset(Set S1, Set S2);
/* Menghasilkan true jika S1 merupakan subset dari S2 */

boolean IsEqual(Set S1, Set S2);
/* Menghasilkan true jika S1 sama dengan S2 */

#endif