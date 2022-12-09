/*class Solution {	
    public String solution(String X, String Y) {
        int[][] arr = new int[2][10];
        StringBuffer sb = new StringBuffer();
        
        for(int i=0; i<Math.max(X.length(), Y.length()); i++) {
        	if(i < X.length()) arr[0][X.charAt(i)-48]++;
        	if(i < Y.length()) arr[1][Y.charAt(i)-48]++;
        }
        
        for(int i=9; i>=0; i--) {
        	for(int j=0; j<Math.min(arr[0][i], arr[1][i]); j++) {
        		sb.append(String.valueOf(i));
        	}
        }
                
        if(sb.length() == 0) return "-1";
        else if(sb.charAt(0) == '0') return "0";        
        return sb.toString();
    }
}

public class 숫자짝꿍 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(null, null));
	}
}*/

/*
아래는 시간초과 코드이다. String으로 이어붙이는 식의 코드는 계속 새로운 객체를 생성해서 붙이는 과정이되고 시간초과를 유발한다.
하나의 String을 만들때 O(문자열길이)의 시간복잡도가 발생하는 것
class Solution {	
public String solution(String X, String Y) {
    String answer = "";
    int[][] arr = new int[2][10];
    
    for(int i=0; i<Math.max(X.length(), Y.length()); i++) {
    	if(i < X.length()) arr[0][X.charAt(i)-48]++;
    	if(i < Y.length()) arr[1][Y.charAt(i)-48]++;
    }
    
    for(int i=9; i>=0; i--) {
    	for(int j=0; j<Math.min(arr[0][i], arr[1][i]); j++) {
    		answer += String.valueOf(i);
    	}
    }
            
    if(answer.length() == 0) answer = "-1";
    else if(answer.charAt(0) == '0') answer = "0";        
    return answer;
}
*/