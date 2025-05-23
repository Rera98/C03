#include <stdio.h>

int main() {
    int nombre, reste, inverse = 0;

    // Lecture de l'entier
   
    scanf("%d", &nombre);

    // Sauvegarde du nombre original si nécessaire
    int original = nombre;

    // Inversion du nombre
    while (nombre != 0) {
        reste = nombre % 10;            // Extrait le dernier chiffre
        inverse = inverse * 10 + reste; // Ajoute le chiffre à l'inverse
        nombre = nombre / 10;           // Supprime le dernier chiffre
    }

    // Affichage du résultat
    printf("Nombre inversé : %d\n", inverse);

    return 0;
}