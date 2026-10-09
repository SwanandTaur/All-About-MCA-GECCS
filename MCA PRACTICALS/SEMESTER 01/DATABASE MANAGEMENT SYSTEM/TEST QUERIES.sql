USE AdventureWorks2025;


--Q1.
SELECT COUNT(ProductID) AS Total_Products
FROM Production.Product;

--Q2.
SELECT MAX(ListPrice) AS Max_Price,MIN(ListPrice) AS Min_Price
FROM Production.Product;

--Q3.
SELECT SUM(LineTotal) AS Total_Revenue
FROM Sales.SalesOrderDetail;

--Q4.
SELECT AVG(UnitPriceDiscount) AS Avg_Discount
FROM Sales.SalesOrderDetail;

--Q5.
SELECT ProductSubcategoryID, COUNT(ProductID) AS Product_Count
FROM Production.Product
GROUP BY ProductSubcategoryID;


--Q6.
SELECT MONTH(OrderDate) AS Order_Month, COUNT(SalesOrderID) AS TotalOrders
FROM Sales.SalesOrderHeader
GROUP BY MONTH(OrderDate)
ORDER BY Order_Month;

--Q7.
SELECT CustomerID, SUM(SubTotal) AS Total_Spent
FROM Sales.SalesOrderHeader
GROUP BY CustomerID
ORDER BY Total_Spent DESC;

--Q8.
SELECT CustomerID,COUNT(SalesOrderID) AS  Order_Count
FROM Sales.SalesOrderHeader
GROUP BY CustomerID
HAVING COUNT(SalesOrderID) > 5;

--Q9.
SELECT YEAR(OrderDate) AS Order_Year, AVG(SubTotal) AS Avg_Sales
FROM Sales.SalesOrderHeader
GROUP BY YEAR(OrderDate)
ORDER BY Order_Year;

--Q10.
SELECT JobTitle, COUNT(BusinessEntityID) AS Total_Employees
FROM HumanResources.Employee
GROUP BY JobTitle;