package atividade_8;

class LivroFiccao extends Livro {
    private String genero;

    public LivroFiccao(String titulo, String autor, int anoPublicacao, String genero) {
        super(titulo, autor, anoPublicacao);
        this.genero = genero;
    }
    
    public String getGenero(){
        return genero;
    }
    
    public void setGenero(String genero){
        this.genero = genero;
    }

    @Override
    public void exibirDetalhes() {
        System.out.println(getTitulo() + " é um livro de ficção do gênero " + genero + ".");
    }
}
