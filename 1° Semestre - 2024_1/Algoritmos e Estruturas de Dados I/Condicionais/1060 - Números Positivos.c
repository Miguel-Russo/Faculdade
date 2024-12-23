#include <stdio.h>
 
int main() {
 
    double N;
    int cont, pos;
    
    cont = 1;
    
    for (cont = 1; cont <= 6; cont++){
        scanf ("%lf", &N);
        if (N > 0){
            pos = pos + 1;
        }
    }
    
    printf ("%i valores positivos\n", pos);
    
    return 0;
}
