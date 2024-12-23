#include <stdio.h>
 
int main() {
 
    int Valor, i; 
    int Qtd_pares = 0; 
    int Qtd_impares = 0;
    int Qtd_positivos = 0; 
    int Qtd_negativos = 0;
    
    for(i = 1; i <= 5; i++){
        scanf("%i", &Valor);
        
        if (Valor % 2 == 0){
            Qtd_pares = Qtd_pares + 1;
        }
        else {
            Qtd_impares = Qtd_impares + 1;
        }
        
        
        if (Valor > 0){
            Qtd_positivos = Qtd_positivos + 1;
        }
        else {
            if(Valor != 0){
                Qtd_negativos = Qtd_negativos + 1;
            }
        }
        
    }
    
    printf("%d valor(es) par(es)\n", Qtd_pares);
    printf("%d valor(es) impar(es)\n", Qtd_impares);
    printf("%d valor(es) positivo(s)\n", Qtd_positivos);
    printf("%d valor(es) negativo(s)\n", Qtd_negativos);
    
    
    
    return 0;
}
