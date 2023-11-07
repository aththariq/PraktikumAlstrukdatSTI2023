#include <stdio.h>
#include "hashmap.h"

void CreateEmpty(HashMap *M){
    M-> Count = Nil;
    for(int i = 0; i < MaxEl; i++){
        M->Elements[i].Key = Undefined;
        M->Elements[i].Value = Undefined;
    }
}

address Hash(keytype K){
    return K % MaxEl;
}

valuetype Value(HashMap M, keytype k){
    address i = Hash(k);
    while (M.Elements[i].Key != k && M.Elements[i].Key != Undefined)
    {
        i = Hash(i + 1);
    }
    if (M.Elements[i].Key == k)
    {
        return M.Elements[i].Value;
    }
    else
    {
        return Undefined;
    }
}

void Insert(HashMap *M, keytype k, valuetype v){
    address indeks = Hash(k);
    while (M->Elements[indeks].Key!= Undefined){
        indeks = Hash(indeks + 1);
    }
    M->Elements[indeks].Key = k;
    M->Elements[indeks].Value = v;
    M->Count++;
}

void Delete(HashMap *M, keytype k){
    address i = Hash(k);
    while (M->Elements[i].Key != k && M->Elements[i].Key != Undefined)
    {
        i = Hash(i + 1);
    }
    if (M->Elements[i].Key == k)
    {
        M->Elements[i].Key = Undefined;
        M->Elements[i].Value = Undefined;
        M->Count--;
    }
}

void PrintHashMap(HashMap M){
    for (int i = 0; i < MaxEl; i++)
    {
        if (M.Elements[i].Key != Undefined)
        {
            printf("%d : %d\n", M.Elements[i].Key, M.Elements[i].Value);
        }
    }
}