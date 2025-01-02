package atividade_8;

public class Atividade_8 {

    public static void main(String[] args) {
         // Criando objetos das subclasses LivroFiccao e LivroTecnico
        Livro livroFiccao = new LivroFiccao("O Senhor dos Anéis", "J.R.R. Tolkien", 1954, "Fantasia");
        Livro livroTecnico = new LivroTecnico("Introdução à Programação", "John Doe", 2018, "Ciência da Computação");

        // Polimorfismo Dinâmico - Chamadas para exibirDetalhes
        livroFiccao.exibirDetalhes();  // Chama o método sobrescrito de LivroFiccao
        livroTecnico.exibirDetalhes();  // Chama o método sobrescrito de LivroTecnico

        System.out.println(); // Separador

        // Polimorfismo Estático - Sobrecarga de métodos para calcular multas
        Biblioteca biblioteca = new Biblioteca();

        double multaDias = biblioteca.calcularMulta(7);  // Sobrecarga: cálculo com dias atrasados
        double multaSemanas = biblioteca.calcularMulta(3, 10.0);  // Sobrecarga: cálculo com semanas atrasadas
        double multaLivro = biblioteca.calcularMulta(livroFiccao, 2.0);  // Sobrecarga: cálculo com o objeto livro

        System.out.println("Multa por dias atrasados: R$" + multaDias);
        System.out.println("Multa por semanas atrasadas: R$" + multaSemanas);
        System.out.println("Multa calculada para o livro de ficção: R$" + multaLivro);

        System.out.println(); // Separador

        // Exemplo de encapsulamento com getters e setters
        livroTecnico.setAnoPublicacao(2021);
        System.out.println("Ano atualizado do livro técnico: " + livroTecnico.getAnoPublicacao());
    }
    
}
