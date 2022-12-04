/*
SELECT P.PRODUCT_CODE, SUM(P.PRICE * O.SALES_AMOUNT) AS SALES FROM PRODUCT P, OFFLINE_SALE O
// Product�ڵ�� P�� ���ݰ� O�� ������ ���� ���� ���� SALES��� Į������ ����� ���̴�.

WHERE P.PRODUCT_ID = O.PRODUCT_ID
//�� �� P�� ID�� O�� ID�� �����ֵ鿡 ���ؼ�

GROUP BY P.PRODUCT_CODE
//Product Code�� �������� ���� ���̴�.
//SQL Server���� GROUP BY ���� Ư�� Į���� �������� ���� �Լ��� ����Ͽ� �Ǽ�(COUNT), �հ�(SUM), ���(AVG) �� �� �輺 �����͸� ������ �� ����Ѵ�.

ORDER BY SALES DESC, PRODUCT_CODE
*/