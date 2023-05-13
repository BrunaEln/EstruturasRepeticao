#include <stdio.h>

main () {
    int opcao, quantidade;
    float total;

    do {
        printf ("[1] ABACAXI --> R$5,00\n[2] MACA --> R$1,00\n[3] PERA --> R$4,00\n[0] ENCERRAR COMPRA\n");
        printf ("Escolha uma opcao: ");
        scanf ("%d", &opcao);

        switch (opcao) {
            case 1:
                printf ("Quantos abacaxis deseja comprar? ");
                scanf ("%d", &quantidade);
                total = quantidade * 5.0;
                break;
            case 2:
                printf ("Quantos abacaxis deseja comprar? ");
                scanf ("%d", &quantidade);
                total = quantidade * 1.0;
                break;
            case 3:
                printf ("Quantos abacaxis deseja comprar? ");
                scanf ("%d", &quantidade);
                total = quantidade * 4.0;
                break;
            case 0:
                break;
            default:
                printf ("Opcao invalida.");
        }
        printf ("Total parcial: R$ %.2f\n", total);
    } while (opcao != 0);

    printf ("Total da compra: R$%.2f", total);
}