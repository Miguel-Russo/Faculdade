CREATE DATABASE Atividade_Procedure;
USE Atividade_Procedure;
CREATE TABLE Depto
(
Cod_Depto INT PRIMARY KEY,
Nome VARCHAR(50)
);

CREATE TABLE Empregado
(
Cod_Empregado INT PRIMARY KEY,
Nome VARCHAR(50),
Dt_Nascimento DATE,
Sexo CHAR(1),
Dt_Admissao DATE,
Est_Civil CHAR(1),
Salario NUMERIC(10,2),
Cod_Depto INT,
FOREIGN KEY (Cod_Depto) REFERENCES Depto(Cod_depto)
);

CREATE TABLE Dependente
(
Cod_Dependente INT,
Cod_Empregado INT,
PRIMARY KEY (Cod_Dependente, Cod_Empregado),
Nome VARCHAR(50),
Dt_Nascimento DATE,
Sexo CHAR(1)
);

INSERT INTO Depto(Cod_Depto, Nome) VALUES
(1, 'TI'),
(2, 'RH');

INSERT INTO Empregado(Cod_Empregado, Cod_Depto, Nome, Dt_Nascimento, Sexo, Dt_Admissao, Est_Civil, Salario) VALUES
(01, 1, 'José', '1990-09-10', 'M', '2010-08-02', 'S', 1990.00),
(02, 1, 'Maria', '1990-05-12', 'F', '2010-04-01', 'S', 1990.00),
(03, 2, 'Joana', '1985-07-09', 'F', '2009-11-04', 'S', 2100.00),
(04, 2, 'Mario', '1980-01-22', 'M', '2010-09-25', 'C', 2190.00);

DELIMITER $$
CREATE PROCEDURE Salarios(IN ID_Depto INT)
BEGIN
	DECLARE Soma_Salario NUMERIC(10,2);
    DECLARE Media_Salario NUMERIC(10,2);
    DECLARE Maior_Salario NUMERIC(10,2);
    DECLARE Menor_Salario NUMERIC(10,2);
    
	SELECT SUM(Salario) INTO Soma_Salario 
	FROM Empregado 
	WHERE Cod_Depto = ID_Depto;
    
	SELECT AVG(Salario) INTO Media_Salario
    FROM Empregado
    WHERE Cod_Depto = ID_Depto;
    
    SELECT MAX(Salario) INTO Maior_Salario
    FROM Empregado
    WHERE Cod_Depto = ID_Depto;
    
    SELECT MIN(Salario) INTO Menor_Salario
    FROM Empregado
    WHERE Cod_Depto = ID_Depto;
    
    SELECT Soma_Salario, Media_Salario, Maior_Salario, Menor_Salario;
END
DELIMITER ;

DELIMITER $$
CREATE PROCEDURE Sexos(IN Nome_Depto VARCHAR(50))
BEGIN
	DECLARE Qtd_Homens INT;
    DECLARE Qtd_Mulheres INT;
    
	SELECT COUNT(CASE WHEN sexo = 'M' THEN 1 END) INTO  qtd_masculino, 
		COUNT(CASE WHEN sexo = 'F' THEN 1 END) INTO qtd_feminino FROM Empregado e
	INNER JOIN Depto d ON e.cod_depto = d.cod_depto 
	WHERE d.nome = departamento_nome; 
    
	SELECT qtd_masculino, qtd_feminino; 
END 
DELIMITER ;

DELIMITER $$
CREATE PROCEDURE Inserir_Infos(IN Codigo_Departamento, IN Nome_Departamento)
BEGIN
	INSERT INTO Depto(Cod_Depto, Nome) VALUES
    (Codigo_Departamento, Nome_Departamento);
END 
DELIMITER ;

DELIMITER $$
CREATE PROCEDURE Aumento_Salario_Mulheres()
BEGIN 
 UPDATE Empregado 
 SET salario = salario * 1.05 
 WHERE sexo = 'F'; 
END $$ 
DELIMITER ;

DELIMITER $$ 
CREATE PROCEDURE Aumentar_Salario_Homens (IN Aumento_Percentual DECIMAL(5,2)) 
BEGIN 
	UPDATE Empregado
    SET Salario = Salario * (1 + Aumento_Percentual / 100)
    WHERE Sexo = 'M'; 
END $$
DELIMITER ; 

CREATE TABLE Sexo ( 
	id INT PRIMARY KEY AUTO_INCREMENT, 
	descricao VARCHAR(20) NOT NULL 
);

ALTER TABLE Empregado 
	DROP COLUMN sexo, 
	ADD COLUMN id_sexo INT, 
	ADD CONSTRAINT FK_Sexo_Empregado FOREIGN KEY (id_sexo)  REFERENCES Sexo(id);
    
CREATE TABLE EstadoCivil ( 
 id INT PRIMARY KEY AUTO_INCREMENT, 
 descricao VARCHAR(20) NOT NULL 
);

ALTER TABLE Empregado 
 ADD COLUMN id_estado_civil INT,
 ADD CONSTRAINT FK_EstadoCivil_Empregado FOREIGN KEY  (id_estado_civil) REFERENCES EstadoCivil(id);

DELIMITER $$

CREATE PROCEDURE listar_funcionarios_por_departamento(IN p_nome_depto VARCHAR(50))
BEGIN

    SELECT 
        e.Nome AS Funcionário,
        d.Nome AS Departamento
    FROM 
        Empregado e
    INNER JOIN Depto d ON e.Cod_Depto = d.Cod_Depto
    WHERE
        d.Nome = p_nome_depto
    ORDER BY
        e.Nome;
END $$

DELIMITER ;