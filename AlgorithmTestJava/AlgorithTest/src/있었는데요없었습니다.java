/*
SELECT O.ANIMAL_ID, O.NAME FROM ANIMAL_INS I, ANIMAL_OUTS O							//OUT���̺� ID�� �̸��� ����ϴµ� ANIMAL INS���̺� �����ؾߵȴ�.(JOIN)
WHERE O.ANIMAL_ID = I.ANIMAL_ID AND I.DATETIME > O.DATETIME							//ID(�ܷ�Ű)�� ���� �������̸鼭 INS�� DATETIME�� �� �����ֵ���
ORDER BY I.DATETIME																	//INS�� DATETIME ������������ ���
*/