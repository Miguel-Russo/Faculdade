package atividade_6;


class Moto extends Veiculo {
    private boolean temCarenagem;

    // Construtor da classe Moto que usa o construtor da classe base (super)
    public Moto(String marca, String modelo, int ano, boolean temCarenagem) {
        super(marca, modelo, ano);
        this.temCarenagem = temCarenagem;
    }

    // Sobrescrita (override) do método exibirDetalhes (polimorfismo)
    @Override
    public void exibirDetalhes() {
        super.exibirDetalhes();
        System.out.println("Tem carenagem: " + (temCarenagem ? "Sim" : "Não"));
    }
}