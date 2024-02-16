create table orders (orderno int primary key, puramt int, ordt date , custid int, smid int);
desc orders;
insert into orders values(7001,1500,'05-OCT-2012',3005,5002);
insert into orders values(7002,2700,'10-NOV-2012',3001,5005);
insert into orders values(7003,6500,'05-OCT-2012',3002,5001);
select * from orders;
 select avg(puramt)from orders;
 select count(smid)from orders;
 select count(custid)from orders;
 select min(puramt)from orders;
 
select max(puramt),ordt from orders group by ordt;
select custid,ordt,puramt from orders where puramt>2000;
select custid,ordt,puramt from orders where puramt between 2000 and 6000;
select custid,puramt from orders where custid between 3002 and 3007;