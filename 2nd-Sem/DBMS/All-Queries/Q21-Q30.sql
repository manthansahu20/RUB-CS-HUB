-- ==========================================
-- File: Q21-Q30.sql
-- DBMS Practical Queries (Q21 - Q30)
-- ==========================================

-- Q21. Display Name, Hire Date and Day of the week.
SELECT Ename, Hire_date,
TO_CHAR(Hire_date,'DAY') AS Day
FROM EMPLOYEE;

-- Q22. Display Name, Department Name and Department No.
SELECT E.Ename, D.Dname, D.Dno
FROM EMPLOYEE E, DEPARTMENT D
WHERE E.Dno = D.Dno;

-- Q23. Display unique Jobs in Department 30.
SELECT DISTINCT Job_type
FROM EMPLOYEE
WHERE Dno = 30;

-- Q24. Display Name and Department Name of employees having 'A' in their name.
SELECT E.Ename, D.Dname
FROM EMPLOYEE E, DEPARTMENT D
WHERE E.Dno = D.Dno
AND E.Ename LIKE '%A%';

-- Q25. Display Name, Job, Department No. and Department Name
-- of employees working at Dallas.
SELECT E.Ename, E.Job_type, D.Dno, D.Dname
FROM EMPLOYEE E, DEPARTMENT D
WHERE E.Dno = D.Dno
AND D.Location='DALLAS';

-- Q26. Display Employee Name, Employee No.,
-- Manager Name and Manager No.
SELECT E.Ename AS Employee_Name,
E.Eno AS Employee_No,
M.Ename AS Manager_Name,
M.Eno AS Manager_No
FROM EMPLOYEE E
LEFT JOIN EMPLOYEE M
ON E.Manager=M.Eno;

-- Q27. Display Name, Department No. and Salary
-- of employees whose salary matches any employee
-- earning commission.
SELECT Ename, Dno, Salary
FROM EMPLOYEE
WHERE Salary IN
(SELECT Salary
FROM EMPLOYEE
WHERE Commission IS NOT NULL);

-- Q28. Display Name and Salary represented by '*'
-- (1 star = $100).
SELECT Ename,
RPAD('*',Salary/100,'*') AS Salary
FROM EMPLOYEE;

-- Q29. Display Highest, Lowest, Sum and Average Salary.
SELECT MAX(Salary) Highest,
MIN(Salary) Lowest,
SUM(Salary) Total,
AVG(Salary) Average
FROM EMPLOYEE;

-- Q30. Display number of employees performing the same job.
SELECT Job_type,
COUNT(*) AS Total_Employees
FROM EMPLOYEE
GROUP BY Job_type;
