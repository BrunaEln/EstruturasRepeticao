#include <stdio.h>

main () {
    int n, i, fib, prev1 = 0, prev2 = 1;

    printf ("Digite um numero inteiro positivo: ");
    scanf ("%d", &n);

        for (i = 2; i <= n; i++) {
            fib = prev1 + prev2;
            prev1 = prev2;
            prev2 = fib;
        }
        printf ("O enesimo termo da sequencia de Fibonacci e %d. ", fib);
}