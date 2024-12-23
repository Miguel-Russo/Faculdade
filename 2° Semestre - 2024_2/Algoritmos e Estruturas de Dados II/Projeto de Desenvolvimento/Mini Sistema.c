#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define FILENAME "LivrariaAurora.csv"

// Defini��o das structs Clientes, Livro e Emprestimo.
typedef struct{
	char Nome[100];
	char CPF[14];
	char Telefone [15];
} Cliente;

typedef struct{
	char Titulo[100];
	char Genero[50];
	char Autor[100];
	char Editora[50];
	char ISBN[17];
} Livro;

typedef struct{
	char Nome[100];
	char Titulo[100];
	int diaEmprestimo;
	int mesEmprestimo;
} Emprestimo;

// Assinatura das fun��es criadas.
void inicial();
void cadastro_1(Cliente X);
void lista_2(Livro X);
void emprestimo_3(Emprestimo X);


int main(){

	// Cria��o de inst�ncias para cada struct.
	Cliente clienteNovo;
	Livro livroNovo;
	Emprestimo emprestimoNovo;

	// Variavel declarada para escolher uma das 4 op��es a seguir.
	int opcaoEscolhida;

	setlocale(LC_ALL, "Portuguese");

	// Representa��o gr�fica para escolher uma das op��es.
	printf("============== Livraria Aurora ==============\n\n");
	printf("1. Cadastrar Cliente.\n");
	printf("2. Lista de Livros.\n");
	printf("3. Empr�stimo de Livros.\n");
	printf("4. Sair.\n\n");
	printf("=============================================\n\n");

	// Leitor da op��o.
	printf("Informe sua op��o: ");
	scanf("%i", &opcaoEscolhida);

	// Condi��o criada para limpar a tela apenas quando a op��o escolhida for 1, 2 ou 3.
	if(opcaoEscolhida == 1 || opcaoEscolhida == 2 || opcaoEscolhida == 3){
		system("cls");
	}

	// Condicional criada para chamar uma fun��o espec�fica dependendo da op��o escolhida.
	if(opcaoEscolhida == 1){
		cadastro_1(clienteNovo);
	}
	else if(opcaoEscolhida == 2){
		lista_2(livroNovo);
	}
	else if(opcaoEscolhida == 3){
		emprestimo_3(emprestimoNovo);
	}
	else if(opcaoEscolhida == 4){
		printf("\n\nSaindo.....\n");
	}
	else{
		printf("\n\nEscolha uma op��o v�lida.\n");
	}




	return 0;

}

// Fun��o respons�vel por chamar novamente tudo que est� na main.
void inicial(){

	system("cls");

	Cliente clienteNovo;
	Livro livroNovo;
	Emprestimo emprestimoNovo;

	int opcaoEscolhida;

	printf("============== Livraria Aurora ==============\n\n");
	printf("1. Cadastrar Cliente.\n");
	printf("2. Lista de Livros.\n");
	printf("3. Empr�stimo de Livros.\n");
	printf("4. Sair.\n\n");
	printf("=============================================\n\n");

	printf("Informe sua op��o: ");
	scanf("%i", &opcaoEscolhida);

	if(opcaoEscolhida == 1 || opcaoEscolhida == 2 || opcaoEscolhida == 3){
		system("cls");
	}


	if(opcaoEscolhida == 1){
		cadastro_1(clienteNovo);
	}
	else if(opcaoEscolhida == 2){
		lista_2(livroNovo);
	}
	else if(opcaoEscolhida == 3){
		emprestimo_3(emprestimoNovo);
	}
	else if(opcaoEscolhida == 4){
		printf("\n\nSaindo.....\n");
	}
	else{
		printf("\n\nEscolha uma op��o v�lida.\n");
	}

}

// Fun��o utilizada para o cadastro de clientes.
void cadastro_1(Cliente X){

	int continuar = 1; // Vari�vel utilizada como base para o la�o de repeti��o a seguir.
	int telaInicial; // Vari�vel respons�vel por armazernar a resposta do usu�rio para o retorno da tela inicial (1 / 0).
	int c; // A vari�vel c nesse c�digo serve como um buffer tempor�rio para armazenar cada caractere lido da entrada padr�o (geralmente o teclado) at� que seja encontrado um caractere de nova linha (\n) ou o fim do arquivo (EOF).

	// Looping para o cadastro de clientes at� que "continuar" seja diferente de 1.
	while (continuar){

		// Esse comando tem como objetivo abrir um arquivo para leitura e escrita, adicionando dados ao final do arquivo. Se o arquivo especificado n�o existir, ele ser� criado.
		FILE *arquivo = fopen("C:\\Users\\miguel.lorente_uscso\\Downloads\\Registro_de_Clientes.txt", "a+");

		// Verifica��o da exist�ncia do arquivo.
		if(!arquivo){
			printf("Erro ao abrir o arquivo.\n");
			return;
		}

		printf("=====================================================\n");
		printf("\t\t\tCadastro\n");
		printf("=====================================================\n\n");

		printf("Informe o nome do cliente............................: ");
    	while ((c = getchar()) != '\n' && c != EOF); // Tem como principal objetivo consumir (ou descartar) todos os caracteres de entrada at� encontrar um caractere de nova linha (\n) ou o final do arquivo (EOF).
		fgets(X.Nome, sizeof(X.Nome), stdin); // Comando respons�vel pela leitura de uma vari�vel tipo char.
		X.Nome[strcspn(X.Nome, "\n")] = '\0'; // Retira a quebra de linha colocada pelo comando fgets.

		printf("Informe o CPF do cliente (Apenas os n�meros).........: ");
		scanf("%s", X.CPF);

		printf("Informe o telefone do cliente........................: ");
		while ((c = getchar()) != '\n' && c != EOF);
		fgets(X.Telefone, sizeof(X.Telefone), stdin);

		fprintf(arquivo, "Nome do cliente: %s\nCPF do cliente: %s\nTelefone do cliente: %s\n\n", X.Nome, X.CPF, X.Telefone); // Escreve as informa��es dadas dentro do arquivo que se refere.
		fclose(arquivo); // Esse comando executa o fechamento do arquivo.

		printf("Cliente Cadastrado.\n\n");

		printf("----------------------------------------\n");
		printf("Gostaria de Cadastrar um novo cliente?\n\n1. Sim - Novo Cadastro\n0. N�o - Encerrar Cadastro\n");
		scanf("%i", &continuar);
		printf("\n");

		if(continuar){
			system("cls");
		}

	}

	printf("----------------------------------------\n");
	printf("Voltar a tela inicial?\n\n1. Sim - Retornar\n0. N�o - Encerrar\n");
	scanf("%i", &telaInicial);

	if(telaInicial == 1){
		inicial();
	}
	else{
		printf("\n");
		printf("Encerrando...\n");
	}


}


// Fun��o utilizada para a listagem de livros.
void lista_2(Livro X){

	int Qtd_Livros = 6; // Vari�vel utilizada para a refer�ncia numeral de novos livros.
	int continuar = 1;
	int adicionarLivros, c, telaInicial;

	printf("=====================================================\n");
	printf("\t\t  Estoque de Livros\n");
	printf("=====================================================\n\n");

	printf("1. O Pequeno Pr�ncipe\n2. O Senhor do An�is\n3. 1984\n4. Harry Potter e a Pedra Filosofal\n5. Harry Potter e a C�mara Secreta\n\n");
	printf("----------------------------------\n");
	printf("Gostaria de adicionar mais livros?\n\n1. Sim\n0. N�o\n");
	scanf("%i", &adicionarLivros);
	printf("\n");

	if(adicionarLivros == 1){

			FILE *arquivo = fopen("C:\\Users\\miguel.lorente_uscso\\Downloads\\Lista_de_Livros.txt", "a+");

			if(!arquivo){
				printf("Erro ao abrir o arquivo.\n");
				return;
			}

			fprintf(arquivo, "Estoque de livros: \n\n1. O Pequeno Pr�ncipe\n2. O Senhor do An�is\n3. 1984\n4. Harry Potter e a Pedra Filosofal\n5. Harry Potter e a C�mara Secreta\n\n");

		while(continuar){

			system("cls");

			printf("=====================================================\n");
			printf("\t\t  Estoque de Livros\n");
			printf("=====================================================\n\n");

			printf("Insira as seguintes informa��es para cadastrar um novo livro:\n\n");
			printf("Informe o nome do livro:..................: ");
			while ((c = getchar()) != '\n' && c != EOF);
			fgets(X.Titulo, sizeof(X.Titulo), stdin);
			X.Titulo[strcspn(X.Titulo, "\n")] = '\0';

			printf("Informe o(s) g�nero(s) do livro:..........: ");
			fgets(X.Genero, sizeof(X.Genero), stdin);
			X.Genero[strcspn(X.Genero, "\n")] = '\0';

			printf("Informe o(s) nome(s) do(s) autor(es)......: ");
			fgets(X.Autor, sizeof(X.Titulo), stdin);
			X.Autor[strcspn(X.Autor, "\n")] = '\0';

			printf("Informe a editora do livro:...............: ");
			fgets(X.Editora, sizeof(X.Editora), stdin);
			X.Editora[strcspn(X.Editora, "\n")] = '\0';

			printf("Informe o ISBN do livro:..................: ");
			scanf("%s", X.ISBN);

			printf("Livro Cadastrado.\n\n");

			fprintf(arquivo, "%i. %s\n   G�nero: %s\n   Autor(es): %s\n   Editora: %s\n   ISBN: %s\n\n", Qtd_Livros, X.Titulo, X.Genero, X.Autor, X.Editora, X.ISBN);

			Qtd_Livros++;

			printf("----------------------------------\n");
			printf("Gostaria de adicionar outro livro?\n\n1. Sim\n0. N�o\n");
			scanf("%i", &continuar);
			printf("\n");

			if(continuar){
				system("cls");
			}

		}

		fclose(arquivo);

		printf("----------------------\n");
		printf("Voltar a tela inicial?\n\n1. Sim - Retornar\n0. N�o - Encerrar\n");
		scanf("%i", &telaInicial);

		if(telaInicial == 1){
			inicial();
		}
		else{
			printf("\n");
			printf("Encerrando...\n");
		}

	}

	else{

		printf("----------------------\n");
		printf("Voltar a tela inicial?\n\n1. Sim - Retornar\n0. N�o - Encerrar\n");
		scanf("%i", &telaInicial);

		if(telaInicial == 1){
			inicial();
		}
		else{
			printf("\n");
			printf("Encerrando...\n");
		}

	}
}


void emprestimo_3(Emprestimo X){
	int Qtd_de_Livros; // Vari�vel respons�vel por armazenar a quantidade de livros que ser�o lidos.
	int i, c;
	int continuar = 1, telaInicial;

	FILE *arquivo = fopen("C:\\Users\\miguel.lorente_uscso\\Downloads\\Emprestimo_de_Livros.txt", "a+");

	if(!arquivo){
		printf("Erro ao abrir o arquivo.\n");
		return;
	}

	while(continuar){

		printf("=============================================\n");
		printf("\t\t  Empr�stimo\n");
		printf("=============================================\n\n");

		printf("Informe o nome do cliente: ");
		while ((c = getchar()) != '\n' && c != EOF);
		fgets(X.Nome, sizeof(X.Nome), stdin);

		printf("\nInforme a quantidade de livros que ser�o emprestados: ");
		scanf("%i", &Qtd_de_Livros);

		fprintf(arquivo, "Nome do cliente: %s\nQuantidade de livros para empr�stimo: %i\n", X.Nome, Qtd_de_Livros);

		if(Qtd_de_Livros == 1){
			printf("Informe o titulo do livro..........: ");
			while ((c = getchar()) != '\n' && c != EOF);
			fgets(X.Titulo, sizeof(X.Titulo), stdin);
			X.Titulo[strcspn(X.Titulo, "\n")] = '\0';

			fprintf(arquivo, "Titulo do livro: %s\n", X.Titulo);

		}
		else{
			for(i = 1; i <= Qtd_de_Livros; i++){
				printf("Informe o nome do %i� livro..........: ", i);
				if(i == 1){
					while ((c = getchar()) != '\n' && c != EOF);
					fgets(X.Titulo, sizeof(X.Titulo), stdin);
					X.Titulo[strcspn(X.Titulo, "\n")] = '\0';

					fprintf(arquivo, "Titulo do %i� livro: %s\n", i, X.Titulo);
				}
				else{
					fgets(X.Titulo, sizeof(X.Titulo), stdin);
					X.Titulo[strcspn(X.Titulo, "\n")] = '\0';

					fprintf(arquivo, "Titulo do %i� livro: %s\n", i, X.Titulo);
				}
			}
		}

		printf("\n----------------------------------------------\n");

		printf("Informe o dia do empr�stimo: ");
		scanf("%i", &X.diaEmprestimo);

		printf("Informe o m�s do empr�stimo: ");
		scanf("%i", &X.mesEmprestimo);

		printf("\n\n----------------------------------------------\n");

		fprintf(arquivo, "\nDia do empr�stimo: %i\nM�s do empr�stimo: %i\n", X.diaEmprestimo, X.mesEmprestimo);

		// Condicionais repons�veis por organizar a exibi��o da data final do empr�stimo, para que n�o haja m�s 13 e dias acima de 31 por exemplo.
		if(X.mesEmprestimo == 12 && (X.diaEmprestimo > 0 && X.diaEmprestimo < 32)){
			printf("Data final do empr�stimo:\n\nDia: %i\nM�s: 1\n\n", X.diaEmprestimo);
			fprintf(arquivo, "\nData final do empr�stimo:\nDia: %i\nM�s: 1\n\n", X.diaEmprestimo);
		}
		else if(X.mesEmprestimo == 2 && X.diaEmprestimo > 28){
			printf("Insira um dia v�lido para o m�s.\n\n");
			fprintf(arquivo, "Empr�stimo cancelado.\n\n");
			break;
		}
		else if(X.mesEmprestimo == 1 && X.diaEmprestimo > 28){
			printf("Data final do empr�stimo:\n\nDia: 28\nM�s: %i\n\n", X.mesEmprestimo + 1);
			fprintf(arquivo, "\nData final do empr�stimo:\nDia: 28\nM�s: %i\n\n", X.mesEmprestimo + 1);
		}
		else if((X.mesEmprestimo == 1 || X.mesEmprestimo == 3 || X.mesEmprestimo == 5 || X.mesEmprestimo == 8 || X.mesEmprestimo == 10) && X.diaEmprestimo == 31){
			printf("Data final do empr�stimo:\n\nDia: 30\nM�s: %i\n\n", X.mesEmprestimo + 1);
			fprintf(arquivo, "\nData final do empr�stimo:\nDia: 30\nM�s: %i\n\n", X.mesEmprestimo + 1);
		}
		else if((X.mesEmprestimo == 2 || X.mesEmprestimo == 4 || X.mesEmprestimo == 6 || X.mesEmprestimo == 9 || X.mesEmprestimo == 11) && X.diaEmprestimo > 30){
			printf("Empr�stimo cancelado. Dia inv�lido para o m�s.\n\n");
			fprintf(arquivo, "Empr�stimo cancelado.\n\n");
			break;
		}
		else if(X.mesEmprestimo > 12 ){
			printf("Insira um m�s v�lido.\n\n");
			fprintf(arquivo, "Empr�stimo cancelado.\n\n");
			break;
		}
		else if(X.diaEmprestimo > 31){
			printf("Insira um dia v�lido.\n\n");
			fprintf(arquivo, "Empr�stimo cancelado.\n\n");
			break;
		}
		else{
			printf("Data final do empr�stimo:\n\nDia: %i\nM�s: %i\n\n", X.diaEmprestimo, X.mesEmprestimo + 1);
			fprintf(arquivo, "\nData final do empr�stimo:\nDia: %i\nM�s: %i\n\n", X.diaEmprestimo, X.mesEmprestimo + 1);
		}

		printf("Empr�stimo efetuado com sucesso.\n\n");
		printf("-------------------------------------------\n");
		fprintf(arquivo, "-------------------------------------------\n\n");

		printf("Gostaria de efetuar outro empr�stimo?\n\n1. Sim - Continuar empr�stimo\n0. N�o - Encerrar empr�stimo\n");
		scanf("%i", &continuar);

		if(continuar == 1){
			system("cls");
		}

	}

	fclose(arquivo);

	printf("----------------------------------------------\n");
	printf("Voltar a tela inicial?\n\n1. Sim - Retornar\n0. N�o - Encerrar\n");
	scanf("%i", &telaInicial);

	if(telaInicial == 1){
		inicial();
	}
	else{
		printf("\n");
		printf("Encerrando...\n");
	}


}
