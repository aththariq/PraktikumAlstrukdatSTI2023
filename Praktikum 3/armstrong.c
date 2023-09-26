#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int hitungdigit (int n) {
    int digit = 0;
    while (n > 0) {
        n = n / 10;
        digit++;
    }
    return digit;
}

bool armstrong (int n) {
    int digit = hitungdigit(n);
    int temp = n;
    int sum = 0;
    while (temp > 0) {
        int digittemp = temp % 10;
        sum = sum + pow(digittemp, digit);
        temp = temp / 10;
    }
    if (sum == n) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int n;
    scanf("%d", &n);
    if (armstrong(n)) {
        printf("Armstrong\n");
    } else {
        printf("Bukan Armstrong\n");
    }
    return 0;
}