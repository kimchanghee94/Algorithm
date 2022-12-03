/*import java.util.*;

class Solution {
	
	public static void getM(List<Integer> mArr, int[] array) {
        Arrays.sort(array);
        for(int i=2; i<=array[0]; i++) {
        	if(array[0] % i == 0) mArr.add(i);
        }
	}
	
	public static int getChk(List<Integer> mArr, int[] aArr, int[] bArr) {
		int chk = 0;
		int tmp_ans = 0;
        for(int i=0; i<mArr.size(); i++) {
        	chk = 0;
        	for(int j=0; j<aArr.length; j++) {
        		if((aArr[j] % mArr.get(i) != 0) 
        				|| (bArr[j] % mArr.get(i) == 0)) {
        			chk = 1;
        			break;
        		}
        	}
        	if(chk == 0) tmp_ans = Math.max(tmp_ans, mArr.get(i));
        }
        return tmp_ans;
	}
	
    public int solution(int[] arrayA, int[] arrayB) {
        List<Integer> aArr = new LinkedList<>();
        List<Integer> bArr = new LinkedList<>();
        getM(aArr, arrayA);
        getM(bArr, arrayB);
        int answer = getChk(aArr, arrayA, arrayB);
        return answer = Math.max(answer, getChk(bArr, arrayB, arrayA));    
    }
}

public class 숫자카드나누기 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new int[] {14,35,119}, new int[] {18, 30, 102}));
	}
}*/