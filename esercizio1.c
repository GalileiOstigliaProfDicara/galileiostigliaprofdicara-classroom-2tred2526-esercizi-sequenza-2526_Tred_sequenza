//Fatto inserire all’utente percentuale di sconto, prezzo pieno.
// Quindi mostrare prezzo scontato e sconto.

#include <stdio.h>

int main(){
    int percentuale;
    float prezzo_pieno, prezzo_scontato, sconto;

    printf("Inserisci il prezzo pieno: ");
    scanf("%f", &prezzo_pieno);
    printf("Inserisci la percentuale di sconto: ");
    scanf("%d", &percentuale);
    sconto = prezzo_pieno * percentuale / 100;
    prezzo_scontato = prezzo_pieno - sconto;
    printf("Il prezzo scontato è %.2f euro e hai avuto %f euro di sconto", prezzo_scontato, sconto);
}