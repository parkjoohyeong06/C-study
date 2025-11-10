#include <stdio.h>
#include <stdlib.h>   // calloc, free

int main(void) {
    int n;
    char *str;

    scanf("%d", &n);                 // 몇 글자인지 입력

    // n글자 + 문자열 끝나는 표시('\0') 자리까지 0으로 초기화해서 확보
    str = (char *)calloc(n + 1, sizeof(char));

    // 이제 문자 n개를 하나씩 입력
    for (int i = 0; i < n; i++) {
        scanf(" %c", &str[i]);       // 앞에 공백 넣어서 개행/공백 무시
    }

    printf("%s", str);               // 입력한 문자열 그대로 출력

    free(str);                       // 사용 끝났으면 해제
    return 0;
}
