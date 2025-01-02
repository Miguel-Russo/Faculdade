package atividade_7;


public class Atividade_7 {

    public static void main(String[] args) {
        FuncionarioHorista horista = new FuncionarioHorista("João", "Operador", 160, 20.0);
        FuncionarioAssalariado assalariado = new FuncionarioAssalariado("Maria", "Gerente", 5000.0);

        horista.exibirDetalhes();
        System.out.println();
        assalariado.exibirDetalhes();
    }
}
