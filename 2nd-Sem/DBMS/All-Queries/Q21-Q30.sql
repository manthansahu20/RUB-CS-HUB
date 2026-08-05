-- ==========================================
-- File: Q21-Q30.sql
-- DBMS Practical Queries (Q21 - Q30)
-- ==========================================

-- Q21. Display Name, Hire Date and Day of the Week.
SELECT Ename,
       Hire_date,
       TO_CHAR(Hire_date,'DAY') AS Day
FROM EMPLOYEE;

-- Q22. Display employee names with salary rounded to nearest integer.
SELECT Ename,
       ROUND(Salary) AS Salary
FROM EMPLOYEE;

-- Q23. Display employee names having 'A' as the first character.
SELECT Ename
FROM EMPLOYEE
WHERE Ename LIKE 'A%';

-- Q24. Display employee names containing 'T'.
SELECT Ename
FROM EMPLOYEE
WHERE Ename LIKE '%T%';

-- Q25. Display employee names ending with 'N'.
SELECT Ename
FROM EMPLOYEE
WHERE Ename LIKE '%N';

-- Q26. Display maximum salary.
SELECT MAX(Salary) AS Maximum_Salary
FROM EMPLOYEE;

-- Q27. Display minimum salary.
SELECT MIN(Salary) AS Minimum_Salary
FROM EMPLOYEE;

-- Q28. Display average salary.
SELECT AVG(Salary) AS Average_Salary
FROM EMPLOYEE;

-- Q29. Display total salary of all employees.
SELECT SUM(Salary) AS Total_Salary
FROM EMPLOYEE;

-- Q30. Display total number of employees.
SELECT COUNT(*) AS Total_Employees
FROM EMPLOYEE;
