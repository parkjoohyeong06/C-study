#include <stdio.h>
#include <string.h>
#include <ctype.h> // isalpha(), isupper(), islower()

int main() {
    char str[201];
    int upper[26] = {0}; // 대문자 개수 저장
    int lower[26] = {0}; // 소문자 개수 저장

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // 개행 제거

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))       // 대문자면
            upper[str[i] - 'A']++;
        else if (islower(str[i]))  // 소문자면
            lower[str[i] - 'a']++;
    }

    printf("<전체 알파벳의 개수>\n");

    for (int i = 0; i < 26; i++) {
        if (upper[i] > 0)
            printf("%c : %d\n", 'A' + i, upper[i]);
    }
    for (int i = 0; i < 26; i++) {
        if (lower[i] > 0)
            printf("%c : %d\n", 'a' + i, lower[i]);
    }

    return 0;
}

