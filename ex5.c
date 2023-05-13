#include <stdio.h>

main () {
    int i, soma = 0;

    for (i = 2; i <= 100; i +=2) {
        soma += i;
        if (i/2 == 50) {
            break;
        }
    }
    printf ("A soma dos 50 primeiros numeros pares e: %d\n", soma);
}