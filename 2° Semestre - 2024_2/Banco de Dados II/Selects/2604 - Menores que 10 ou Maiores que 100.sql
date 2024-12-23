CREATE DATABASE Selects_2604;
USE Selects_2604;
CREATE TABLE products (
  id NUMERIC PRIMARY KEY,
  nome CHARACTER VARYING (255),
  amount NUMERIC,
  price NUMERIC
);

INSERT INTO products (id, nome, amount, price)
VALUES 
  (1,	'Two-door wardrobe',	100,	80),
  (2,	'Dining table',	1000,	560),
  (3,	'Towel holder',	10000,	5),
  (4,	'Computer desk',	350,	100),
  (5,	'Chair',	3000,	210),
  (6,	'Single bed',	750,	99);
  
SELECT id, nome FROM products
WHERE price < 10 OR price > 100;

 DROP TABLE products;
 DROP DATABASE Selects_2604;