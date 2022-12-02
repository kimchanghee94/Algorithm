/*class Solution {
    public int solution(int number, int limit, int power) {
        int answer = 0;
        
        for(int i=1; i<=number; i++) {
            int tmp_ans = 0;
        	for(int j=1; j*j<=i; j++) {
                if(j*j == i) tmp_ans++;
                else if(i%j == 0) tmp_ans+=2;
        	}
        	if(tmp_ans>limit) tmp_ans=power;
        	answer += tmp_ans;
        }
        return answer;
    }
}*/