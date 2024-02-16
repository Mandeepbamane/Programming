CREATE TABLE empl(Emp_id int primary key,Emp_name varchar(10),Emp_job varchar(20),MGR int, Edate date,sal int,Ecomm int,DEPT_no int);
desc empl;

INSERT INTO empl VALUES (7369,'SMITH','CLERK',7902,'17-DEC-80',800,NULL,20);
INSERT INTO empl VALUES (7499,'ALLEN','SALESMAN',7698,'20-FEB-81',1600,300,30);
INSERT INTO empl VALUES (7521,'WARD','SALESMAN',7698,'22-FEB-81',1250,500,30);
INSERT INTO empl VALUES (7566,'JONES','MANAGER',7839,'02-APR-81',2975,NULL,20);
INSERT INTO empl VALUES (7654,'MARTIN','SALESMAN',7698,'28-SEP-81',1250,1400,30);
INSERT INTO empl VALUES (7698,'BLAKE','MANAGER',7839,'01-MAY-81',2850,NULL,30);
INSERT INTO empl VALUES (7782,'CLARK','MANAGER',7839,'09-JUN-81',2450,NULL,10);
INSERT INTO empl VALUES (7788,'SCOTT','ANALYST',7566,'19-APR-87',3000,NULL,20);
INSERT INTO empl VALUES (7839,'KING','PRESIDENT',NULL,'17-NOV-81',5000,NULL,10);
INSERT INTO empl VALUES (7844,'TURNER','SALESMAN',7698,'08-SEP-81',1500,0,30);
INSERT INTO empl VALUES (7876,'ADAMS','CLERK',7788,'23-MAY-87',1100,NULL,20);
INSERT INTO empl VALUES (7900,'JAMES','CLERK',7698,'03-DEC-81',950,NULL,30);
INSERT INTO empl VALUES (7902,'FORD','ANALYST',7566,'03-DEC-81',3000,NULL,20);
INSERT INTO empl VALUES (7934,'MILLER','CLERK',7782,'23-JAN-82',1300,NULL,10);

SELECT * FROM empl;

select Emp_id,Emp_name,sal/30,sal,sal*12,sal+Ecomm from empl;

select * from empl where sal<3000;

select * from empl where dept_no=10;

select * from empl where dept_no!=10;

select * from empl where Emp_name='BLAKE';

select * from empl where Emp_job='SALESMAN' and sal>1000;

commit ;