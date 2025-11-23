#include <stdio.h>
#include <string.h>

int main(){
    int n = 0;
    FILE *ptr;
    char ch[1100];
    int size = 0, sizes = 0, shift;
    ptr = fopen("testdata.in", "r");

    fscanf(ptr, "%d\n", &n);

    
    while (size < n)
    {
        fscanf(ptr, "%d\n", &shift);
        fscanf(ptr, "%[^\n]\n", ch);
        size++;
        printf("Case #%d: ",size);
        for(int i=0;i<strlen(ch);i++){
            char def=ch[i];
            switch(def){
                case '0':def='O';def-=shift;break;
                case '1':def='I';def-=shift;break;
                // case '2':def='E';break;
                case '3':def='E';def-=shift;break;
                case '4':def='A';def-=shift;break;
                case '5':def='S';def-=shift;break;
                case '6':def='G';def-=shift;break;
                case '7':def='T';def-=shift;break;
                case '8':def='B';def-=shift;break;
                case ' ':break;
                // case '9':def='O';break;
                default:
                    def-=shift;

            }
            if(def<'A' && def!=' ')def='Z'-('A'-def)+1;
            printf("%c",def);
        }
        puts("");
    }

}