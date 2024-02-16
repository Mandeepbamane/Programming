DESC EMPL;
SELECT * FROM EMPL;

select ascii(emp_name) as ascicode from empl;

select upper(Emp_job) as uppercase from empl;

select lower(Emp_job) as uppercase from empl;

select substr(Emp_name, 2,4) from empl;

select concat(Emp_job,emp_name) from empl;

select length(Emp_job) from empl;

select replace(Emp_job,'PRESIDENT','CEO') from empl;

select instr(Emp_job,'S') from empl;

select lpad(Emp_job,10, 'JVP') from empl;

select rpad(Emp_job,10, 'JP') from empl;

select ltrim(Emp_job,'S') from empl;

select rtrim(Emp_job,'N') from empl;


desc dual;
select * from dual;
