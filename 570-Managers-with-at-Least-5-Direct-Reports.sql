# Write your MySQL query statement below
SELECT name from employee where id in (select managerId from employee group by managerId having count(*) >= 5); 