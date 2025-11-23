#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Plant {
    int number;
    char name[41];
};

int compare(const void *a, const void *b) {
    struct Plant *plantA = (struct Plant *)a;
    struct Plant *plantB = (struct Plant *)b;
    return strcmp(plantA->name, plantB->name);
}

int main() {
    struct Plant plants[1001];
    int N;

    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fscanf(file, "%d", &N);
    fgetc(file); 
    
    int i;
    for (i = 0; i < N; i++) {
        fscanf(file, "%d#%[^\n]\n", &plants[i].number, plants[i].name);
    }
    fclose(file);

    qsort(plants, N, sizeof(struct Plant), compare);

    for (i = 0; i < N; i++) {
        printf("%d %s\n", plants[i].number, plants[i].name);
    }

    return 0;
}
