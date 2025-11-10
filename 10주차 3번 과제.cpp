#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;         // 과목 개수
    int *n;        // 점수를 저장할 포인터
    int sum = 0;

    scanf("%d", &a);   // 과목 개수 입력

    // a개의 int 공간을 0으로 초기화하여 동적 할당
    n = (int *)calloc(a, sizeof(int));

    // 점수 입력받기
    for (int i = 0; i < a; i++) {
        scanf("%d", &n[i]);
        sum += n[i];
    }

    // 평균 계산 (float형으로)
    printf("%.2f", (double)sum / a);

    free(n);  // 사용 끝났으면 메모리 해제
    return 0;
}
