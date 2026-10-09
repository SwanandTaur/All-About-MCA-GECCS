
SELECT name FROM sys.databases;

SELECT name FROM sys.tables;

-- Creating the Item table.

CREATE TABLE Item(
	ItemCode CHAR(2) PRIMARY KEY,
	ItemName VARCHAR(20) NOT NULL,
	UnitMeasure VARCHAR(10) CHECK (UnitMeasure IN ('Mtr','Kg','Tonn','Ltr','Nos')),
	Rate FLOAT CHECK (Rate>0),
	Stock FLOAT,
	Max_Stock FLOAT,
	Min_Stock FLOAT,
	DrawingSp VARCHAR(10) DEFAULT 'DR1000',
	CHECK (Stock BETWEEN Min_Stock AND Max_Stock)
);

SELECT * FROM Item;

-- Creating the Trans table.

CREATE TABLE Trans(
	Ttype CHAR(2) CHECK (TType IN ('R1','R2','I1','I2')),
	TNO VARCHAR(4) PRIMARY KEY,
	TDate DATE,
	TItemCode CHAR(2) REFERENCES Item(ItemCode),
	TRate FLOAT,
	TQty FLOAT,
	TDisc FLOAT
);

SELECT * FROM Trans;

-- Using ALTER TABLE command

-- A. Add a new column to the Item table.

ALTER TABLE Item ADD SupplierName VARCHAR(25);

-- B. Modify datatype of the column.

SELECT name FROM sys.check_constraints WHERE parent_object_id = OBJECT_ID('item');

ALTER TABLE Item DROP CONSTRAINT CK__Item__Rate__05F8DC4F;

EXEC('ALTER TABLE Item ALTER COLUMN Rate DECIMAL(10,2)');

ALTER TABLE Item ADD CONSTRAINT CK__Item__Rate__05F8DC4F CHECK (Rate > 0);

-- C. Rename  a column (syntax may vary by SQL dialect);

EXEC sp_rename 'Item.DrawingSp','DrawingSpec','column';

select * from Item;

-- D. Drop a column from the table.

ALTER TABLE Trans DROP COLUMN TDisc;

-- Using truncate command

TRUNCATE TABLE Trans;

select * from Trans;

-- Using drop command

DROP TABLE Trans; 
