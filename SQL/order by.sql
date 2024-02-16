desc empl;
select * from empl;
select max(sal),dept_no from empl group by dept_no having max(sal)>=3000 order by max(sal) asc;
select count(*),dept_no from empl group by dept_no order by count(*) desc;
select * from empl order by sal desc;
select * from empl order by sal asc;
select * from empl where dept_no=10 order by sal desc;
select max(sal),dept_no from empl group by dept_no order by max(sal);