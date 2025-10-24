//Esercizio 2 – Quadrato e cubo
//Fatto inserire all’utente un numero scrivere un programma 
//che calcoli e comunichi all’utente il quadrato e il cubo del numero inserito.

#include <stdio.h>

int main() {
    int numero, quadrato, cubo;

    printf("Inserisci il numero di cui vuoi il quadrato e il cubo: ");
    scanf("%d", &numero);
    quadrato = numero * numero;

    printf("Il quadrato di %d è %d\n", numero, quadrato);

    cubo = numero * numero * numero;
    printf("Il cubo di %d è %d\n", numero, cubo);

    return 0;
}