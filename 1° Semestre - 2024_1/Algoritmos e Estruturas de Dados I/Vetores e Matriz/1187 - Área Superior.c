#include <stdio.h>
 
int main() {
 
    int i, j, cont = 0;
    char O;
    double M[12][12], soma = 0.0, media = 0.0;
    
    scanf(" %c", &O);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
            
            if(((i + j) <= 10) && (j > i)){
                soma = soma + M[i][j];
                cont++;
            }
        }
    }
    
    media = soma / cont;
    
    if(O == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", media);
    }
 
    return 0;
}
