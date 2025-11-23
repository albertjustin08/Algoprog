#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char id[11];
    char name[21];
} Student;

int compare(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return strcmp(studentA->id, studentB->id);
}

int main() {
    FILE* file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    int N;
    fscanf(file, "%d", &N);

    Student* students = (Student*)malloc(N * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        fscanf(file, "%s %s", students[i].id, students[i].name);
    }

    fclose(file);

    qsort(students, N, sizeof(Student), compare);

    for (int i = 0; i < N; i++) {
        printf("%s %s\n", students[i].id, students[i].name);
    }

    free(students);

    return 0;
}
