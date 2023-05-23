#include <stdio.h>

int main() {
    // Déclaration des variables
    int choixJoueur;
    int pointsDeVie = 100;
    int attaque = 10;
    int defense = 5;
    char nomJoueur[20];
    char monstreRencontre[20] = "Dragon";
    char objetsTrouves[3][20] = {"Épée", "Potion", "Bouclier"};
    int i;

    // Demander le nom du joueur
    printf("Bienvenue dans le jeu !\n");
    printf("Quel est ton nom ? ");
    scanf("%s", nomJoueur);

    // Afficher les informations du joueur
    printf("Bienvenue, %s !\n", nomJoueur);
    printf("Points de vie : %d\n", pointsDeVie);
    printf("Attaque : %d\n", attaque);
    printf("Défense : %d\n", defense);

    // Boucle principale du jeu
    while (pointsDeVie > 0) {
        printf("\nQue veux-tu faire ?\n");
        printf("1. Attaquer\n");
        printf("2. Explorer\n");
        printf("3. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choixJoueur);

        // Condition pour attaquer
        if (choixJoueur == 1) {
            printf("Tu attaques le %s !\n", monstreRencontre);
            // Code pour gérer le combat entre le joueur et le monstre
            // ...
        }
        // Condition pour explorer
        else if (choixJoueur == 2) {
            printf("Tu explores les environs...\n");
            // Code pour gérer l'exploration
            // ...

            // Afficher les objets trouvés
            printf("Tu as trouvé les objets suivants :\n");
            for (i = 0; i < 3; i++) {
                printf("- %s\n", objetsTrouves[i]);
            }
        }
        // Condition pour quitter le jeu
        else if (choixJoueur == 3) {
            printf("Merci d'avoir joué ! Au revoir, %s.\n", nomJoueur);
            break;
        }
        // Condition pour un choix invalide
        else {
            printf("Choix invalide ! Veuillez sélectionner une option valide.\n");
        }
    }

    return 0;
}
