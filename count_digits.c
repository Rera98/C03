#include <stdio.h>

int main() {
    // Déclaration des variables
    int nombre;
    int compt = 0;
    int original;

    // Lecture de l'entier
  
    scanf("%d", &nombre);

    original = nombre; // Sauvegarde pour l'affichage final

    // Gère le cas où l'utilisateur entre 0
    if (nombre == 0) {
        compt = 1;
    } else {
        // Boucle pour compter les chiffres
        while (nombre != 0) {
            nombre = nombre / 10; // Supprime le dernier chiffre
            compt++;
        }
    }

    // Affichage du résultat
    printf("%d contient %d chiffre(s).\n", original, compt);

    return 0;
}