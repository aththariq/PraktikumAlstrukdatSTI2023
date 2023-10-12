//NIM: 18222013
//Nama: Aththriq Lisan Qur'an Daulah Sentono
//Tanggal: 07/09/2023
//Topik Praktikum: Prapraktikum 5
//Deskripsi: soal 3

#include <stdio.h>
#include "mesinkata.h"
#include "mesinkarakterv2.h"

boolean EndWord;
Word currentWord;

void IgnoreBlanks()
{
    while (currentChar == ' ')
    {
        ADV();
    }
}

void STARTWORD()
{
    START();
    IgnoreBlanks();
    if (currentChar == '.')
    {
        EndWord = true;
    }
    else
    {
        EndWord = false;
        CopyWord();
    }
}

void ADVWORD()
{
    IgnoreBlanks();
    if (currentChar == '.')
    {
        EndWord = true;
    }
    else
    {
        CopyWord();
        IgnoreBlanks();
    }
}

void CopyWord()
{
    int i = 0;
    while ((currentChar != '.') && (currentChar != BLANK))
    {
        currentWord.TabWord[i] = currentChar;
        ADV();
        i++;
    }
    if (i > NMax)
    {
        currentWord.Length = NMax;
    }
    else
    {
        currentWord.Length = i;
    }
}