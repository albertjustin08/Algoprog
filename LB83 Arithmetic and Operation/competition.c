#include <stdio.h>

int main(){
    int X, X2, X3, x4;
    int Y, Y2, Y3, Y4;

    scanf("%d %d", &X, &Y);
    scanf("%d %d", &X2, &Y2);
    scanf("%d %d", &X3, &Y3);
    scanf("%d %d", &x4, &Y4);

    printf("%d\n", X*Y);
    printf("%d\n", X2*Y2);
    printf("%d\n", X3*Y3);
    printf("%d\n", x4*Y4);

    return 0;
}