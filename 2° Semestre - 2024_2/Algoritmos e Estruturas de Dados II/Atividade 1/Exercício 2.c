//Miguel Russo Lorente

#include <stdio.h>

int main()
{
    //Declara��o da variavel respons�vel por definir o tamanho da matriz.
    int n, i, j;
    
    printf("Informe o tamanho da matriz: ");
    scanf("%i", &n);
    printf("\n");
    
    //Defini��o da matriz quadrada.
    int Mat[n][n];
    
    //Loop realizado para inserir os valores em cada posi��o.
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            
            if(j <= i){
                Mat[i][j] = j + 1;
            }
            else{
                Mat[i][j] = 0;
            }
            
        }
    }
    
    //Loop para exibir o valor alocado dentro de cada posi��o.
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%i", Mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
