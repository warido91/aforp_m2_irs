#include <stdio.h>
#include <stdlib.h>

// Structure représentant un ordinateur
typedef struct {
    char marque[20];
    int stock;
    float prix;
} Ordinateur;

// Fonction pour ajouter un nouvel ordinateur
void ajouterOrdinateur(Ordinateur *ordinateurs, int *nombreOrdinateurs) {
    if (*nombreOrdinateurs < 20) {
        printf("Nouvel ordinateur\n");
        printf("Marque : ");
        scanf("%s", ordinateurs[*nombreOrdinateurs].marque);
        printf("Stock : ");
        scanf("%d", &ordinateurs[*nombreOrdinateurs].stock);
        printf("Prix (en euros) : ");
        scanf("%f", &ordinateurs[*nombreOrdinateurs].prix);

        (*nombreOrdinateurs)++;
    } else {
        printf("Impossible d'ajouter un nouvel ordinateur. Le nombre maximum a été atteint.\n");
    }
}

// Fonction pour afficher les détails d'un ordinateur
void afficherDetailsOrdinateur(Ordinateur *ordinateurs, int nombreOrdinateurs) {
    if (nombreOrdinateurs > 0) {
        int index;
        printf("Indice de l'ordinateur à afficher (entre 1 et %d) : ", nombreOrdinateurs);
        scanf("%d", &index);

        if (index >= 1 && index <= nombreOrdinateurs) {
            printf("Détails de l'ordinateur\n");
            printf("Marque : %s\n", ordinateurs[index - 1].marque);
            printf("Stock : %d\n", ordinateurs[index - 1].stock);
            printf("Prix : %.2f\n", ordinateurs[index - 1].prix);
        } else {
            printf("Indice invalide.\n");
        }
    } else {
        printf("Aucun ordinateur enregistré.\n");
    }
}

// Fonction pour mettre à jour les stocks d'un ordinateur
void mettreAJourStock(Ordinateur *ordinateurs, int nombreOrdinateurs) {
    if (nombreOrdinateurs > 0) {
        int index;
        printf("Indice de l'ordinateur à mettre à jour (entre 1 et %d) : ", nombreOrdinateurs);
        scanf("%d", &index);

        if (index >= 1 && index <= nombreOrdinateurs) {
            int nouveauStock;
            printf("Nouveau stock : ");
            scanf("%d", &nouveauStock);

            ordinateurs[index - 1].stock = nouveauStock;
            printf("Stock mis à jour avec succès.\n");
        } else {
            printf("Indice invalide.\n");
        }
    } else {
        printf("Aucun ordinateur enregistré.\n");
    }
}

int main() {
    Ordinateur ordinateurs[20];
    int nombreOrdinateurs = 0;
    int choix;

    do {
        printf("\n---- Menu ----\n");
        printf("1. Ajouter un nouvel ordinateur\n");
        printf("2. Afficher les détails d'un ordinateur\n");
        printf("3. Mettre à jour les stocks d'un ordinateur\n");
        printf("4. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterOrdinateur(ordinateurs, &nombreOrdinateurs);
                break;
            case 2:
                afficherDetailsOrdinateur(ordinateurs, nombreOrdinateurs);
                break;
            case 3:
                mettreAJourStock(ordinateurs, nombreOrdinateurs);
                break;
            case 4:
                printf("Au revoir.\n");
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    } while (choix != 4);

    return 0;
}
