CREATE DATABASE Selects_2610;
USE Selects_2610;
CREATE TABLE products (
    id NUMERIC PRIMARY KEY,
    nome VARCHAR(255),
    amount NUMERIC,
    price NUMERIC
);

INSERT INTO products (id, nome, amount, price)
VALUES
    (1, 'Two-doors wardrobe', 100, 800),
    (2, 'Dining table', 1000, 560),
    (3, 'Towel holder', 10000, 25),
    (4, 'Computer desk', 350, 320),
    (5, 'Chair', 3000, 210),
    (6, 'Single bed', 750, 460);

SELECT ROUND(AVG(price), 2) FROM products;

DROP TABLE products;
DROP DATABASE Selects_2610;