package atividade_6;


class Carro extends Veiculo {
    private int numPortas;

    // Construtor da classe Carro que usa o construtor da classe base (super)
    public Carro(String marca, String modelo, int ano, int numPortas) {
        super(marca, modelo, ano); // Chamada do construtor da superclasse (Veiculo)
        this.numPortas = numPortas;
    }

    // Sobrescrita (override) do método exibirDetalhes (polimorfismo)
    @Override
    public void exibirDetalhes() {
        // Aqui estamos chamando o método da classe mãe com 'super', para reaproveitar o código
        super.exibirDetalhes();
        System.out.println("Número de portas: " + numPortas);
    }
}
