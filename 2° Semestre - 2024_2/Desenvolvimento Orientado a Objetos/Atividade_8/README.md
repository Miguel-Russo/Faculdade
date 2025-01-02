# ☕ Desenvolvimento Orientado a Objetos - Atividade 8

Bem-vindo(a)! Este repositório contém a solução para a Atividade 8 de Desenvolvimento Orientado a Objetos em Java, acompanhada de sua descrição.  

Cada problema inclui um link direto para o código correspondente. 

---

## 📄 Java - Atividade 8
  
**Descrição:**

Este programa implementa um sistema para gerenciamento de livros em uma biblioteca, explorando conceitos fundamentais de Programação Orientada a Objetos (POO), como polimorfismo dinâmico e estático, herança e encapsulamento.

---

**Funcionalidades:**

-  Hierarquia de Classes:

    -  A classe base ```Livro``` representa informações comuns a todos os livros, como título, autor e ano de publicação.

    -  As subclasses ```LivroFiccao``` e ```LivroTecnico``` herdam da classe ```Livro``` e adicionam características específicas, como gênero e área de estudo.

-  Polimorfismo Dinâmico:

    -  O método ```exibirDetalhes()``` é sobrescrito nas subclasses para exibir informações específicas de cada tipo de livro.

-  Polimorfismo Estático:

    -  A classe Biblioteca implementa sobrecarga do método ```calcularMulta()``` para calcular multas de diferentes formas:

        Por número de dias atrasados.

        Por número de semanas atrasadas e valor fixo por semana.

        Baseado no ano de publicação e uma taxa específica.

-  Encapsulamento:

    -  Os atributos das classes são privados e acessados/modificados por métodos getters e setters.

---

**Instruções de Uso:**

-  O programa cria dois livros, um de ficção e outro técnico, utilizando seus respectivos construtores.

-  Os detalhes dos livros são exibidos no console, demonstrando o polimorfismo dinâmico.
  
-  Exemplos de cálculo de multas são realizados, demonstrando o polimorfismo estático através de métodos sobrecarregados.

-  A funcionalidade de encapsulamento é exemplificada ao alterar o ano de publicação de um dos livros utilizando métodos setters.

---

🔗 [Código](https://github.com/Miguel-Russo/Faculdade/tree/main/2%C2%B0%20Semestre%20-%202024_2/Desenvolvimento%20Orientado%20a%20Objetos/Atividade_8)
