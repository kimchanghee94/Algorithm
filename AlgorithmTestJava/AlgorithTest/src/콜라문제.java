/*class Solution {
    public int solution(int a, int b, int n) {
        int answer = 0;
        
        while(n >= a) {
        	int send = (n/a) * a;
        	int recv = (n/a) * b;
        	n -= send;
        	n += recv;
        	answer += recv;
        }
        return answer;
    }
}

public class 콜라문제 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(2, 1, 20));
	}
}*/