//Miguel Russo Lorente

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{ //Inicializando uma struct
	char modelo[50]; //Declara��o de uma variavel do tipo char, responsavel por armazenar o modelo.
	int ano; //Declara��o de uma variavel do tipo int, responsavel por armazenar o ano.
	double preco; //Declara��o de uma variavel do tipo double, responsavel por armazenar o pre�o.
} Carro; //Nome dado a struct atrav�s do "typedef", assim abreviando a estrutura de declara��o de variaveis pertencentes a essa struct.

void modificarPreco(Carro *c, double novoPreco){ //Fun��o com retorno void, recebendo como parametro um ponteiro do tipo Carro e um double..
	(*c).preco = novoPreco; //(*c).preco == c -> preco.  O conteudo armazenado na variavel preco � substituida pelo valor armazenado na variavel novoPreco atrav�s do ponteiro.
} //Fim fun��o.

void imprimirCarro(Carro *c){ //Fun��o com retorno void, recebendo como parametro um ponteiro do tipo Carro.
	printf("Modelo do carro: %s\n", c -> modelo); //Exibi��o do modelo do carro, atraves do ponteiro.
	printf("Ano do carro: %i\n", c -> ano); //Exibi��o do ano do carro, atraves do ponteiro.
	printf("Pre�o do carro: %.2lf\n", c -> preco); //Exibi��o do pre�o do carro, atraves do ponteiro.
	printf("\n\n\n");
}

int main(){ //Inicio da main
	setlocale(LC_ALL, "portuguese"); //Comando responsavel por aceitar caracteres especiais como acentos.
	Carro carro1; //Cria��o de uma variavel chamada carro1 do tipo Carro.
	
	strcpy(carro1.modelo, "XyZ"); //O comando strcpy � responsavel por copiar o valor de uma string de um local para outro, nesse caso copiando a string "XyZ" e copiando a mesma na variavel modelo de carro1.
	carro1.ano = 2020; //Atribui��o de um valor na varivel ano de carro1.
	carro1.preco = 90000.00; //Atribui��o de um valor na varivel preco de carro1.
	
	printf("Dados antes da modifica��o: \n");
	imprimirCarro(&carro1);  //Imprime todas as informa��es de carro1, sendo elas: Modelo = XyZ, Ano = 2020, Pre�o = 90000.00.
	
	modificarPreco(&carro1, 115000.00); //Modificou o valor da variavel preco de carro1 saindo de 90000.00 para 115000.00.
	
	printf("Dados ap�s a modifica��o: \n");
	imprimirCarro(&carro1); //Imprime todas as informa��es de carro1, sendo elas: Modelo = XyZ, Ano = 2020, Pre�o = 115000.00.
	
	
	return 0;
} //Final da main.
