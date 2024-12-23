//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura da fun��o.
int Fibonacci(int X);

int main(){
	setlocale(LC_ALL, "Portuguese");
   
    int N, Res;
   
    printf("Informe at� qual termo voc� gostaria de saber da sequ�ncia de Fibonacci: ");
    scanf("%i", &N);
   
    Res = Fibonacci(N);
   
    printf("Termo = %i\n", Res);

    return 0;
}

//Fun��o respons�vel por calcular e retornar o elemento n da sequ�ncia de Fibonacci.
int Fibonacci(int X){
    int ult = 1, penul = 0, soma = 0, i;
   
    if(X == 1){
        return penul;
    }
    else if(X == 2){
        return ult;
    }
    else{
        for(i = 3; i <= X; i++){
            soma = ult + penul;
           
            penul = ult;
            ult = soma;
        }
       
        return soma;
    }
}
