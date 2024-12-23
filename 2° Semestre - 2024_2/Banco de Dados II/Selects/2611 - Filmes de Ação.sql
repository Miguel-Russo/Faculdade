CREATE DATABASE Selects_2611;
USE Selects_2611;
CREATE TABLE genres (
  id numeric PRIMARY KEY,
  descricao varchar(50)
);

CREATE TABLE movies (
  id numeric PRIMARY KEY,
  nome varchar(50),
  id_genres numeric REFERENCES genres (id)
);

INSERT INTO genres (id, descricao)
VALUES
  (1,	'Animation'),
  (2,	'Horror'),
  (3,	'Action'),
  (4,	'Drama'),
  (5,	'Comedy');
  
INSERT INTO movies (id, nome, id_genres)
VALUES
  (1,	'Batman',	3),
  (2,	'The Battle of the Dark River',	3),
  (3,	'White Duck',	1),
  (4,	'Breaking Barriers',	4),
  (5,	'The Two Hours',	2);

SELECT m.id, m.nome FROM movies AS m
LEFT JOIN genres AS g ON m.id_genres = g.id
WHERE g.descricao = 'Action';

DROP TABLE movies, genres;
DROP DATABASE Selects_2611;