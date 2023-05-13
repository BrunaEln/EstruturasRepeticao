#include <stdio.h>

int main (){
    char sexo, corOlhos, corCabelos;
    int idade;
    float salario, contFem = 0, contCast = 0, contTotal = 0;

    while (1) {
        printf ("Sexo (m/f): ");
        scanf ("%c", &sexo);
        fflush (stdin);

        if (sexo == 'm' || sexo == 'f') {
            printf ("Cor dos olhos (a/v/c/p): ");
            scanf ("%c", &corOlhos);
            fflush (stdin);

            if (corOlhos == 'a' || corOlhos == 'v' || corOlhos == 'c' || corOlhos == 'p') {
                printf ("Cor dos cabelos (l/c/p/r): ");
                scanf ("%c", &corCabelos);
                fflush (stdin);

                if (corCabelos == 'l' || corCabelos == 'c' || corCabelos == 'p' || corCabelos == 'r') {
                    printf ("Idade (entre 10 e 100 anos): ");
                    scanf ("%d", &idade);
                    fflush (stdin);

                    if (idade >= 10 && idade <= 100) {
                        printf ("Salario (em reais): ");
                        scanf ("%f", &salario);
                        fflush (stdin);

                        if (salario >= 0) {
                            if (sexo == 'f' && idade >= 18 && idade <= 35 && corOlhos == 'c' && corCabelos == 'c') {
                                contCast++;
                            }
                            if (sexo == 'f') {
                                contFem++;
                            }
                            contTotal++;
                        }
                         fflush (stdin);
                    }
                }
            }
            if (idade == -1) {
                break;
            }
        }
        contCast = contFem / (contTotal * 100);
    }
    printf ("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos e cabelos castanhos: %.2f\b", contCast);
}