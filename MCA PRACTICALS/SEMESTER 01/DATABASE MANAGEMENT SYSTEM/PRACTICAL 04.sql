

INSERT INTO Items VALUES(104,'Speaker',2200.00,'Audio');

INSERT INTO Orders VALUES(1003,3,'2026-10-12');

INSERT INTO Order_Details VALUES (1003,104,2,0);

--1. Retrive all customers from Pune

SELECT * FROM Customer
WHERE City = 'Pune';

--2. Display all items whose price is greater than 1000 and less than 5000

SELECT * 
FROM Items
WHERE Price BETWEEN 1000 AND 5000;

--3. Display all unique categories of items

SELECT DISTINCT Category
FROM Items;

--4. Display all items sorted by price in descending order

SELECT ItemName, Price
FROM Items 
ORDER BY Price DESC;

--5. Find total quantity sold of each item

SELECT i.ItemName , SUM(od.Quantity) AS TotalQtySold 
FROM Items i
JOIN Order_Details od ON i.ItemId = od.ItemId
GROUP BY i.ItemName;

--6. Display total sales amount for each customer

SELECT CustName, SUM(i.Price * od.Quantity - od.Discount) AS TotalPurchase
FROM Customer c
JOIN Orders o ON c.CustId =o.CustId
JOIN Order_Details od ON o.OrderId = od.OrderId
JOIN Items i ON od.ItemId = i.ItemId
GROUP BY c.CustName;

--7. Display customers whose total purchase exceeds 5000 rs

SELECT CustName, SUM(i.Price * od.Quantity - od.Discount) AS TotalPurchase
FROM Customer c
JOIN Orders o ON c.CustId = o.CustId
JOIN Order_Details od ON o.OrderId = od.OrderId
JOIN Items i ON od.ItemId = i.ItemId
GROUP BY c.CustName
HAVING SUM(i.Price * od.Quantity - od.Discount) > 5000;

--8. Retrive order details where discount is not zero

SELECT o.OrderId, c.CustName, i.ItemName, od.Discount 
FROM Orders o
JOIN Customer c ON o.CustId = c.CustId
JOIN Order_Details od ON o.OrderId = od.OrderId
JOIN Items i ON od.ItemId = i.ItemId
WHERE od.Discount <> 0;

--9. Display items along with their category, sorted by category and price

SELECT ItemName, Category, Price
FROM Items 
ORDER BY Category ASC, Price DESC;

--10. Display number of orders placed by each customer

SELECT c.CustName, COUNT(o.OrderId) AS TotalOrders
FROM Customer c
JOIN Orders o ON c.CustId = o.CustId
GROUP BY c.CustName;
