/*
SELECT ANIMAL_OUTS.ANIMAL_ID, ANIMAL_OUTS.NAME FROM ANIMAL_OUTS               		//���̺��� ǥ���� ������ ����
LEFT OUTER JOIN ANIMAL_INS ON ANIMAL_OUTS.ANIMAL_ID = ANIMAL_INS.ANIMAL_ID			//OUT���̺� �������� IN���̺��� ���� �ǵ� ID�� ��ġ�ϴ� �ֵ��� ���̰� ������ IN���̺����� �η� ����.
WHERE ANIMAL_INS.ANIMAL_ID is Null ORDER BY ANIMAL_OUTS.ANIMAL_ID					//IN���̺��� NULL�� �ֵ鿡 ���ؼ� ANIMAL ID�������� �������� ���
*/