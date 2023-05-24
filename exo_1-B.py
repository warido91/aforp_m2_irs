# Import de la bibliothèque
import random

# Déclaration des variables
pointsDeVie = 100
attaque = 10
defense = 5
nomJoueur = ""
monstreRencontre = "Dragon"
objetsTrouves = ["Épée", "Potion", "Bouclier"]
lieux = ["Lac","Forêt","Aforp"]

# Demander le nom du joueur
print("Bienvenue dans le jeu !")
nomJoueur = input("Quel est ton nom ?\n")

# Afficher les informations du joueur
print("Bienvenue,", nomJoueur, "!")
print("Points de vie :", pointsDeVie)
print("Attaque :", attaque)
print("Défense :", defense)

# Boucle principale du jeu
while pointsDeVie > 0:
    print("\nQue veux-tu faire ?")
    print("1. Attaquer")
    print("2. Explorer")
    print("3. Quitter")
    choixJoueur = int(input("Choix : "))

    # Condition pour attaquer
    if choixJoueur == 1:
        print("Tu attaques le", monstreRencontre, "!")
        nombreAleatoire = random.randint(1, 100)
        print("Tu as reçu", nombreAleatoire, "de dégâts")

        # Mise à jour des points de vie
        pointsDeVie -= nombreAleatoire
        if pointsDeVie < 0:
            pointsDeVie = 0

        print("Il te reste", pointsDeVie, "points de vie")

    # Condition pour explorer
    elif choixJoueur == 2:
        print("Tu explores les environs...")    
        # Sélection aléatoire d'un lieu
        index_lieu = random.randint(0, len(lieux) - 1)
        # Affichage du lieu sélectionné
        print("Tu explores le lieu :", lieux[index_lieu])
        # Afficher les objets trouvés
        print("Tu as trouvé les objets suivants :")
        for objet in objetsTrouves:
            print("-", objet)

    # Condition pour quitter le jeu
    elif choixJoueur == 3:
        print("Merci d'avoir joué ! Au revoir,", nomJoueur, ".")
        break

    # Condition pour un choix invalide
    else:
        print("Choix invalide ! Veuillez sélectionner une option valide.")
print("Tu as perdu...")
