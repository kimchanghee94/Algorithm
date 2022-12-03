/*import java.util.*;

class Solution {
    public double[] solution(int k, int[][] ranges) {
        double[] answer = new double[ranges.length];
        List<Double> area = new ArrayList<>(); 
        int tmp = k;
        
        while(k!=1) {
        	if(k%2 == 0) k/=2;
        	else k = k*3 + 1;
        	
        	if(tmp < k) area.add(((double)(k-tmp))/2 + tmp);
        	else area.add(((double)(tmp-k))/2 + k);
        	
        	tmp = k;
        }
        
        for(int i=0; i<ranges.length; i++) {
        	int[] r = ranges[i];
        	int start = r[0], end = area.size() + r[1];
        	
        	if(start > end) answer[i] = -1;
        	else {
        		for(int j=start; j<end; j++) {
        			answer[i] += area.get(j);
        		}
        	}
        }        
        return answer;
    }
}

public class 우박수열정적분 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(5, new int[][] {{0,0},{0,-1},{2,-3},{3,-3}}));
	}
}*/
