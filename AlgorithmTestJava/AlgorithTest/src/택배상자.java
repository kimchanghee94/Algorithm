/*
import java.util.Stack;

class Solution {
    public int solution(int[] order) {
        int answer = 0;
        Stack<Integer> s = new Stack<>();
        int cnt = 1;
        //cnt가 가르키는 것은 주 컨테이너 벨트에 꺼내려는 상자 번호
        
        for(int i=0; i<order.length; i++) {
        	while(order[i] > cnt) {
            	s.add(cnt++);
            }
            
            if(s.size() != 0 && order[i] == s.peek()) {
            	s.pop(); answer++;
            }else if(order[i] == cnt) {
            	cnt++; answer++;
            }else {
            	break; //끝낸다
            }	
        }
       
        return answer;
    }
}

public class 택배상자 {
	public static void main(String[] args) {
	}
}
*/