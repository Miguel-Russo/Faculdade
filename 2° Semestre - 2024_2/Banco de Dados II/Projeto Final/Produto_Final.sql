-- Criação do banco de dados
CREATE DATABASE livraria;
USE livraria;

-- Criação das tabelas
CREATE TABLE editora (
    CNPJ VARCHAR(14) PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    dt_fundacao DATE
);

CREATE TABLE autor (
    CPF VARCHAR(11) PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    dt_nascimento DATE,
    nacionalidade VARCHAR(50)
);

CREATE TABLE genero (
    id_genero INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL
);

CREATE TABLE livro (
    ISBN VARCHAR(13) PRIMARY KEY,
    titulo VARCHAR(100) NOT NULL,
    dt_publicacao DATE,
    preco DECIMAL(10, 2)
);

CREATE TABLE livro_edicao (
    ISBN VARCHAR(13),
    CNPJ VARCHAR(14),
    edicao_numero INT,
    ano_publiacao YEAR,
    PRIMARY KEY (ISBN, CNPJ),
    FOREIGN KEY (ISBN) REFERENCES livro(ISBN),
    FOREIGN KEY (CNPJ) REFERENCES editora(CNPJ)
);

CREATE TABLE livro_autor (
    ISBN VARCHAR(13),
    CPF VARCHAR(11),
    Nome_Autor VARCHAR(50),
    PRIMARY KEY (ISBN, CPF),
    FOREIGN KEY (ISBN) REFERENCES livro(ISBN),
    FOREIGN KEY (CPF) REFERENCES autor(CPF)
);

CREATE TABLE livro_genero (
    ISBN VARCHAR(13),
    id_genero INT,
    cod INT,
    PRIMARY KEY (ISBN, id_genero),
    FOREIGN KEY (ISBN) REFERENCES livro(ISBN),
    FOREIGN KEY (id_genero) REFERENCES genero(id_genero)
);

CREATE TABLE usuario (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    senha VARCHAR(255) NOT NULL
);

CREATE TABLE emprestimo (
    id INT PRIMARY KEY AUTO_INCREMENT,
    ISBN VARCHAR(13),
    usuario_id INT,
    data_emprestimo DATE NOT NULL,
    data_devolucao DATE,
    FOREIGN KEY (ISBN) REFERENCES livro(ISBN),
    FOREIGN KEY (usuario_id) REFERENCES usuario(id)
);

-- Inserção dos registros

INSERT INTO editora (CNPJ, nome, dt_fundacao) VALUES
('12345678000195', 'Editora Alpha', '2000-05-10'),
('98765432000100', 'Editora Beta', '2010-11-15'),
('12345678000196', 'Editora Gamma', '2015-03-15'),
('12345678000197', 'Editora Delta', '2018-07-20'),
('12345678000198', 'Editora Epsilon', '2020-08-30');

INSERT INTO autor (CPF, nome, dt_nascimento, nacionalidade) VALUES
('12345678901', 'João da Silva', '1980-01-20', 'Brasileiro'),
('98765432100', 'Maria Oliveira', '1975-07-30', 'Brasileira'),
('11122233344', 'Lucas Pereira', '1990-12-01', 'Brasileiro'),
('22233344455', 'Ana Costa', '1985-04-15', 'Brasileira'),
('33344455566', 'Paula Santos', '1992-03-25', 'Brasileira');

INSERT INTO genero (nome) VALUES
('Ficção Científica'),
('Romance'),
('Terror'),
('Fantasia'),
('Mistério');

INSERT INTO livro (ISBN, titulo, dt_publicacao, preco) VALUES
('9781234567897', 'O Guia do Mochileiro das Galáxias', '1979-10-12', 39.90),
('9789876543210', 'O Senhor dos Anéis', '1954-07-29', 49.90),
('9786543210987', 'A Estrada da Noite', '2003-05-01', 29.90),
('9789876541234', 'O Hobbit', '1937-09-21', 35.00),
('9789876545678', 'A Origem', '2012-07-15', 45.00);

INSERT INTO livro_edicao (ISBN, CNPJ, edicao_numero, ano_publiacao) VALUES
('9781234567897', '12345678000195', 1, 1979),
('9789876543210', '98765432000100', 3, 2005),
('9786543210987', '12345678000196', 1, 2003),
('9789876541234', '12345678000197', 2, 2010),
('9789876545678', '12345678000198', 1, 2012);

INSERT INTO livro_autor (ISBN, CPF, Nome_Autor) VALUES
('9781234567897', '12345678901', 'Guilherme'),
('9789876543210', '98765432100', 'Marina'),
('9786543210987', '11122233344', 'Julio'),
('9789876541234', '22233344455', 'Duda'),
('9789876545678', '33344455566', 'Tiago');

INSERT INTO livro_genero (ISBN, id_genero, cod) VALUES
('9781234567897', 1, 0),
('9789876543210', 2, 1),
('9786543210987', 3, 2),
('9789876541234', 4, 3),
('9789876545678', 5, 4);

INSERT INTO usuario (nome, email, senha) VALUES
('Carlos Mendes', 'carlos@gmail.com', 'senha123'),
('Ana Souza', 'ana@gmail.com', 'senha456'),
('Juliana Silva', 'juliana@gmail.com', 'senha789'),
('Ricardo Lima', 'ricardo@gmail.com', 'senha012'),
('Fernanda Alves', 'fernanda@gmail.com', 'senha345');

INSERT INTO emprestimo (ISBN, usuario_id, data_emprestimo, data_devolucao) VALUES
('9781234567897', 1, CURDATE(), NULL),
('9789876543210', 2, CURDATE(), NULL),
('9786543210987', 3, CURDATE(), NULL),
('9789876541234', 4, CURDATE(), NULL),
('9789876545678', 5, CURDATE(), NULL);

-- Alteração dos registros
UPDATE editora
SET nome = 'Editora Alpha Atualizada'
WHERE CNPJ = '12345678000195';

UPDATE autor
SET nome = 'João da Silva Atualizado'
WHERE CPF = '12345678901';

UPDATE genero
SET nome = 'Ficção e Aventura'
WHERE id_genero = 1;

UPDATE livro
SET preco = 42.00
WHERE ISBN = '9781234567897';

UPDATE livro_edicao
SET edicao_numero = 2
WHERE ISBN = '9789876545678';

UPDATE livro_autor
SET Nome_Autor = 'Mike'
WHERE CPF = '11122233344';

UPDATE livro_genero
SET cod = 9
WHERE id_genero = 5;

UPDATE usuario
SET nome = 'Carlos Mendes Atualizado'
WHERE id = 1;

UPDATE emprestimo
SET data_devolucao = CURDATE()
WHERE id = 1;

-- Exclusão dos registros
DELETE FROM livro_edicao WHERE CNPJ = '12345678000195';
DELETE FROM editora WHERE CNPJ = '12345678000195';
DELETE FROM livro_autor WHERE CPF = '98765432100';
DELETE FROM autor WHERE CPF = '98765432100';
DELETE FROM livro_genero WHERE id_genero = 2;
DELETE FROM genero WHERE id_genero = 2;
DELETE FROM emprestimo WHERE ISBN = '9789876543210';
DELETE FROM usuario WHERE id = 2;
DELETE FROM livro_edicao WHERE ISBN = '9789876543210';
DELETE FROM livro_autor WHERE ISBN = '9789876543210';
DELETE FROM livro_genero WHERE ISBN = '9789876543210';
DELETE FROM livro WHERE ISBN = '9789876543210';



-- Alteração das estruturas
ALTER TABLE livro ADD COLUMN descricao TEXT;

-- Conversão dos dados
UPDATE livro
SET descricao = 'Livro de ficção científica humorada e intergalática.'
WHERE ISBN = '9781234567897';

-- Consultas envolvendo uma tabela
SELECT * FROM editora WHERE dt_fundacao > '2010-01-01';
SELECT * FROM autor WHERE nacionalidade = 'Brasileiro';
SELECT * FROM genero WHERE nome LIKE '%Ficção%';
SELECT * FROM livro WHERE preco > 40.00;
SELECT * FROM usuario WHERE id > 2;

-- Consultas envolvendo no mínimo duas tabelas
SELECT l.titulo, a.nome FROM livro l
JOIN livro_autor la ON l.ISBN = la.ISBN
JOIN autor a ON la.CPF = a.CPF;

SELECT u.nome, e.ISBN, e.data_emprestimo FROM usuario u
JOIN emprestimo e ON u.id = e.usuario_id
WHERE u.id < 4;

SELECT l.titulo, g.nome FROM livro l
JOIN livro_genero lg ON l.ISBN = lg.ISBN
JOIN genero g ON lg.id_genero = g.id_genero;

SELECT e.nome, l.titulo, le.edicao_numero FROM editora e
JOIN livro_edicao le ON e.CNPJ = le.CNPJ
JOIN livro l ON le.ISBN = l.ISBN;

SELECT a.nome, l.titulo FROM autor a
JOIN livro_autor la ON a.CPF = la.CPF
JOIN livro l ON la.ISBN = l.ISBN
WHERE l.titulo LIKE 'O%';

-- Criação de uma função
DELIMITER //
CREATE FUNCTION calcular_preco_final(ISBN VARCHAR(13))
RETURNS DECIMAL(10, 2)
BEGIN
    DECLARE preco DECIMAL(10, 2);
    SELECT preco INTO preco
    FROM livro
    WHERE ISBN = ISBN;
    RETURN preco * 1.10; -- 10% de aumento
END //
DELIMITER ;

-- Criação e execução de uma procedure
DELIMITER //
CREATE PROCEDURE listar_livros_por_preco(maior_preco DECIMAL(10, 2))
BEGIN
    SELECT * FROM livro WHERE preco > maior_preco;
END //
DELIMITER ;

-- Execução da procedure
CALL listar_livros_por_preco(40.00);

-- Criação de um gatilho
DELIMITER //
CREATE TRIGGER antes_de_emprestimo
BEFORE INSERT ON emprestimo
FOR EACH ROW
BEGIN
    IF NEW.data_emprestimo > CURDATE() THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Data de empréstimo não pode ser no futuro.';
    END IF;
END //
DELIMITER ;

-- Deleção das tabelas e banco de dados

DROP TABLE livro_edicao;
DROP TABLE editora;
DROP TABLE livro_autor;
DROP TABLE autor;
DROP TABLE livro_genero;
DROP TABLE genero;
DROP TABLE emprestimo;
DROP TABLE usuario;
DROP TABLE livro;
DROP DATABASE livraria;