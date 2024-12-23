#include <stdio.h>
 
int main() {
 
    int pos, cont;
    double N, soma, media;
    
    cont = 1;
    
    while (cont <= 6){
        scanf ("%lf", &N);
        if (N > 0){
            pos = pos + 1;
            soma = soma + N;
        }
        cont = cont + 1;
    }
    
    media = soma/pos;
    
    printf ("%i valores positivos\n", pos);
    printf ("%.1lf\n", media);
 
    return 0;
}
