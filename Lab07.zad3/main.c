#include <stdio.h>

int pierwsza(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int A, B;

    printf("Podaj poczatkowa liczbe A: ");
    scanf("%d", &A);

    printf("Podaj koncowa liczbe B (B > A): ");
    scanf("%d", &B);

    if (B <= A) {
        printf("Blad: B musi byc wieksze od A.\n");
        return 1;
    }

    printf("Liczby pierwsze w zakresie od %d do %d:\n", A, B);

    int primeCount = 0;
    for (int i = A; i <= B; i++) {
        if (pierwsza(i)) {
            printf("%d ", i);
            primeCount++;
        }
    }

    printf("\nIlosc liczb pierwszych: %d\n", primeCount);

    return 0;
}
