/*
SELECT O.ANIMAL_ID, O.NAME FROM ANIMAL_INS I, ANIMAL_OUTS O							//OUT테이블에 ID와 이름을 출력하는데 ANIMAL INS테이블도 참조해야된다.(JOIN)
WHERE O.ANIMAL_ID = I.ANIMAL_ID AND I.DATETIME > O.DATETIME							//ID(외래키)가 같은 데이터이면서 INS의 DATETIME이 더 빠른애들을
ORDER BY I.DATETIME																	//INS의 DATETIME 오름차순으로 출력
*/