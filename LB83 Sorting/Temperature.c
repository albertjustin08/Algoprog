#include <stdio.h>
#include <string.h>

struct CityTemperature {
    char name[1000];
    double temperature;
    char metric;
};

void convertToFahrenheit(struct CityTemperature *city) {
    if (city->metric == 'C') {
        city->temperature = (city->temperature * 9 / 5) + 32;
        city->metric = 'F';
    }
}

void sortCities(struct CityTemperature cities[], int n) {
    int i, j;
    struct CityTemperature temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (cities[j].temperature > cities[j + 1].temperature ||
                (cities[j].temperature == cities[j + 1].temperature &&
                 strcmp(cities[j].name, cities[j + 1].name) > 0)) {
                temp = cities[j];
                cities[j] = cities[j + 1];
                cities[j + 1] = temp;
            }
        }
    }
}


int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    struct CityTemperature cities[101];
    struct CityTemperature originalOrder[101]; 
    int n = 0;

    while (!feof(file) && n < 101) {
        fscanf(file, "%[^#]#%lf#%c\n", cities[n].name, &cities[n].temperature, &cities[n].metric);
        originalOrder[n] = cities[n]; 
        convertToFahrenheit(&cities[n]);
        n++;
    }
    
    fclose(file);

    sortCities(cities, n);
    int i, j;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (strcmp(originalOrder[j].name, cities[i].name) == 0) {
                printf("%s is %.2lf%c\n", originalOrder[j].name, originalOrder[j].temperature, originalOrder[j].metric);
                break;
            }
        }
    }

    return 0;
}
