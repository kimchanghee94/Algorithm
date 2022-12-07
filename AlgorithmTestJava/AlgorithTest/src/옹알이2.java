/*class Solution {
    public int solution(String[] babbling) {
        int answer = 0;
        
        String[] dist = new String[] {"aya", "ye", "woo", "ma"};
        for(int i=0; i<babbling.length; i++) {
        	int ansLen = 0;
        	for(int j=0; j<dist.length; j++) {
        		int idx = 0;
        		int nidx = 0;
        		while((nidx = babbling[i].indexOf(dist[j], idx)) != -1) {
        			if(!(nidx != 0 && idx == nidx)) ansLen += dist[j].length();
        			idx = nidx + dist[j].length();
        		}
        	}
        	if(babbling[i].length() == ansLen) answer++;
        }
        return answer;
    }
}

public class ¿Ë¾ËÀÌ2 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new String[]{"yeye"}));
	}
}*/