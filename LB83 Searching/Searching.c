#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("C:\\Users\\alber\\OneDrive - Bina Nusantara\\vscoding\\LB83 Searching\\testdata.in", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int n;
    fscanf(fp, "%d", &n);

    char nim[n][21];
    char name[n][101];

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %s", nim[i], name[i]);
    }

    int x;
    fscanf(fp, "%d", &x);

    char nim_x[x][21];

    for (int i = 0; i < x; i++) {
        fscanf(fp, "%s", nim_x[i]);
        printf("Case #%d: ", i + 1);

        int found = 0; 

        for (int j = 0; j < n; j++) {
            if (strcmp(nim_x[i], nim[j]) == 0) {
                printf("%s", name[j]);
                found = 1;
                break; 
            }
        }
        
        if (!found) {
            printf("N/A");
        }
        printf("\n");
    }
    fclose(fp);
    return 0;
}