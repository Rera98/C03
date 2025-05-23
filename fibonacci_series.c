 #include <stdio.h>

int main() {
    int n;
    int a = 0, b = 1, suivant;

    // Lecture de la valeur limite
 
    scanf("%d", &n);

    // Affichage de la série de Fibonacci
    printf("Fibonacci : ");

    // Affiche les termes tant qu'ils ne dépassent pas la limite
    while (a <= n) {
        printf("%d ", a);
        suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n");
    return 0;
}