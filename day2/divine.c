#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, essai, compteur, maxEssais = 10;
    char rejouer;

    do {
        srand(time(NULL));               // Initialiser le générateur aléatoire
        secret = rand() % 100 + 1;       // Nombre entre 1 et 100
        compteur = 0;

        printf("🎯 Bienvenue dans *Devine le nombre !*\n");
        printf("Je pense à un nombre entre 1 et 100. Tu as %d tentatives !\n", maxEssais);

        while (1) {
        printf("\n🔢 Entrez un nombre : ");
        scanf("%d", &essai);
        compteur++;

        if (essai < secret) {
            printf("📉 Trop petit !");
        } else if (essai > secret) {
            printf("📈 Trop grand !");
        } else {
            printf("🎉 Bravo ! Tu as trouvé le nombre en %d essai%s !\n", compteur, compteur > 1 ? "s" : "");
            break;
        }

                                                                                                if (compteur >= maxEssais) {
            printf("\n💥 Perdu ! Le nombre était %d.\n", secret);
            break;
        }                              
     }

     printf("\n🔁 Veux-tu rejouer ? (y/n) : ");
     scanf(" %c", &rejouer);  // attention à l'espace avant %c

  } while (rejouer == 'y' || rejouer == 'Y');

  printf("👋 Merci d’avoir joué, à bientôt !\n");
  return 0;
}
