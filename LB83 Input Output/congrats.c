#include <stdio.h>

int main(){
    char nama[99];
    scanf("%[^\n]",nama);
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n",nama);   
    return 0;
}