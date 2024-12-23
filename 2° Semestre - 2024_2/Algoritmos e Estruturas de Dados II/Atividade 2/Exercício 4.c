//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da Fun��o.
int Somatorio(int X);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int N, Res;
   
    printf("Informe quantas vezes voc� gostaria de efetuar o somat�rio: ");
    scanf("%i", &N);
   
    Res = Somatorio(N);
   
    printf("Somatorio = %i\n", Res);
  
    return 0; 
}

//Fun��o respons�vel por calcular o somat�rio total.
int Somatorio(int X){
    int i, Soma = 0;
   
    for(i = 1; i <= X; i++){
       
        Soma = Soma + (5 * (i*i) + 2 * i + 8);
    }
   
    return Soma;
}
