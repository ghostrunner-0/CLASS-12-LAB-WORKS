# The following codes are to be executed for this lab work.

1.create database employees;

  show databases;
  
  use employees;
  
2.create table employee(

  emp_id int primary key auto_increment not null,
  
  emp_name varchar(100),
  
  emp_position varchar(100),
  
  emp_salary float
  
  );	
  
  desc employee;
  
3.insert into employee (emp_name,emp_position,emp_salary)

  values('Abhijit Basnet','Engineer',90000),
  
  ('Sanchit Dangol','DCFO',80000),
  
  ('Priyanshu Begwani','CEO',100000),
  
  ('Yukrit Dangol','Designer',50000),
  
  ('Saugat Poudel','Marketing head',90000),
  
  ('Rishab Shrestha','Gaurd',8000)
  
  ;
  
4.select * from employee;

5.select emp_id,emp_name from employee;

6.select * from employee where emp_name like 'a%b';

7.select * from employee where emp_name like 'b%y';

8.select * from employee where emp_position = 'engineer';

9.select * from employee where emp_salary between 30000 and 45000;

10.update employee set emp_name='Abhi' where emp_id=1;

   select * from employee;
   
11.delete from employee where emp_id=3;

   select * from employee; 
   
12.select * from employee order by emp_name asc;

12.select * from employee order by emp_name desc;

13.alter table employee

   add column emp_address varchar(100) after emp_name,
   
   modify column emp_position varchar(200);
   
   desc employee;
   
14.select max(emp_salary) from employee;

15.select min(emp_salary) from employee;

16.select avg(emp_salary) from employee;

