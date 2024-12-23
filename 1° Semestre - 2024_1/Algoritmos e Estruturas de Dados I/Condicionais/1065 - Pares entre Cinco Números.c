#include <stdio.h>
 
int main() {
 
    int num, i;
    int Quantidade_pares = 0;
    
    for(i = 1; i <= 5; i++){
        scanf("%i", &num);
        if(num % 2 == 0){
            Quantidade_pares += 1;
        }
    }
    
    printf("%d valores pares\n", Quantidade_pares);
    
    
    return 0;
}
