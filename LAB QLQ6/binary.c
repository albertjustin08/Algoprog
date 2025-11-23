#include <stdio.h>

int main() {
    int batas;
    scanf("%d", &batas);
    long int decimal_number;
    long int binary_digits[10000]; 

    for(int i = 0; i < batas; i++){
        scanf("%ld", &decimal_number);
        printf("Case #%d: ", i+1);

        int index = 0;
        while (decimal_number > 0){
            binary_digits[index] = decimal_number % 2;
            decimal_number = decimal_number / 2;
            index++;
        }

        for (int j = index - 1; j >= 0; j--){
            printf("%ld", binary_digits[j]);
        }

    printf("\n");
    }
    return 0;
}
