//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da fun��o
int Maior(int A, int B);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int X, Y, Res;
   
    printf("Informe o 1� n�mero: ");
    scanf("%i", &X);
   
    printf("Informe o 2� n�mero: ");
    scanf("%i", &Y);
   
    Res = Maior(X, Y);
   
    printf("Maior n�mero: %i\n", Res);
    
    return 0;
}

//Fun��o respons�vel por retornar o maior n�mero
int Maior(int A, int B){
   
    if(A > B){
        return A;
    }
    else{
        return B;
    }
}
