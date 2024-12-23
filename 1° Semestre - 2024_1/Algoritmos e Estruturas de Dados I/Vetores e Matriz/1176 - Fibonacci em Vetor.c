#include <stdio.h>
 
int main() {
 
    int T;
    long long int N;
    long long int ultimo = 1, penultimo = 0, soma;

    scanf ("%i", &T);
    
    for (int i = 1; i <= T; i++){
        
        soma = 0;
        ultimo = 1;
        penultimo = 0;
        
        scanf ("%llu", &N);
        
            for (int cont = 2; cont <= N; cont++){
    
                soma = penultimo + ultimo;
            
                penultimo = ultimo;
                ultimo = soma;
            }
                
        if (N == 1){
            printf ("Fib(1) = 1\n");
        }
        
        else {
        printf ("Fib(%llu) = %llu\n", N, soma);
        }
    }
    
    return 0;
}
