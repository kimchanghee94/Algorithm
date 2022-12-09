
/*public class 연습장테스트 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new String[]{"1234,aa,bb","5678,aa,bb"},
				new String[]{"0908,1234,aa,bb","1008,5678,aa,bb"}));
		
	}
}*/

/* SQL 문제
SELECT B.ID, B.NAME, B.ADDRESS, COUNT(ES.COUNT) AS COUNT FROM BRANCHES B,
(SELECT E.ID, COUNT(S.EMPLOYEE_ID) AS COUNT, E.BRANCH_ID FROM EMPLOYEES E, SELLINGS S
WHERE E.ID = S.EMPLOYEE_ID
GROUP BY E.ID
) ES
WHERE B.ADDRESS LIKE '서울특별시%' AND B.ID = ES.BRANCH_ID
GROUP BY B.ID
ORDER BY B.ID
*/

/* Pattern  문제
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class Solution {
    public String solution(String pathVariableUrl) {
        String answer = "";
        
        // 슬래시가 3개인지 판단
        //paymentID 1~9길이의 숫자 조건 분기
        //paymentMethod 알파벳 1~10길이의 조건 분기
        String regExp = "/payment/\\d{1,9}/[a-zA-Z]{1,10}";
        boolean result = Pattern.matches(regExp, pathVariableUrl);
        if(result) {
        	int fIdx = pathVariableUrl.indexOf("/", 1);
        	int nIdx = pathVariableUrl.lastIndexOf("/");
        	int pId = Integer.parseInt(pathVariableUrl.substring(fIdx+1, nIdx));
        	String pMethod = pathVariableUrl.substring(nIdx);
        	answer += pathVariableUrl.substring(0, fIdx) + pMethod + "?";
        	answer += "paymentId=" + pId;
		} else {
        	answer += "error";
        }   
        return answer;
    }
}*/

/* 문자열 조합 문제
import java.util.ArrayList;
import java.util.List;

class Solution {
    public String[] solution(String[] productInfo, String[] dailyProductSales) {
        String[] answer = new String[dailyProductSales.length];
        List<String> dList = new ArrayList<>();
        for(String s : dailyProductSales) {
        	int index = s.indexOf(",");
        	index = s.indexOf(",", index+1);
        	String tmp = s.substring(0, index + 1);
        	dList.add(tmp);
        }
        
        for(int i=0; i<dList.size(); i++) {
        	String dTmp = dList.get(i);
        	int index = dTmp.indexOf(",");
        	dTmp = dTmp.substring(index + 1, dTmp.length() - 1);
        	
        	for(int j=0; j<productInfo.length; j++) {
        		String pTmp = productInfo[j].substring(0, productInfo[j].indexOf(","));
        		if(dTmp.equals(pTmp)) {
        			int fIndex = productInfo[j].indexOf(",");
        			int lIndex = productInfo[j].lastIndexOf(",");
        			answer[i] = dList.get(i) + productInfo[j].substring(fIndex + 1, lIndex);
        			
        			int price = Integer.parseInt(productInfo[j].substring(lIndex + 1));
        			lIndex = dailyProductSales[i].lastIndexOf(",");
        			int pCnt = Integer.parseInt(dailyProductSales[i].substring(lIndex + 1));
        			String pSum = String.valueOf(price*pCnt);
        			answer[i] += ","+pSum;
        			        			
        			break;
        		}
        	}
        }        
        
        return answer;
    }
}*/



/* Stream 사용 문제
import java.util.stream.Stream;

class Solution {
    public String solution(String[] params) {
        String answer = "";
        Stream<String> stream = Stream.of(params);
        try {
        	answer = stream.filter(s -> s.length() >= 5).filter(s -> s.length() <= 10).findFirst().orElseThrow(()->new IllegalArgumentException());
        	answer = answer.toUpperCase();
        } catch (IllegalArgumentException ie) {
        	answer = "없음";
        }
        return answer;
    }
}*/

/* 알고리즘 구현 문제
import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        Set<Integer> set = new HashSet<>(a);
        int[] arr = new int[9000001];
        
        for(int i=0; i<a; i++) {
        	int tmp = sc.nextInt();
        	set.add(tmp);
        	arr[tmp]++;        	
        }
        
        List<Integer> list = new ArrayList<>(set);
        Collections.sort(list, Collections.reverseOrder());
        
        if(list.size() < b) System.out.println("IMPOSSIBLE");
        else System.out.println(list.get(b-1) + " " + arr[list.get(b-1)]);
    }
}
*/


/* 문자열 비교
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

class Solution {
    public String solution(String[] leftArray, String[] rightArray) {
        String answer = "";
        Set<String> set = new HashSet<>();
        for(int i=0; i<leftArray.length; i++) {
        	String tmp = leftArray[i];
        	for(int j=0; j<rightArray.length; j++) {
        		if(tmp.equals(rightArray[j])) {
        			set.add(tmp);
        		}
        	}
        }
        
        ArrayList<String> aList = new ArrayList<>(set);
        Collections.sort(aList);
        for(int i=0; i<aList.size(); i++) {
        	answer += aList.get(i);
        	if(i != aList.size() - 1) answer += ",";
        }
        
        // 코드 작성 위치
        return answer;
    }
}
*/