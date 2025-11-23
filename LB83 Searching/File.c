#include <stdio.h>
#include <string.h>

void translateSentence(char sentence[], char dictionary[][51], int dictSize) {
	int i;
    char *word = strtok(sentence, " ");
    int firstWordPrinted = 0;

    while (word != NULL) {
        int found = 0;
        for (i = 0; i < dictSize; ++i) {
            char shortWord[51], originalWord[51];
            sscanf(dictionary[i], "%[^#]#%s", shortWord, originalWord);
            if (strcmp(word, shortWord) == 0) {
                if (firstWordPrinted) {
                    printf(" %s", originalWord);
                } else {
                    printf("%s", originalWord);
                    firstWordPrinted = 1;
                }
                found = 1;
                break;
            }
        }
        if (!found) {
            if (firstWordPrinted) {
                printf(" %s", word);
            } else {
                printf("%s", word);
                firstWordPrinted = 1;
            }
        }
        word = strtok(NULL, " ");
    }
    printf("\n");
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("File not found!");
        return 1;
    }

    int numData, i;
    fscanf(file, "%d", &numData);
    char dictionary[101][51];

    for (i = 0; i < numData; ++i) {
        fscanf(file, "%s", dictionary[i]);
    }

    int numTestCases;
    fscanf(file, "%d", &numTestCases);
    char testCases[501];

    for (i = 0; i < numTestCases; ++i) {
        fscanf(file, " %[^\n]", testCases);
        printf("Case #%d:\n", i + 1);
        translateSentence(testCases, dictionary, numData);
    }

    fclose(file);
    return 0;
}
