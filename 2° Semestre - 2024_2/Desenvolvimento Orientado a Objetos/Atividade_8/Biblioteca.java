package atividade_8;

public class Biblioteca {
    
    //POLIMORFISMO ESTATICO
    
    // Sobrecarga do método calcularMulta para calcular multa por dias atrasados
    public double calcularMulta(int diasAtraso) {
        return diasAtraso * 1.5; // Multa de R$ 1,50 por dia de atraso
    }

    // Sobrecarga do método calcularMulta para calcular multa com valor fixo por semana
    public double calcularMulta(int semanasAtraso, double valorPorSemana) {
        return semanasAtraso * valorPorSemana;
    }

    // Sobrecarga do método calcularMulta para calcular multa com base em uma taxa e o preço do livro
    public double calcularMulta(Livro livro, double taxa) {
        return livro.getAnoPublicacao() * taxa; // Exemplo fictício: multa calculada com base no ano de publicação
    }
    
}
