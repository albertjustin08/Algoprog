#include <stdio.h>

int main(){
    char num[4];
    char num2[4];
    char num3[4];

    scanf("%s", num);
    getchar();
    scanf("%s", num2);
    getchar();
    scanf("%s", num3);
    getchar();

    printf("%c\n", num[1]);
    printf("%c\n", num2[1]);
    printf("%c\n", num3[1]);

    return 0;
}