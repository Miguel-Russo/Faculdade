package atividade_6;

public class Atividade_6 {

    public static void main(String[] args) {
         // Instanciando um objeto do tipo Carro
        Carro carro = new Carro("Toyota", "Corolla", 2020, 4);
        
        // Instanciando um objeto do tipo Moto
        Moto moto = new Moto("Honda", "CB500", 2022, true);

        // Usando getters para acessar valores encapsulados de Carro
        System.out.println("Marca do carro: " + carro.getMarca());
        System.out.println("Modelo do carro: " + carro.getModelo());
        System.out.println("Ano do carro: " + carro.getAno());

        // Usando setters para modificar valores encapsulados de Carro
        carro.setMarca("Honda");
        carro.setModelo("Civic");
        carro.setAno(2021);  // Valor válido

        System.out.println("\nApós modificar os atributos do carro:");
        System.out.println("Marca do carro: " + carro.getMarca());
        System.out.println("Modelo do carro: " + carro.getModelo());
        System.out.println("Ano do carro: " + carro.getAno());

        // Usando getters para acessar valores encapsulados de Moto
        System.out.println("\nMarca da moto: " + moto.getMarca());
        System.out.println("Modelo da moto: " + moto.getModelo());
        System.out.println("Ano da moto: " + moto.getAno());

        
        carro.setMarca("Volkswagen");


        // Tentando alterar com um valor inválido (demonstrando validação)
        moto.setAno(1850);  // Ano inválido, vai exibir a mensagem de erro
        
        // Usando polimorfismo para exibir os detalhes de cada veículo
        System.out.println("\nDetalhes do carro:");
        carro.exibirDetalhes();  // Chama o método exibirDetalhes() da classe Carro

        System.out.println("\nDetalhes da moto:");
        moto.exibirDetalhes();  // Chama o método exibirDetalhes() da classe Moto
    }
    
}
