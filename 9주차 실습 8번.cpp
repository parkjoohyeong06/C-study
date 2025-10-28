#include <stdio.h>

int fibonacci(int x) {
    if (x <= 1)
        return x;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}
