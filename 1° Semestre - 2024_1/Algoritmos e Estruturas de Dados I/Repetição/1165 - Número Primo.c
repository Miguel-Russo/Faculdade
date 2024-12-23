#include <stdio.h>
 
int main() {
 
    int N, cont, Qtd, X, i;
    
    scanf ("%i", &N);
    
    for (i = 1; i <= N; i++){
        Qtd = 0;
    
        scanf ("%i", &X);
    
        cont = X;
    
        while (cont >= 1) {
            if (X % cont == 0){
                Qtd = Qtd + 1;
            }
            cont = cont - 1;
        }
        
        if (Qtd > 2){
            printf ("%i nao eh primo\n", X);
        }
        else{
            printf ("%i eh primo\n", X);
        }
    }
    
    
 
    return 0;
}
