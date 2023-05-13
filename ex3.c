#include <stdio.h>
#include <math.h>

main () {
    int numero;

    printf ("Digite um numero: ");
    scanf ("%d", &numero);

    for (int i = 1; i <= 2*numero; i+=2) {
        printf ("%d, ", i);
    }
}