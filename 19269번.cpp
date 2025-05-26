#include <stdio.h>
#include <string.h>

char s[10];
int N;

int query(int i) {
    printf("%d\n", i);
    fflush(stdout);
    scanf("%s", s);
    return strcmp(s, "Vacant") == 0;
}

int main() {
    scanf("%d", &N);
    int l = 0, r = N;

    if (query(l)) return 0;
    char base[10];
    strcpy(base, s);

    for (int t = 0; t < 19; t++) {
        int m = (l + r) / 2;
        if (query(m)) return 0;

        int dist = m - l;
        int same = strcmp(base, s) == 0;

        if ((dist % 2 == 0 && same) || (dist % 2 == 1 && !same)) {
            l = m;
            strcpy(base, s);
        } else {
            r = m;
        }
    }

    return 0;
}
