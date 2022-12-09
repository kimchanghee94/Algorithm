/*

//MYSQL에서는 데이트 형식을 date_format을 사용하고 대문자를 쓸때와 소문자를 쓸때 각각 출력형태가 다르다. 달과 월을 대문자로 쓰면
영문자로 달과 월을 표시하고 년도는 소문자로쓰면 뒤에 2자리만 출력한다.

SELECT MEMBER_ID, MEMBER_NAME, GENDER, DATE_FORMAT(DATE_OF_BIRTH, '%Y-%m-%d')
FROM MEMBER_PROFILE
WHERE TLNO IS NOT NULL AND DATE_FORMAT(DATE_OF_BIRTH, '%m') = '03' AND GENDER = 'W'
ORDER BY MEMBER_ID
*/