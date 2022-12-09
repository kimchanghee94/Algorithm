
class Solution {
	
	public void getCnt(int[] arr, String str) {
        for(int i=0; i<str.length(); i++) {
        	arr[str.charAt(i) - 48]++;
        }
	}
	
    public String solution(String X, String Y) {
        String answer = "";
        int[][] arr = new int[2][10];
        
        getCnt(arr[0], X);
        getCnt(arr[1], Y);
        
        
        
        return answer;
    }
}

public class ¼ýÀÚÂ¦²á {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(null, null));
	}
}
