# Write your MySQL query statement below

SELECT distinct author_id as id
FROM Views
WHERE viewer_id = author_id
ORDER by id