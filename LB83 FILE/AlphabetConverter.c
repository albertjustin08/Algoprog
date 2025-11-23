#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");

    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1;
    }

    int t;
    fscanf(file, "%d", &t);

    for (int i = 0; i < t; i++) {
        char s[120];
        int n;
        fscanf(file, "%s %d", s, &n);

        int changed[26] = {0};
        int count[26] = {0};

        while (n--) {
            char x, y;
            fscanf(file, " %c %c\n", &x, &y);

            if (changed[x - 'A']) continue;
            changed[x - 'A'] = 1;

            for (int i = 0; i < strlen(s); i++) {
                if (s[i] == x) {
                    s[i] = y;
                }
            }
        }

        for (int i = 0; i < strlen(s); i++) {
            count[s[i] - 'A'] += 1;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] > 0) {
                printf("%c %d\n", 'A' + i, count[i]);
            }
        }
    }

    fclose(file);

    return 0;
}



