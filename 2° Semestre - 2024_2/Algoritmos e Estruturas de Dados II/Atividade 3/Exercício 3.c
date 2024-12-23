//Miguel Russo Lorente
#include <stdio.h>

int calcularResultado(int v[], int n); //Assinatura da fun��o calcularResultado que tem como parametro um vetor do tipo int e um n�mero int.

int main(){ //Inicio da main.
	int vetor[5], i, resultado; //Declara��o de duas variaveis int, sendo uma um vetor de tamanho 5 e a outra um numero simples.
	
	for(i = 0; i < 5; i++){ //La�o de repeti��o criado para andor por todo o vetor.
		vetor[i] = i*2; //Cada elemento do vetor receber� o valor de i * 2.
	}// Fim do la�o.
	
	resultado = calcularResultado(vetor, 5); //Atribui��o na variavel "resultado" do retorno da fun��o ao qual est� indicando.
	
	printf("O resultado �: %i\n", resultado); //Mostrando o resultado final.
	
	return 0;
} //Fim da main.

int calcularResultado(int v[], int n){ //Desenvolvimento da fun��o calcularResultado.
	int i, soma = 0; //Declara��o de variaveis do tipo int, uma para fun��o de contadora e outra para aramzenar o valor total da soma.
	
	for(i = 0; i < n; i++){ //La�o de repeti��o criado para andor por todo o vetor.
		soma += v[i]; //Todos o valores que foram declarados dentro do vetor declarado na main ser�o colocados dentro da variavel soma, somando um por um.
	} //Fim do la�o.
	
	return soma; //Retorno da soma total de todos os elementos do vetor.
}
