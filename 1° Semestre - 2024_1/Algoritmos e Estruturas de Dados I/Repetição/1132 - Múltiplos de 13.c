#include <stdio.h>
 
int main() {
 
    int X, Y, temp, contador;
    int soma = 0;
    
    scanf ("%i", &X);
    scanf ("%i", &Y);
    
    if (X > Y) {
        temp = X;
        X = Y;
        Y = temp;
    }
    
    contador = X;
    
    while (contador <= Y) {
        if (contador % 13 != 0) {
            soma = soma + contador;
        }
        contador = contador + 1;
    }
    printf ("%i\n", soma);
    
    return 0;
}
