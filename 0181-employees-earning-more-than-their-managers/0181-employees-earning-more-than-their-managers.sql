# Write your MySQL query statement below
select name as Employee from employee e where e.salary>(select salary from employee e2 where e2.id=e.managerId);
