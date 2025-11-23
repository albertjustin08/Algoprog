#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char S[100001];
        scanf("%s", S);
        int x = strlen(S);
        int distinctCharacters = 0;
        int haveSentMessage[30];
        

        for (int j = 0; j < 30; j++) {
            haveSentMessage[j] = 0;
        }
        
        for(int j = 0; j < x; j++) {
            if (haveSentMessage[S[j] - 'a'] == 0) {
                distinctCharacters++;
                haveSentMessage[S[j] - 'a'] = 1;
            }
        }

        if (distinctCharacters % 2 == 0) {
            printf("Case #%d: Yay\n", i + 1);
        } else {
            printf("Case #%d: Ewwww\n", i + 1);
        }
    }
    return 0;
}
