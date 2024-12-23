#include <stdio.h>
 
int main() {
 
    int Impar[5];
    int Par[5];
    int Qtd_impares = 0;
    int Qtd_pares = 0;
    int N;
    int cont;
   
    for (cont = 1; cont <= 15; cont++){
        scanf("%i", &N);
        if (N % 2 == 0){
            Par[Qtd_pares] = N;
            Qtd_pares++;
            if (Qtd_pares == 5){
                for (int i = 0; i < Qtd_pares; i++){
                    printf ("par[%i] = %i\n", i, Par[i]);
                }
                Qtd_pares = 0;
            }
        }
        if (N % 2 != 0){
            Impar[Qtd_impares] = N;
            Qtd_impares++;
            if (Qtd_impares == 5){
                for (int k = 0; k < Qtd_impares; k++){
                    printf ("impar[%i] = %i\n", k, Impar[k]);
                }
                Qtd_impares = 0;
        }
        }
    }
        for (int k = 0; k < Qtd_impares; k++){
            printf ("impar[%i] = %i\n", k, Impar[k]);
        }
        for (int i = 0; i < Qtd_pares; i++){
            printf ("par[%i] = %i\n", i, Par[i]);
        }
   
    return 0;
}
