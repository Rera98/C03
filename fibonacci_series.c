 #include <stdio.h>

int main() {
 
 // Déclaration des variable
            int n, a = 0, b = 1, suivant, i;

            // On demande à l'utilisateure d'entrer le nombre de termes
           
            scanf("%d", &n);

            // Affichage des termes de la série de Fibonacci
            printf("Fibonacci : ");
                
            for (i = 0; i < n; i++)
            {
                if (i <= 1)
                suivant = i;
                else
                {
                suivant = a + b;
                a = b;
                b = suivant;
                }
                printf("%d ", suivant);
                }
        }