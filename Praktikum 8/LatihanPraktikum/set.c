#include <stdio.h>
#include "set.h"

void CreateEmpty(Set *S){
    S->Count = Nil;
}

boolean IsEmpty(Set S){
    return S.Count == Nil;
}

boolean IsFull(Set S){
    return S.Count == MaxEl;
}

void Insert(Set *S, infotype Elmt){
    if (!IsMember(*S, Elmt)){
        S->Elements[S->Count] = Elmt;
        S->Count++;
    }
}

void Delete(Set *S, infotype Elmt){
    if(IsMember(*S,Elmt)){
        int i = 0;
        while(i<S->Count && S->Elements[i] != Elmt){
            i++;
        }
        while (i < S->Count-1){
            S->Elements[i] = S->Elements[i+1];
            i++;
        }
        S->Count--;
    }
}


boolean IsMember(Set S, infotype Elmt){
    int i = 0;
    while(i<S.Count && S.Elements[i] != Elmt){
        i++;
    }
    return (i<S.Count);
}

void Union(Set *S1, Set *S2, Set *S3){
    CreateEmpty(S3);
    int i = 0;
    while(i<S1->Count && !IsFull(*S3) ){
        if(!IsMember(*S3, S1->Elements[i])){
            Insert(S3, S1->Elements[i]);
        }
        i++;
    }
    int j = 0;
    while(j<S2->Count && !IsFull(*S3) ){
        if(!IsMember(*S3, S2->Elements[j])){
            Insert(S3, S2->Elements[j]);
        }
        j++;
    }
}

void Intersection(Set *S1, Set *S2, Set *S3){
    CreateEmpty(S3);
    int i = 0; 
    while(i<S1->Count && !IsFull(*S3)){
        if (IsMember(*S2, S1->Elements[i])){
            Insert(S3,S1->Elements[i]);
        }
    }
}

void Difference(Set *S1, Set *S2, Set *S3){
    CreateEmpty(S3);
    int i = 0;
    while(i<S1->Count && !IsFull(*S3)){
        if(!IsMember(*S2, S1->Elements[i])){
            Insert(S3, S1->Elements[i]);
        }
        i++;
    }   
}

void PrintSet(Set S){
    printf("{");
    int i = 0;
    while(i<S.Count){
        printf("%d", S.Elements[i]);
        if(i<S.Count-1){
            printf(",");
        }
        i++;
    }
    printf("}");
}

void CopySet(Set Sin, Set *Sout){
    CreateEmpty(Sout);
    int i = 0;
    while(i<Sin.Count && !IsFull(*Sout)){
        Insert(Sout, Sin.Elements[i]);
        i++;
    }
}

boolean IsSubset(Set S1, Set S2){
    int i = 0;
    while(i<S1.Count && IsMember(S2, S1.Elements[i])){
        i++;
    }
    return (i==S1.Count);
}

boolean IsEqual(Set S1, Set S2){
    return (IsSubset(S1,S2) && IsSubset(S2,S1));
}