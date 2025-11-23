#include <stdio.h>
#include <string.h>

void printReverse(char *str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        char word[1000];
        scanf(" %[^\n]", word);
        printf("Case #%d: ", i+1);
        printReverse(word);
        printf("\n");
    }
    return 0;
}
