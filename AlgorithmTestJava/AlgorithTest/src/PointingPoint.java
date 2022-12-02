/*class Solution {
    public long solution(int k, int d) {
        long answer = 0;
        
        for(long i=0; i*k <= d; i++) {
        	long j = ((long)d)*d - (i*k)*(i*k);
        	j = (long)Math.sqrt(j);
        	answer += ((j/k)+1);
        }
        return answer;
    }
}*/