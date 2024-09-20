#include<stdio.h>

int main() {

    int ora1, ora2, minuti1, minuti2, secondi1, secondi2, differenza;

    printf("Calcola la differenza in secondi tra due orari:\n");
    printf("Inserire l'ora del primo orario: ");
    scanf("%d", &ora1);
    printf("Inserire i minuti del primo orario: ");
    scanf("%d", &minuti1);
    printf("Inserire i secondi del primo orario: ");
    scanf("%d", &secondi1);
    printf("Inserire l'ora del secondo orario: ");
    scanf("%d", &ora2);
    printf("Inserire i minuti del secondo orario: ");
    scanf("%d", &minuti2);
    printf("Inserire i secondi del secondo orario: ");
    scanf("%d", &secondi2);

    int totale1 = ora1 * 3600 + minuti1 * 60 + secondi1;
    int totale2 = ora2 * 3600 + minuti2 * 60 + secondi2;
    differenza = totale2 - totale1;

    printf("La differenza in secondi tra i due orari è: %d\n", differenza);

    return 0;
}
