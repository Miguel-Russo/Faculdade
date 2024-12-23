#include <stdio.h>
 
int main() {
 
    int N, ult = 1, penul = 0, i, soma = 0;
    
    scanf("%i", &N);
    
    if(N == 1){
        printf("0\n");
    }
    else if(N == 2){
        printf("0 1\n");
    }
    else{
        printf("0 1 ");
        
        for(i = 3; i <= N; i++){
            soma = penul + ult;
            
            if(i != N){
                printf("%i ", soma);
            }
            else{
                printf("%i\n", soma);
            }
            
            penul = ult;
            ult = soma;
        }
    }
 
    return 0;
}
