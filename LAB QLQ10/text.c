#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
        default:
            return 0;
    }
}

void removeVowels(char *text) {
    int i, j;
    for (i = 0, j = 0; text[i] != '\0'; i++) {
        if (!isVowel(text[i])) {
            text[j] = text[i];
            j++;
        }
    }
    text[j] = '\0';
}

int main() {
    int T;
    scanf("%d", &T);
    getchar(); 

    for (int i = 1; i <= T; i++) {
        char text[1001];
        scanf("%[^\n]", text);
        getchar();
        removeVowels(text);

        printf("Case #%d: %s\n", i, text);
    }
    return 0;
}
