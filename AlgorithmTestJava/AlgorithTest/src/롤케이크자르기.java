/*import java.util.*;

class Solution {
    public int solution(int[] topping) {
        int answer = 0;
        Set<Integer> fset = new HashSet<>(), lset = new HashSet<>();
        int fArr[] = new int[topping.length];
        int lArr[] = new int[topping.length];
        
        for(int i=0; i<topping.length; i++) {
        	fset.add(topping[i]);
        	fArr[i] = fset.size();
        	lset.add(topping[topping.length - i -1]);
        	lArr[topping.length - i - 1] = lset.size();
        }
        
        for(int i=0; i<topping.length - 1; i++) {
        	if(fArr[i] == lArr[i+1]) {
        		answer++;
        	}
        }        
        return answer;
    }
}

public class 롤케이크자르기 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new int[] {1,2,1,3,1,4,1,2}));
		System.out.println(sol.solution(new int[] {1,2,3,1,4}));
	}
}*/
