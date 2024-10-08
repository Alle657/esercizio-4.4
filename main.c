#include <stdio.h>

int main() {
    int voto = -1;
    int somma = 0, contatore = 0;
    float media;

    while (voto != 0) {
        printf("Inserisci un voto (0 per terminare): ");
        scanf("%d", &voto);

        if (voto != 0) {
            somma += voto;
            contatore++;
        }
    }


    if (contatore > 0) {
        media = (float)somma / contatore;
        printf("La media dei voti e': %.2f\n", media);
    } else {
        printf("Non sono stati inseriti voti.\n");
    }

    return 0;
}