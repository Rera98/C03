#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Lecture de la température en Celsius
   
    scanf("%f", &celsius);

    // Calcul de la température en Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;  // Formule de la conversion 

    // Affichage du résultat
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;
}