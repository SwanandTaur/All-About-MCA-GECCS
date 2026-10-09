
--Create Table : Customer 

CREATE TABLE Customer(
	CustId INT PRIMARY KEY,
	CustName VARCHAR(40) NOT NULL,
	City VARCHAR(30) DEFAULT 'Aurangabad',
	ContactNo CHAR(10) UNIQUE CHECK(LEN(ContactNo) =10)
);

--2. Create table : Items

CREATE TABLE Items(
	ItemId INT PRIMARY KEY,
	ItemName VARCHAR(30) NOT NULL,
	Price DECIMAL(10,2) CHECK(Price>0),
	Category VARCHAR(25) DEFAULT 'Electronics'
);


--3. Create table : Orders

CREATE TABLE Orders(
	OrderId INT PRIMARY KEY,
	CustId INT NOT NULL,
	OrderDate DATE,
	FOREIGN KEY (CustId) REFERENCES Customer(CustId)
		ON DELETE CASCADE
		ON UPDATE CASCADE
);

--4. Create table Order_Details

CREATE TABLE Order_Details(
	OrderId INT,
	ItemId INT,
	Quantity INT CHECK (Quantity > 0),
	Discount DECIMAL(5,2) DEFAULT 0,
	PRIMARY KEY (OrderId,ItemId),
	FOREIGN KEY (OrderId) REFERENCES Orders(OrderId),
	FOREIGN KEY (ItemId) REFERENCES Items(ItemId)
);

--5. Insert Valid Records\

INSERT INTO Customer VALUES(1,'Rahul Sharma',DEFAULT,'9876543210'),
	(2,'Sneha Patil','Pune','9823456789'),
	(3,'Amit Deshmukh',DEFAULT,'9991122334');

INSERT INTO Items VALUES (101,'Keyboard',850.00,'Computer'),
	(102,'Mouse',450.00,'Computer'),
	(103,'Moniter',12500.00,'Display');

INSERT INTO Orders VALUES(1001,1,'2026-10-10'),
	(1002,2,'2026-10-11');

INSERT INTO Order_Details VALUES(1001,101,2,5.0),
	(1001,102,1,0),
	(1002,103,1,10.0);

--6. Demonstrate Constraints Violations

--A. Check Constraints Violation:

INSERT INTO Items VALUES(104,'USB Cable',-100.00,'Accessory');
--Error: Check constraint violated (Price > 0)

--B. Unique Constraints Violation:

INSERT INTO Customer VALUES (4,'Rohit Jadhav','Pune','9876543210');
--Error: No matching OrderId or ItemId exists.

--C. Foreign Key Violation:

INSERT INTO Order_Details VALUES(1005,105,2,0);
--Error: No matching OrderId or ItemId exists.

--7. Queries Using Constraints

--A. Display all orders with customer and Items details

SELECT o.OrderId, c.CustName, od.Quantity, i.Price,
	(i.Price * od.Quantity) - od.Discount AS TotalAmount
FROM Customer c
JOIN Orders o ON c.CustId = o.CustId
JOIN Order_Details od ON o.OrderId = od.OrderId
JOIN Items i ON od.ItemId = i.ItemId;

--B. Find total purchase amount by each customer

SELECT c.CustName,
	SUM((i.Price * od.Quantity) - od.Discount) AS TotalPurchase
FROM Customer c
JOIN Orders o ON c.CustId = o.CustId
JOIN Order_Details od ON  o.OrderId = od.OrderId
JOIN Items i ON od.ItemId = i.ItemId
GROUP BY c.CustName
HAVING SUM((i.Price * od.Quantity) - od.Discount) > 1000;

--C. Display all customers who placed orders in October 2026

SELECT DISTINCT c.CustName, c.City 
FROM Customer c
JOIN Orders o ON c.CustId = o.CustId
WHERE MONTH(o.OrderDate) = 10
AND YEAR(o.OrderDate) = 2026;




	