#include <stdio.h>
#include "map.h"

int main() {
    Map M;
    CreateEmpty(&M);
    
    // Insert key-value pairs
    Insert(&M, 1, 10);
    Insert(&M, 2, 20);
    Insert(&M, 3, 30);

    // Print the elements
    printf("Elements in the map:\n");
    PrintMap(M);

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
    printf("Elements in the map after deletion:\n");
    PrintMap(M);

    // Testing the IsMember function
    keytype keyToCheck = 1;
    if (IsMember(M, keyToCheck)) {
        printf("Key %d is a member of the map.\n", keyToCheck);
    } else {
        printf("Key %d is not a member of the map.\n", keyToCheck);
    }

    // Testing the find function
    valuetype valueToFind = 20;
    keytype keyFound;
    find(M, valueToFind, &keyFound);
    if (keyFound != Undefined) {
        printf("Key for value %d is: %d\n", valueToFind, keyFound);
    } else {
        printf("Value not found\n");
    }

    return 0;
}
