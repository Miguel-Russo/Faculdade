//Miguel Russo Lorente
#include <stdio.h>

//Assinatura da fun��o
void impares(int n);

int main(){
	int X;
	
	printf("Digite um n�mero: ");
	scanf("%i", &X);
	
	impares(X);
	
	return 0;
}

//Fun��o respons�vel por escrever todos o n�meros impares maiores que zero e menores ou igual a n.
void impares(int n){
	int i;
	
	for(i = 0; i <= n; i++){
		if(i % 2 != 0){
			printf("%i\n", i);
		}
	}
}
