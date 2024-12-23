//Miguel Russo Lorente

#include <stdio.h>
#include <locale.h>

//Assinatura das fun��es
double mediaEscola(int Class);
double mediaTurma(int numAlunos);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int Turmas;
    double Res;
   
    printf("Informe quantas turmas ser�o avaliadas: ");
    scanf("%i", &Turmas);
   
    Res = mediaEscola(Turmas);
   
    printf("M�dia Geral = %.2lf\n", Res);
   
    return 0;
   
}

//Fun��o respos�vel por calcular a m�dia da escola.
double mediaEscola(int numTurmas){
    int j = 1, qtdAlunos, cont;
    double mediaGeral = 0;
   
    while (j <= numTurmas){
        printf("Quantos alunos a %i� turma possui? ", j);
        scanf("%i", &qtdAlunos);
        mediaGeral = mediaGeral + mediaTurma(qtdAlunos);
       
        j++;
    }
   
    mediaGeral = mediaGeral/numTurmas;
   
    return mediaGeral;
}

//Fun��o respos�vel por calcular a m�dia da turma.
double mediaTurma(int numAlunos){
    int i;
    double nota, soma = 0, media = 0;
   
    for(i = 1; i <= numAlunos; i++){
        printf("Informe a nota do %i� aluno: ", i);
        scanf("%lf", &nota);
        soma += nota;
    }
   
    media = soma / numAlunos;
    printf("M�dia da turma: %.2lf\n\n", media);
   
    return media;
}
