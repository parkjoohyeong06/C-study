#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int T[20], P[20], dp[21];  // N 최대 15니까 여유롭게 21칸

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &T[i], &P[i]);
    }

    for (int i = N - 1; i >= 0; i--) {
        if (i + T[i] > N) {
            dp[i] = dp[i + 1];  // 상담 못 함
        } else {
            dp[i] = max(dp[i + 1], P[i] + dp[i + T[i]]);
        }
    }

    printf("%d\n", dp[0]);
    return 0;
}
