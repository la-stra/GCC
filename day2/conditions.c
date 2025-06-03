#include <stdio.h>

int main() {
    int age;
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Âge invalide.\n");
    } else if (age < 18) {
        printf("Vous êtes mineur.\n");
    } else {
        printf("Vous êtes majeur.\n");
    }

    int note;
    printf("\nEntrez une note de 0 à 5 : ");
    scanf("%d", &note);

    switch (note) {
        case 0: case 1:
            printf("Très insuffisant\n"); break;
        case 2:
            printf("Insuffisant\n"); break;
        case 3:
            printf("Passable\n"); break;
        case 4:
            printf("Bien\n"); break;
        case 5:
            printf("Excellent\n"); break;
        default:
        printf("Note invalide\n"); break;
                                                                                             }

     return 0;
}
