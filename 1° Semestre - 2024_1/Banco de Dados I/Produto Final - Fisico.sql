CREATE DATABASE Fisico;
USE Fisico;
CREATE TABLE Clube 
(
    id_clube INT PRIMARY KEY,
    Data_de_Fundacao DATE,
    Diretor VARCHAR(25),
    Nome VARCHAR(25)
);

CREATE TABLE Jogador 
(
    id_jogador INT PRIMARY KEY,
    CPF VARCHAR(15),
    id_clube INT,
    RG VARCHAR(15),
    Data_de_Nascimento DATE,
    Nome VARCHAR(25),
    FOREIGN KEY (id_clube) REFERENCES Clube(id_clube)
); 

CREATE TABLE Treino 
( 
 id_treino INT PRIMARY KEY,  
 Descricao_do_Treino VARCHAR(25),  
 Tempo_de_Duracao_Horas FLOAT,  
 Nome VARCHAR(25)
);

CREATE TABLE Jogador_Treino 
( 
 id_jogador INT,
 id_treino INT,
 PRIMARY KEY (id_jogador, id_treino),
 FOREIGN KEY (id_jogador) REFERENCES Jogador(id_jogador),
 FOREIGN KEY (id_treino) REFERENCES Treino(id_treino)
); 

INSERT INTO Clube (id_clube, Data_de_Fundacao, Diretor, Nome) VALUES
(1, '1914-01-10', 'André', 'Corinthians'),
(2, '1918-09-05', 'Luis', 'Vasco'),
(3, '1913-10-09', 'Fernando', 'Palmeiras'),
(4, '1918-10-05', 'Ravi', 'São Paulo'),
(5, '1905-11-02', 'Bento', 'Santos');

INSERT INTO Jogador (id_jogador, CPF, id_clube, RG, Data_de_Nascimento, Nome) VALUES
(1, '12345678901', 1, '123456789', '2000-01-01', 'Miguel'),
(2, '98765432109', 2, '987654321', '2003-02-05', 'José'),
(3, '55588844411', 3, '555888444', '1999-03-06', 'João'),
(4, '24680246802', 4, '246802468', '2002-04-07', 'Mario'),
(5, '13579135791', 5, '135791357', '2001-05-08', 'Paulo');

INSERT INTO Treino (id_treino, Descricao_do_Treino, Tempo_de_Duracao_Horas, Nome) VALUES
(1, 'Leve', 1.00, 'HIIT'),
(2, 'Leve Médio', 1.30, 'Força'),
(3, 'Moderado', 2.00,'Funcional'),
(4, 'Instenso Médio', 2.30, 'Cardio'),
(5, 'Intenso', 3.00, 'Físico');

INSERT INTO Jogador_Treino (id_jogador, id_treino) VALUES
(1, 1),
(2, 2),
(3, 3),
(4, 4),
(5, 5);

SELECT * FROM Clube;
SELECT * FROM Jogador;
SELECT * FROM Treino;
SELECT * FROM Jogador_Treino;

DROP TABLE Jogador_Treino;
DROP TABLE Jogador;
DROP TABLE Clube;
DROP TABLE Treino;
DROP DATABASE Fisico;
