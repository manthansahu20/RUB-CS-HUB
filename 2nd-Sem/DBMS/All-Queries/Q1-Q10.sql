-- ==========================================
-- File: Q1-Q10.sql
-- DBMS Practical Queries (Q1 - Q10)
-- ==========================================

-- Q1. Display Employee Name, Job, Hire Date, Employee Number.
SELECT Ename, Job_type, Hire_date, Eno
FROM EMPLOYEE
ORDER BY Eno;

-- Q2. Display unique Jobs from the Employee table.
SELECT DISTINCT Job_type
FROM EMPLOYEE;

-- Q3. Display Employee Name concatenated with Job separated by a comma.
SELECT Ename || ', ' || Job_type AS Employee_Details
FROM EMPLOYEE;

-- Q4. Display all the data from the Employee table separated by commas
-- and name the column as THE_OUTPUT.
SELECT Eno || ', ' || Ename || ', ' || Job_type || ', ' ||
       Manager || ', ' || Hire_date || ', ' ||
       Dno || ', ' || Commission || ', ' || Salary AS THE_OUTPUT
FROM EMPLOYEE;

-- Q5. Display Employee Name and Salary of employees earning more than $2850.
SELECT Ename, Salary
FROM EMPLOYEE
WHERE Salary > 2850;

-- Q6. Display Employee Name and Department Number for Employee No = 7900.
SELECT Ename, Dno
FROM EMPLOYEE
WHERE Eno = '7900';

-- Q7. Display Employee Name and Salary whose salary is not
-- between $1500 and $2850.
SELECT Ename, Salary
FROM EMPLOYEE
WHERE Salary NOT BETWEEN 1500 AND 2850;

-- Q8. Display Employee Name and Department No.
-- of employees in Dept 10 and Dept 30 in alphabetical order.
SELECT Ename, Dno
FROM EMPLOYEE
WHERE Dno IN (10,30)
ORDER BY Ename;

-- Q9. Display Name and Hire Date of employees hired in 1981.
SELECT Ename, Hire_date
FROM EMPLOYEE
WHERE EXTRACT(YEAR FROM Hire_date) = 1981;

-- Q10. Display Name and Job of employees who don't have a Manager.
SELECT Ename, Job_type
FROM EMPLOYEE
WHERE Manager IS NULL;
