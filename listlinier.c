// NIM: 18222013
//Nama: Aththariq Lisan Q. D. S.
//Tanggal: 14 September 2023
//Topik Praktikum: Praktikum 9
//Deskirpsi: Soal 1

#include <stdio.h>
#include "listlinier.h"

boolean IsEmpty (List L){
    return (First(L) == Nil);
}

void CreateEmpty (List *L){
    First(*L) = Nil;
}

address Alokasi (infotype X){
    address P = malloc (sizeof(ElmtList));
    if (P != Nil){
        Info(P) = X;
        Next(P) = Nil;
    }
    return P;
}

void Dealokasi (address *P){
    free(*P);
}

address Search (List L, infotype X){
    address P = First(L);
    while (P != Nil){
        if (Info(P) == X){
            return P;
        }
        P = Next(P);
    }
    return Nil;
}

void InsVFirst (List *L, infotype X){
    address P = Alokasi(X);
    if (P != Nil){
        Next(P) = First(*L);
        First(*L) = P;
    }
}

void InsVLast (List *L, infotype X){
    address P = Alokasi(X);
    if (P != Nil){
        if (IsEmpty(*L)){
            InsVFirst(L,X);
        } else {
            address Last = First(*L);
            while (Next(Last) != Nil){
                Last = Next(Last);
            }
            Next(Last) = P;
        }
    }
}

void DelVFirst (List *L, infotype *X){
    address P = First(*L);  
    *X = Info(P);
    First(*L) = Next(P);
    Next(P) = Nil;
    Dealokasi(&P);
}

void DelVLast (List *L, infotype *X){
    address P = First(*L);
    address Prec = Nil;
    while (Next(P) != Nil){
        Prec = P;
        P = Next(P);
    }
    *X = Info(P);
    if (Prec == Nil){
        First(*L) = Nil;
    } else {
        Next(Prec) = Nil;
    }
    Dealokasi(&P);
}

void InsertFirst (List *L, address P){
    Next(P) = First(*L);
    First(*L) = P;
}

void InsertAfter (List *L, address P, address Prec){
    Next(P) = Next(Prec);
    Next(Prec) = P;
}

void InsertLast (List *L, address P){
    if (IsEmpty(*L)){
        InsertFirst(L,P);
    } else {
        address Last = First(*L);
        while (Next(Last) != Nil){
            Last = Next(Last);
        }
        InsertAfter(L,P,Last);
    }
}