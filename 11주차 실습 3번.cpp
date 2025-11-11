#include <stdio.h>
#include <string.h>
#include <ctype.h> // 대소문자 변환 함수용

int main() {
    char str[81];
    int count[26] = {0}; // 알파벳 개수 저장용 배열 (A~Z)
    
    // 문자열 입력
    fgets(str, sizeof(str), stdin);

    // 한 글자씩 검사
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { // 알파벳이면
            char c = toupper(str[i]); // 대문자로 통일
            count[c - 'A']++; // 해당 알파벳 개수 증가
        }
    }

    // 알파벳이 등장한 것만 출력
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0)
            printf("%c : %d\n", 'A' + i, count[i]);
    }

    return 0;
}

