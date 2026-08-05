-- ==========================================
-- File: Q31-Q37.sql
-- DBMS Practical Queries (Q31 - Q37)
-- ==========================================

-- Q31. Display the number of managers without listing their names.
SELECT COUNT(DISTINCT Manager) AS Total_Managers
FROM EMPLOYEE
WHERE Manager IS NOT NULL;

-- Q32. Display Department Name, Location, No. of Employees
-- and Average Salary for each department.
SELECT D.Dname,
       D.Location,
       COUNT(E.Eno) AS No_of_Employees,
       AVG(E.Salary) AS Average_Salary
FROM DEPARTMENT D
LEFT JOIN EMPLOYEE E
ON D.Dno = E.Dno
GROUP BY D.Dname, D.Location;

-- Q33. Display Name and Hire Date of all employees
-- in the same department as BLAKE.
SELECT Ename, Hire_date
FROM EMPLOYEE
WHERE Dno =
(
    SELECT Dno
    FROM EMPLOYEE
    WHERE Ename='BLAKE'
);

-- Q34. Display Employee No. and Name
-- of employees earning more than the average salary.
SELECT Eno, Ename
FROM EMPLOYEE
WHERE Salary >
(
    SELECT AVG(Salary)
    FROM EMPLOYEE
);

-- Q35. Display Employee Number and Name
-- of employees who work in the same department
-- as any employee whose name contains 'T'.
SELECT Eno, Ename
FROM EMPLOYEE
WHERE Dno IN
(
    SELECT Dno
    FROM EMPLOYEE
    WHERE Ename LIKE '%T%'
);

-- Q36. Display names and salaries
-- of employees who report to KING.
SELECT Ename, Salary
FROM EMPLOYEE
WHERE Manager =
(
    SELECT Eno
    FROM EMPLOYEE
    WHERE Ename='KING'
);

-- Q37. Display Department No., Employee Name and Job
-- of employees in the SALES department.
SELECT E.Dno,
       E.Ename,
       E.Job_type
FROM EMPLOYEE E
JOIN DEPARTMENT D
ON E.Dno = D.Dno
WHERE D.Dname='SALES';
