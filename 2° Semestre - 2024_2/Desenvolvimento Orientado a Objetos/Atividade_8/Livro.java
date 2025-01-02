package atividade_8;

public class Livro {
    // Atributos privados (Encapsulamento)
    private String titulo;
    private String autor;
    private int anoPublicacao;

    // Construtor para inicializar os atributos
    public Livro(String titulo, String autor, int anoPublicacao) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = anoPublicacao;
    }

    // Getters e Setters (Encapsulamento)
    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public int getAnoPublicacao() {
        return anoPublicacao;
    }

    public void setAnoPublicacao(int anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }

    // Método que será sobrescrito nas subclasses (Polimorfismo Dinâmico)
    public void exibirDetalhes() {
        System.out.println("Título: " + titulo + ", Autor: " + autor + ", Ano: " + anoPublicacao);
    }
}
