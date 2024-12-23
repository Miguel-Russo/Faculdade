#include <stdio.h>
 
int main() {
 
    int X, Y, temp, contador;
    
    scanf ("%i", &X);
    scanf ("%i", &Y);
    
    if (X > Y) {
        temp = X;
        X = Y;
        Y = temp;
    }
    
    contador = X + 1;
    
    while (contador < Y) {
        if (contador % 5 == 2 || contador % 5 == 3) {
            printf ("%i\n", contador);
        }
        contador = contador + 1;
    }
    
    return 0;
}
