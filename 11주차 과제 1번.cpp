#include <stdio.h>
#include <string.h>

int main() {
    char str[51];
    char find;
    int index = -1;

    // 문자열 입력
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // 개행문자 제거

    // 찾을 문자 입력
    scanf("%c", &find);

    // 문자열 탐색
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == find) {
            index = i;
            break; // 첫 번째 위치만 출력하려면 break 사용
        }
    }

    if (index != -1)
        printf("문자 %c의 인덱스 위치는 %d입니다.\n", find, index);
    else
        printf("문자 %c는 문자열에 존재하지 않습니다.\n", find);

    return 0;
}

