/*
import java.util.Stack;

class Solution {
    public int solution(int[] order) {
        int answer = 0;
        Stack<Integer> s = new Stack<>();
        int cnt = 1;
        //cnt�� ����Ű�� ���� �� �����̳� ��Ʈ�� �������� ���� ��ȣ
        
        for(int i=0; i<order.length; i++) {
        	while(order[i] > cnt) {
            	s.add(cnt++);
            }
            
            if(s.size() != 0 && order[i] == s.peek()) {
            	s.pop(); answer++;
            }else if(order[i] == cnt) {
            	cnt++; answer++;
            }else {
            	break; //������
            }	
        }
       
        return answer;
    }
}

public class �ù���� {
	public static void main(String[] args) {
	}
}
*/