select max(sal),dept_no from empl group by dept_no;
select count(*),emp_job from empl group by emp_job;
select count(*),emp_job,dept_no from empl where emp_job='SALESMAN' group by dept_no,emp_job;
select count(*),dept_no from empl group by dept_no ;