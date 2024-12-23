CREATE DATABASE Selects_2608;
USE Selects_2608;
CREATE TABLE products (
  id numeric PRIMARY KEY,
  nome varchar(50),
  amount numeric,
  price numeric(7,2)
);

INSERT INTO products (id, nome, amount, price)
VALUES
  (1,	'Two-doors wardrobe',	100,	800),
  (2,	'Dining table',	1000,	560),
  (3,	'Towel holder',	10000,	25.50),
  (4,	'Computer desk',	350,	320.50),
  (5,	'Chair',	3000,	210.64),
  (6,	'Single bed',	750,	460);
  
SELECT MAX(price), MIN(price) FROM products;

DROP TABLE products;
DROP DATABASE Selects_2608;