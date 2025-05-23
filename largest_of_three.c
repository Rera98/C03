#include <stdio.h>

int main() {
    int a, b, c, max;  // Déclaration des variables

    // Lecture de trois entiers
   
    scanf("%d %d %d", &a, &b, &c);

    // Utilisation de conditions multiples pour trouver le plus grand
    if (a >= b && a >= c) {   // Comparaison de a avec b et c
        max = a;
    } else if (b >= a && b >= c) {  // Comparaison de b avec a et c
        max = b;
    } else {
        max = c;
    }

    // Affichage du plus grand
    printf("Le plus grand nombre est : %d\n", max);

    return 0;
}