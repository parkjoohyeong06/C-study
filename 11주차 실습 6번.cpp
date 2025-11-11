#include <stdio.h>

char* my_strchr(char *str, char ch) {
    while (*str != '\0') {   // 문자열 끝까지 반복
        if (*str == ch)      // 문자가 일치하면
            return str;      // 그 위치의 주소 반환
        str++;               // 다음 문자로 이동
    }
    return NULL;             // 못 찾으면 NULL 반환
}

int main() {
    char str[81];
    char ch;
    char *p;

    // 문자열 입력
    fgets(str, sizeof(str), stdin);
    // 문자 입력
    scanf("%c", &ch);

    // 첫 번째 문자 위치 찾기
    p = my_strchr(str, ch);

    // 반복적으로 다음 문자 찾기
    while (p != NULL) {
        printf("%c ", *p);
        p = my_strchr(p + 1, ch); // 다음 위치부터 다시 검색
    }

    return 0;
}

