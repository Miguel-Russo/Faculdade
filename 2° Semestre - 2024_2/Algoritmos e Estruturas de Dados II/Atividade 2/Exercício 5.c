//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da fun��o
int Soma(int A, int B);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int X, Y, Res;
   
    printf("Informe o primeiro valor para soma: ");
    scanf("%i", &X);
   
    printf("Informe o segundo valor para soma: ");
    scanf("%i", &Y);
   
    Res = Soma(X, Y);
   
    printf("Soma = %i\n", Res);
    
    return 0;
}

//Fun��o respons�vel por realizar a soma entre dois n�meros inteiros.
int Soma(int A, int B){
   
    return A + B;
}
