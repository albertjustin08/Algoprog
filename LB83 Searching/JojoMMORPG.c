#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long int bossPower[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &bossPower[i]);
    }

    long long int JojoPower;
    scanf("%lld", &JojoPower);

    int missionsCompleted = 0;
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (bossPower[j] > bossPower[j + 1]) {
                long long int temp = bossPower[j];
                bossPower[j] = bossPower[j + 1];
                bossPower[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (JojoPower >= bossPower[i]) {
            JojoPower -= bossPower[i];
            missionsCompleted++;
        } else {
            break; 
        }
    }

    printf("%d\n", missionsCompleted);

    return 0;
}
