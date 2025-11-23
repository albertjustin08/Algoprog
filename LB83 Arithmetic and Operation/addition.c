#include <stdio.h>

int main(){
    int a1, a2, a3, a4, a5, a6;
    int hasil1, hasil2, hasil3;

    scanf("%d + %d =", &a1, &a2);
    scanf("%d + %d =", &a3, &a4);
    scanf("%d + %d =", &a5, &a6);

    hasil1 = a1 + a2;
    hasil2 = a3 + a4;
    hasil3 = a5 + a6;

    printf("%d\n", hasil1);
    printf("%d\n", hasil2);
    printf("%d\n", hasil3);

    return 0;

}
