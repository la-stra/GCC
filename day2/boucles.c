#include <stdio.h>

int main() {
    printf("Boucle for :\n");
    for (int i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }

    printf("\nBoucle while :\n");
    int j = 1;
    while (j <= 5) {
        printf("j = %d\n", j);
        j++;
    }

    printf("\nBoucle do...while :\n");
    int k = 1;
    do {
        printf("k = %d\n", k);
        k++;
    } while (k <= 5);

    return 0;
}
