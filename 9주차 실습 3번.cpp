#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int d = 2; d*d <= n; d++) {
        if (n % d == 0) return 0;
    }
    return 1;
}

int main(void) {
    int a;
    scanf("%d", &a);

    for (int i = 2; i <= a; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
