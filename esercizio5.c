#include <stdio.h>
int main(){
    int a, b, c, temp;
    printf("Inserisci 3 numeri: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    temp = b;
    b = a;
    a = c;
    c = temp;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}