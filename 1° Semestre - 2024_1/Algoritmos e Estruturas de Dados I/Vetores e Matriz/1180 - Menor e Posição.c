#include <stdio.h>
 
int main() {
 
    int N, i;
    
    scanf("%i", &N);
    
    int X[N], menor, pos = 0;
    
    for(i = 0; i < N; i++){
        scanf("%i", &X[i]);
        
        menor = X[0];
    }
    
    for(i = 0; i < N; i++){
        if(X[i] < menor){
            menor = X[i];
            pos = i;
        }
    }
    
    printf("Menor valor: %i\n", menor);
    printf("Posicao: %i\n", pos);
 
    return 0;
}
