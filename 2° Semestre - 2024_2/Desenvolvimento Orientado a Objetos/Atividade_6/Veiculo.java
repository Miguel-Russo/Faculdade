package atividade_6;

public class Veiculo {
    // Atributos encapsulados (privados) para Veiculo
    private String marca;
    private String modelo;
    private int ano;

    // Construtor da classe Veiculo (inicializa atributos)
    public Veiculo(String marca, String modelo, int ano) {
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    }

    // Métodos 'getter' e 'setter' (encapsulamento)
    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        if (ano > 1980 && ano <= 2024) { // Validação de ano razoável para veículos
            this.ano = ano;
        } else {
            System.out.println("Ano inválido! Deve ser entre 1980 e 2024.");
        }
    }
    public void exibirDetalhes() {
        System.out.println("Veículo: " + marca + " " + modelo + " " + ano);
    }
}
