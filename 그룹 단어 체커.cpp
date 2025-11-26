#include <stdio.h>

int inspect(char n[100]) {
    int visited[26] = {0};  // 각 알파벳 등장 여부
    char prev = n[0];       // 이전 문자
    visited[prev - 'a'] = 1;

    for (int i = 1; n[i] != '\0'; i++) {
        if (n[i] != prev) {  // 문자가 바뀔 때만 검사
            if (visited[n[i] - 'a'] == 1) {
                // 예전에 등장한 문자면 그룹 단어 아님
                return 0;
            }
            visited[n[i] - 'a'] = 1; // 새 문자 등장 체크
            prev = n[i];             // 이전 문자 업데이트
        }
    }
    return 1;  // 끝까지 문제 없으면 그룹 단어
}

int main() {
    int rot;
    char n[100];
    int result = 0;

    scanf("%d", &rot);

    for (int i = 0; i < rot; i++) {
        scanf("%s", n);         // 문자열 전체 입력
        result += inspect(n);   // 그룹 단어면 1, 아니면 0
    }

    printf("%d", result);        // 그룹 단어 수 출력
    return 0;
}

