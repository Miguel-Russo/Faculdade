CREATE DATABASE Atividade_Trigger;
USE Atividade_Trigger;
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

CREATE TRIGGER atualizar_salario_ao_inserir_dependente
AFTER INSERT ON Dependente
FOR EACH ROW
BEGIN
    UPDATE Empregado
    SET Salario = Salario * 1.1
    WHERE Cod_Empregado = NEW.Cod_Empregado;
END $$

DELIMITER ;

DELIMITER $$

CREATE TRIGGER diminuir_salario_ao_excluir_dependente
AFTER DELETE ON Dependente
FOR EACH ROW
BEGIN
    UPDATE Empregado
    SET Salario = Salario * 0.9
    WHERE Cod_Empregado = OLD.Cod_Empregado;
END $$

DELIMITER ;

DELIMITER $$

CREATE TRIGGER impedir_exclusao_depto_com_funcionarios
AFTER DELETE ON Depto
FOR EACH ROW
BEGIN
    DECLARE qtd_funcionarios INT;

    SELECT COUNT(*) INTO qtd_funcionarios
    FROM Empregado
    WHERE Cod_Depto = OLD.Cod_Depto;

    IF qtd_funcionarios > 0 THEN
        SIGNAL SQLSTATE '45000' 
        SET MESSAGE_TEXT = 'Não é possível excluir um departamento com funcionários.';
    END IF;
END $$

DELIMITER ;

DELIMITER $$

CREATE TRIGGER registrar_historico_alteracao_salario
AFTER UPDATE ON Empregado
FOR EACH ROW
BEGIN
    -- Esta trigger registra um histórico das alterações de salário dos funcionários,
    -- incluindo o valor antigo, o novo valor, a data da alteração e o usuário que realizou a alteração.

    INSERT INTO Historico_Salario (Cod_Empregado, Salario_Anterior, Salario_Novo, Data_Alteracao, Usuario_Alteracao) VALUES 
    (OLD.Cod_Empregado, OLD.Salario, NEW.Salario, NOW(), CURRENT_USER());
END $$

DELIMITER ;