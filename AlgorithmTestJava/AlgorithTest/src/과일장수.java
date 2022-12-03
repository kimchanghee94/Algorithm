/*import java.util.*;

class Solution {
    public int solution(int k, int m, int[] score) {
        int answer = 0;
        Integer[] sArr = Arrays.stream(score).boxed().toArray(Integer[]::new);
        Arrays.sort(sArr, Collections.reverseOrder());
        int minAns = 10;
        
        for(int i=0; i<sArr.length; i++) {
        	minAns = Math.min(minAns, sArr[i]);
        	if((i+1)%m == 0) {
        		answer += minAns*m;
        	}
        }       
        return answer;
    }
}

public class 과일장수 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		sol.solution(3, 4, new int[] {1,2,3,1,2,3,1});
	}
}*/