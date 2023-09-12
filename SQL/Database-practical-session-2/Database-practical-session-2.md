# The following codes are to be executed for the practical session-2

# ! Question number j,l,k not done.

1.show databases;

2.drop database student;

3.show databases;

4.create database student;

5.show databases;

6.use student;

7.create table student(

Student_id int not null primary key auto_increment,

Student_name varchar(100),

Student_address varchar(100),

Student_grade int

);

8.desc student;

9.insert into student (student_name,student_address,student_grade)

values('Priyanshu','Teku',12),

('Anam','Bhaktapur',12),

('Hari','Amannagar',12),

('Sita','Dilibazar',11),

('Yam','America',11),

('Jerry','America',11)

;

10.select student_id, student_name from student;

11.select * from student where student_name like "a%";

12.select * from student where student_name like "%y";

13.select * from student where student_grade=12;

14.select * from student where student_grade=12 and student_address like "kathmandu";

15.select * from student order by student_name asc;

16.select * from student order by student_name desc;

17.alter table student

add column student_section varchar(100),

modify column student_address varchar(200);

18.desc student;
