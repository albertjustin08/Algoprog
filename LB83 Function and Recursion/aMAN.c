#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
    if (left >= right) {
        return 1; 
    }
    if (str[left] != str[right]) {
        return 0; 
    }
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    int T, i;
    scanf("%d", &T);
    for (i = 1; i <= T; ++i) {
        char str[1001];
        scanf("%s", str);
        int len = strlen(str);
        int result = isPalindrome(str, 0, len - 1);
        printf("Case #%d: %s\n", i, (result == 1) ? "yes" : "no");
    }
    return 0;
}
