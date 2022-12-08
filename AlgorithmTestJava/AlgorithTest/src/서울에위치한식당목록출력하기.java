/*
SELECT I.REST_ID, I.REST_NAME, I.FOOD_TYPE, I.FAVORITES, I.ADDRESS, S.SCORE
FROM REST_INFO I, (SELECT R.REST_ID, ROUND(AVG(R.REVIEW_SCORE),2) AS SCORE FROM REST_REVIEW R
GROUP BY R.REST_ID) S
WHERE I.ADDRESS LIKE '����%' AND I.REST_ID = S.REST_ID
ORDER BY S.SCORE DESC, I.FAVORITES DESC
*/