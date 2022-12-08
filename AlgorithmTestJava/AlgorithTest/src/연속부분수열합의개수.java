/*
import java.util.*;

class Solution {
    public int solution(int[] elements) {
        Set<Integer> set = new HashSet<>();
        
        for(int k=1; k<=elements.length; k++) {
        	for(int i=0; i<elements.length; i++) {
        		int sum = 0;
        		for(int j=0; j<k; j++) {
        			sum += elements[(i + j)%elements.length];
        		}
        		set.add(sum);
        	}
        }
        return set.size();
    }
}

public class 연속부분수열합의개수 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new int[] {}));
	}
}*/