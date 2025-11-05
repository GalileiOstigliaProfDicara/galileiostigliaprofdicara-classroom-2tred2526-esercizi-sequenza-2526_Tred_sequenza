//Chieste all'utente le dimensioni di un rettangolo, calcola e mostra area e 
//perimetro.

#include <stdio.h>

int main() {
    int base, altezza, area, perimetro;
    printf("Inserisci base e altezza del rettangolo: ");
    scanf("%d", &base);
    scanf("%d", &altezza);
    area = base * altezza;
    perimetro = (base + altezza) * 2;
    printf("L'area del rettangolo è %d e il perimetro è %d", area, perimetro);
}