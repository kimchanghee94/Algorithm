/*class Solution {
    public int[] solution(String s) {
        int[] answer = new int[s.length()];
        answer[0] = -1;
        for(int i=s.length()-1; i>0; i--) {
        	int chk = 0;
        	for(int j=i-1; j>=0; j--) {
        		if(s.charAt(i) == s.charAt(j)) {
        			answer[i] = i-j;
        			chk = 1;
        			break;
        		}
        	}
        	if(chk == 0) answer[i] = -1;
        }
        
        return answer;
    }
}

public class 가장가까운같은글자 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(null));
	}
}*/