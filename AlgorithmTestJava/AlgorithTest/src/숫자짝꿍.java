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

public class ����¦�� {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(null, null));
	}
}*/

/*
�Ʒ��� �ð��ʰ� �ڵ��̴�. String���� �̾���̴� ���� �ڵ�� ��� ���ο� ��ü�� �����ؼ� ���̴� �����̵ǰ� �ð��ʰ��� �����Ѵ�.
�ϳ��� String�� ���鶧 O(���ڿ�����)�� �ð����⵵�� �߻��ϴ� ��
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