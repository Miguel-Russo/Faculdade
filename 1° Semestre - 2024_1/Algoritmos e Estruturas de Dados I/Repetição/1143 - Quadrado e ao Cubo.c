#include <stdio.h>
 
int main() {
 
    int N, cont, cubo, quadrado;
    
    scanf ("%i", &N);
    
    cont = 1;
    
    while (cont <= N) {
        
        printf ("%i ", cont);
        
        quadrado = cont * cont;
        printf ("%i ", quadrado);
        
        cubo = cont * cont * cont;
        printf ("%i\n", cubo);
        
        cont = cont + 1;
    }
 
    return 0;
}
