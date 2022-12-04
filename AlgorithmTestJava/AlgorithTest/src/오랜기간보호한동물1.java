/*
SELECT * FROM(  										//ROWNUM을 쓰기 위한 명령문
    SELECT I.NAME, I.DATETIME FROM ANIMAL_INS I			//NAME과 DATETIME을 INS테이블에서 출력할거다
    LEFT OUTER JOIN ANIMAL_OUTS O						//그중 OUTS테이블에 존재하는 애들 중
    ON I.ANIMAL_ID = O.ANIMAL_ID						//ID가 일치하는지 기준으로 두어
    WHERE O.ANIMAL_ID is NULL							//INS에만 있는 데이터들 중
    ORDER BY I.DATETIME									//INS의 시간을 기준으로 오름차순 정렬
)
WHERE ROWNUM <= 3										//뽑힌 데이터들 중 3번째까지만 출력
*/