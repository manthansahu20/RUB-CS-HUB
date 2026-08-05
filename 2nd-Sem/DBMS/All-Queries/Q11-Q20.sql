-- ==========================================
-- File: Q11-Q20.sql
-- DBMS Practical Queries (Q11 - Q20)
-- ==========================================

-- Q11. Display Name, Salary and Commission of employees who earn commission.
SELECT Ename, Salary, Commission
FROM EMPLOYEE
WHERE Commission IS NOT NULL;

-- Q12. Display all data in descending order of Salary and Commission.
SELECT *
FROM EMPLOYEE
ORDER BY Salary DESC, Commission DESC;

-- Q13. Display names of employees where the third letter is 'A'.
SELECT Ename
FROM EMPLOYEE
WHERE Ename LIKE '__A%';

-- Q14. Display names of employees having two 'R's or two 'A's
-- and are either in Dept 30 or Manager = 7788.
SELECT Ename
FROM EMPLOYEE
WHERE (REGEXP_LIKE(Ename,'(.*R.*R.*|.*A.*A.*)'))
AND (Dno=30 OR Manager='7788');

-- Q15. Display Name, Salary and Commission Amount
-- if salary is increased by 5%.
SELECT Ename,
       Salary,
       Commission,
       Salary*1.05 AS Increased_Salary
FROM EMPLOYEE;

-- Q16. Display Current Date.
SELECT SYSDATE
FROM DUAL;

-- Q17. Display Name, Hire Date and Salary Review Date
-- (1st Monday after six months of employment).
SELECT Ename,
       Hire_date,
       NEXT_DAY(ADD_MONTHS(Hire_date,6),'MONDAY') AS Review_Date
FROM EMPLOYEE;

-- Q18. Display Name and number of months worked.
SELECT Ename,
       MONTHS_BETWEEN(SYSDATE,Hire_date) AS Months_Worked
FROM EMPLOYEE;

-- Q19. Display "<Name> earns <Salary> monthly but wants <3*Salary>".
SELECT Ename || ' earns ' || Salary ||
' monthly but wants ' || Salary*3 AS Dream_Salary
FROM EMPLOYEE;

-- Q20. Display Name with first letter capital,
-- remaining letters small and length of name.
SELECT INITCAP(LOWER(Ename)) AS Name,
       LENGTH(Ename) AS Length
FROM EMPLOYEE
WHERE Ename LIKE 'J%'
   OR Ename LIKE 'A%'
   OR Ename LIKE 'M%';
