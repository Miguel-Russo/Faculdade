CREATE DATABASE Selects_2613;
USE Selects_2613;
CREATE TABLE prices (
  id numeric PRIMARY KEY,
  categorie varchar(50),
  valor numeric
);


CREATE TABLE movies (
  id numeric PRIMARY KEY,
  nome varchar(50),
  id_prices numeric REFERENCES prices (id)
);

INSERT INTO prices (id , categorie, valor)
VALUES
  (1,	'Releases',	3.00),
  (2,	'Bronze Seal',	2.00),
  (3,	'Silver Seal',	2.00),
  (4,	'Gold Seal',	3.00),
  (5,	'Promotion',	1.00);
  
INSERT INTO movies (id, nome, id_prices)
VALUES
  (1,	'Batman',	3),
  (2,	'The Battle of the Dark River',	3),
  (3,	'White Duck',	5),
  (4,	'Breaking Barriers',	4),
  (5,	'The Two Hours',	2);

SELECT m.id, m.nome FROM movies AS m
LEFT JOIN prices AS p ON m.id_prices = p.id
WHERE p.valor < 2.00;

DROP TABLE movies, prices;
DROP DATABASE Selects_2613;