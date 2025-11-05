/*Dato un numero di caramelle da dividere per un certo numero di amici, 
che ne devono ricevere tutti lo stesso numero, dire quante caramelle verranno 
date a testa e quante ne rimangono non distribuite.*/

#include <stdio.h>

int main(){
    int caramelle, amici, resto, caramelle_distribuite;

    printf("Inserisci quante caramelle hai rubato al Lidl: ");
    scanf("%d", &caramelle);
    printf("Quanti eravate a rubare?");
    scanf("%d", &amici);

    caramelle_distribuite = caramelle / amici;

    resto = caramelle % amici;

    printf("Ogni amico avrà come bottino %d caramelle, le altre %d caramelle le riportiamo al Lidl.", caramelle_distribuite, resto);

}