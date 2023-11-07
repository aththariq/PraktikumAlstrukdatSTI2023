#include <stdio.h>
#include "hashmap.h"

int main() {
    HashMap M;
    CreateEmpty(&M);

    // Insert key-value pairs
    Insert(&M, 1, 10);
    Insert(&M, 2, 20);
    Insert(&M, 3, 30);

    // Print the elements
    printf("Elements in the HashMap:\n");
    PrintHashMap(M);

    // Testing the Value function
    keytype keyToFind = 2;
    valuetype value = Value(M, keyToFind);
    if (value != Undefined) {
        printf("Value for key %d is: %d\n", keyToFind, value);
    } else {
        printf("Key not found\n");
    }

    // Testing the Delete function
    keytype keyToDelete = 3;
    Delete(&M, keyToDelete);

    // Print the elements after deletion
    printf("Elements in the HashMap after deletion:\n");
    PrintHashMap(M);

    // Insert additional key-value pairs
    Insert(&M, 4, 40);
    Insert(&M, 5, 50);

    // Print the elements after insertion
    printf("Elements in the HashMap after insertion:\n");
    PrintHashMap(M);

    return 0;
}
