#include <stdio.h>

int main() {
    int valeurs[] = {5, 8, 12, 3, 7};
    int somme = 0;
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        printf("valeurs[%d] = %d\n", i, valeurs[i]);
        somme += valeurs[i];
    }

    float moyenne = (float)somme / taille;
    printf("Moyenne : %.2f\n", moyenne);
    return 0;
}

