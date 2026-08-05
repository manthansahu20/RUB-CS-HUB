-- ==========================================
-- File: Create_Tables.sql
-- Description: Create EMPLOYEE and DEPARTMENT Tables
-- ==========================================

CREATE TABLE DEPARTMENT (
    Dno INT PRIMARY KEY,
    Dname VARCHAR2(50),
    Location VARCHAR2(50) DEFAULT 'New Delhi'
);

CREATE TABLE EMPLOYEE (
    Eno CHAR(3) PRIMARY KEY,
    Ename VARCHAR2(50) NOT NULL,
    Job_type VARCHAR2(50) NOT NULL,
    Manager CHAR(3),
    Hire_date DATE NOT NULL,
    Dno INT,
    Commission DECIMAL(10,2),
    Salary DECIMAL(7,2) NOT NULL,

    CONSTRAINT FK_Manager
        FOREIGN KEY (Manager)
        REFERENCES EMPLOYEE(Eno),

    CONSTRAINT FK_Department
        FOREIGN KEY (Dno)
        REFERENCES DEPARTMENT(Dno)
);
