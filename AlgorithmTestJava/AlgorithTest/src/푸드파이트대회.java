/*class Solution {
    public String solution(int[] food) {
        String answer = "";
        
        for(int i=1; i<food.length; i++) {
        	int cnt = food[i]/2;
        	for(int j=0; j<cnt;j++) {
        		answer += i;
        	}
        }
        StringBuffer sb = new StringBuffer(answer);
        String revAns = sb.reverse().toString();
        answer += "0" + revAns;
        
        return answer;
    }
}

public class 푸드파이트대회 {
	public static void main(String[] args) {

	}

}*/