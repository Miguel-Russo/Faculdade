#include <stdio.h>
 
int main() {
 
    int N, cont;
    
    scanf ("%i", &N);
    
    cont = 1;
    
    while (cont <= N) {
        if (N % cont == 0) {
            printf ("%i\n", cont);
        }
        cont = cont + 1;
    }
 
    return 0;
}
