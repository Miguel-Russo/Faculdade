package atividade_8;

class LivroTecnico extends Livro {
    private String area;

    public LivroTecnico(String titulo, String autor, int anoPublicacao, String area) {
        super(titulo, autor, anoPublicacao);
        this.area = area;
    }
    
    public String getArea(){
        return area;
    }
    
    public void setArea(String area){
        this.area = area;
    }

    //POLIMORFISMO DINAMICO
    
    @Override
    public void exibirDetalhes() {
        System.out.println(getTitulo() + " é um livro técnico da área de " + area + ".");
    }
}