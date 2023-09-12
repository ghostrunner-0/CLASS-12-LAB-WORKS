# The following codes are to be executed for the practical session-2

# ! Question number j,l,k,m not done.

show databases;

drop database student;

show databases;

create database student;

show databases;

use student;

create table student(

Student_id int not null primary key auto_increment,

Student_name varchar(100),

Student_address varchar(100),

Student_grade int

);

desc student;

insert into student (student_name,student_address,student_grade)

values('Priyanshu','Teku',12),

('Anam','Bhaktapur',12),

('Hari','Amannagar',12),

('Sita','Dilibazar',11),

('Yam','America',11),

('Jerry','America',11)

;
select student_id, student_name from student;

select * from student where student_name like "a%";

select * from student where student_name like "%y";

select * from student where student_grade=12;

select * from student where student_grade=12 and student_address like "kathmandu";

select * from student order by student_name asc;

select * from student order by student_name desc;

alter table student

add column student_section varchar(100),

modify column student_address varchar(200);

desc student;
