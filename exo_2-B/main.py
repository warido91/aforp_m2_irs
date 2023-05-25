# Déclaration de la classe Ordinateur
class Ordinateur:
    def __init__(self, marque, stock, prix):
        self.marque = marque
        self.stock = stock
        self.prix = prix

# Fonction pour ajouter un nouvel ordinateur
def ajouter_ordinateur(ordinateurs):
    if len(ordinateurs) < 20:
        print("Nouvel ordinateur")
        marque = input("Marque : ")
        stock = int(input("Stock : "))
        prix = float(input("Prix (en euros) : "))

        ordinateur = Ordinateur(marque, stock, prix) # Créer l'objet ordinateur avec les valeurs saisies
        ordinateurs.append(ordinateur)
        print("Ordinateur ajouté avec succès.")
    else:
        print("Impossible d'ajouter un nouvel ordinateur. Le nombre maximum a été atteint.")

# Fonction pour afficher les détails d'un ordinateur
def afficher_details_ordinateur(ordinateurs):
    if len(ordinateurs) > 0:
        index = int(input("Indice de l'ordinateur à afficher (entre 1 et {}) : ".format(len(ordinateurs))))
        if 1 <= index <= len(ordinateurs):
            ordinateur = ordinateurs[index - 1]
            print("Détails de l'ordinateur")
            print("Marque :", ordinateur.marque)
            print("Stock :", ordinateur.stock)
            print("Prix :", ordinateur.prix)
        else:
            print("Indice invalide.")
    else:
        print("Aucun ordinateur enregistré.")

# Fonction pour mettre à jour les stocks d'un ordinateur
def mettre_a_jour_stock(ordinateurs):
    if len(ordinateurs) > 0:
        index = int(input("Indice de l'ordinateur à mettre à jour (entre 1 et {}) : ".format(len(ordinateurs))))
        if 1 <= index <= len(ordinateurs):
            nouveau_stock = int(input("Nouveau stock : "))
            ordinateurs[index - 1].stock = nouveau_stock
            print("Stock mis à jour avec succès.")
        else:
            print("Indice invalide.")
    else:
        print("Aucun ordinateur enregistré.")

# Fonction principale
def main():
    ordinateurs = []
    choix = 0

    while choix != 4:
        print("\n---- Menu ----")
        print("1. Ajouter un nouvel ordinateur")
        print("2. Afficher les détails d'un ordinateur")
        print("3. Mettre à jour les stocks d'un ordinateur")
        print("4. Quitter")
        choix = int(input("Choix : "))

        if choix == 1:
            ajouter_ordinateur(ordinateurs)
        elif choix == 2:
            afficher_details_ordinateur(ordinateurs)
        elif choix == 3:
            mettre_a_jour_stock(ordinateurs)
        elif choix == 4:
            print("Au revoir.")
        else:
            print("Choix invalide.")

# Execution du module main
if __name__ == "__main__":
    main()