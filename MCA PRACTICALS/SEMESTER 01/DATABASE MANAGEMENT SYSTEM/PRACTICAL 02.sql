
--1. Inserting Records into Item Table

INSERT INTO Item(ItemCode, ItemName,UnitMeasure,Rate,Stock,Max_Stock,Min_Stock)
VALUES('I1','Copper Wire','Mtr',120.50,200,500,50);

INSERT INTO Item(ItemCode,ItemName,UnitMeasure,Rate,Stock,Max_Stock,Min_Stock)
VALUES('I2','Steel Rod','Kg',95.00,100,300,25);

--2.Inserting Records into Trans Table

CREATE TABLE Trans(
	TType CHAR (2) CHECK (TType IN ('R1','R2','I1','I2')),
	TNO VARCHAR(4) PRIMARY KEY,
	TDate DATE,
	TItemCode CHAR(2) REFERENCES Item(ItemCode),
	TRate FLOAT,
	TQty FLOAT,
	TDisc FLOAT
);

INSERT INTO Trans(TType,TNO,TDate,TItemCode,TRate,TQty,TDisc)
VALUES('R1','T001','2025-10-05','I1',120.50,50,2);

INSERT INTO Trans(TType,TNO,TDate,TItemCode,TRate,TQty,TDisc)
VALUES('R2','T002','2025-10-06','I2',95.00,20,2);

--3.Rrtriving Data using SELECT Command

--A.Display all records from Item Table:

SELECT * FROM Item;

--B.Display ItemCode,ItemName and Rate only:

SELECT ItemCode,ItemName, Rate FROM Item;

--C.Display all transactions of type 'R1':

SELECT * 
FROM Trans 
WHERE TType = 'R1';

--D. Display ItemName and Stock where Stock<150

SELECT ItemName,Stock
FROM Item
WHERE Stock<150;

--E.Display combined details from both tables using a simple join:

SELECT 
	T.TNO,T.TDate,I.ItemName,T.TQty,T.TRate,T.TDisc
FROM
	Item I, Trans T
WHERE
	I.ItemCode = T.TItemCode;

--4.Updating Data Using UPDATE Command

--A. Update Rate of Item 'I2' to 105:
 
UPDATE Item SET Rate = 105 WHERE ItemCode = 'I2';

SELECT * FROM Item;

--B. Increse Stock by 50 for item 'I1':

UPDATE Item SET Stock = Stock + 50 WHERE ItemCode = 'I2';

SELECT * FROM Item;

--C. Update discount of transaction 'T002' to 3%:

UPDATE Trans SET TDisc =3  WHERE TNO = 'T002';

SELECT * FROM Trans;


-- 5. Deleting Records Using DELETE Command

--A. Delete a record from Trans Table

DELETE FROM Trans WHERE TNO = 'T001';

--B. Delete items whose stock is below minimum level:

DELETE FROM Item WHERE Stock < Min_Stock;

