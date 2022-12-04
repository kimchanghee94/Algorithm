/*
SELECT P.PRODUCT_CODE, SUM(P.PRICE * O.SALES_AMOUNT) AS SALES FROM PRODUCT P, OFFLINE_SALE O
// Product코드랑 P의 가격과 O의 수량을 곱한 값을 합한 SALES라는 칼럼으로 출력할 것이다.

WHERE P.PRODUCT_ID = O.PRODUCT_ID
//그 중 P의 ID와 O의 ID가 같은애들에 대해서

GROUP BY P.PRODUCT_CODE
//Product Code를 기준으로 묶을 것이다.
//SQL Server에서 GROUP BY 절은 특정 칼럼을 기준으로 집계 함수를 사용하여 건수(COUNT), 합계(SUM), 평균(AVG) 등 집 계성 데이터를 추출할 때 사용한다.

ORDER BY SALES DESC, PRODUCT_CODE
*/