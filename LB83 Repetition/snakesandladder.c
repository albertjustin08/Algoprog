#include <stdio.h>

int main(){
    int N, k;
    int posisi = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &k);
        posisi += k;

        if(posisi == 9){
            posisi = 21;
        }
        else if(posisi == 33){
            posisi = 42;
        }
        else if(posisi == 76){
            posisi = 92;
        }
        else if(posisi == 53){
            posisi = 37;
        }
        else if(posisi == 80){
            posisi = 59;
        }
        else if(posisi == 97){
            posisi = 88;
        }
    }
    printf("%d\n", posisi);
    return 0;
}