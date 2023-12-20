#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main() {
    int32_t m, n;

    do {
        printf("Podaj m (m >= -5): ");
        scanf("%d", &m);
    } while (m < -5);

    do {
        printf("Podaj n (n > m, n <= 20): ");
        scanf("%d", &n);
    } while (n <= m || n > 20);

    for (int32_t i = m; i <= n; i++) {
        double result = pow(2, i);
        printf("2^%d = %.4lf\n", i, result);
    }

    return 0;
}