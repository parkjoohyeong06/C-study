#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;          // 행, 열
    int **arr = NULL;  // 2차원 배열 포인터
    int i, j;
    int sum = 0, avg;

    // 1. 행과 열 입력
    scanf("%d %d", &n, &m);

    // 2. 행 개수만큼 'int *'를 담을 배열을 동적 할당
    arr = (int **)malloc(sizeof(int *) * n);
    if (arr == NULL) return -1;

    // 3. 각 행마다 열 개수만큼 int 공간을 동적 할당
    for (i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int) * m);
        if (arr[i] == NULL) return -1;
    }

    // 4. n x m 만큼 값 입력받으면서 합도 같이 구함
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    // 5. 평균 (문제에서 정수 연산으로 하라고 했으니까 int로)
    avg = sum / (n * m);

    // 출력 전에 한 줄 비움 (문제 힌트에 있던 부분)
    printf("\n");

    // 6. 평균보다 작으면 0으로 바꿔서 출력, 크거나 같으면 그대로 출력
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr[i][j] < avg)
                printf("0 ");
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 7. 동적 메모리 해제
    for (i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
