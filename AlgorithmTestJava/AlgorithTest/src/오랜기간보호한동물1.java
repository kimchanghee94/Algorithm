/*
SELECT * FROM(  										//ROWNUM�� ���� ���� ��ɹ�
    SELECT I.NAME, I.DATETIME FROM ANIMAL_INS I			//NAME�� DATETIME�� INS���̺��� ����ҰŴ�
    LEFT OUTER JOIN ANIMAL_OUTS O						//���� OUTS���̺� �����ϴ� �ֵ� ��
    ON I.ANIMAL_ID = O.ANIMAL_ID						//ID�� ��ġ�ϴ��� �������� �ξ�
    WHERE O.ANIMAL_ID is NULL							//INS���� �ִ� �����͵� ��
    ORDER BY I.DATETIME									//INS�� �ð��� �������� �������� ����
)
WHERE ROWNUM <= 3										//���� �����͵� �� 3��°������ ���
*/