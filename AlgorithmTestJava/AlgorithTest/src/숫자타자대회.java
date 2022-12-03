/*import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

public class 숫자타자대회{
	public static void main(String[] args) {
		Solution sol = new Solution();
		sol.solution("5123");
	}
}

class Solution {
	static String[] graph = new String[]{"123","456","789","*0#"};
	static int[][] flag = new int[4][3];
	static Queue<int[]> lq = new LinkedList<>();
	static Queue<int[]> rq = new LinkedList<>();
	static int W = 3, H = 4; 
	static int di[] = {1,0,-1,0,-1,-1,1,1};
	static int dj[] = {0,1,0,-1,-1,1,-1,1};	
	
	
    public int solution(String numbers) {
        return bfs(numbers);        
    }
    
    static public int bfs(String numbers) {
    	int answer = 0;
        int loi = 1, loj = 0, roi = 1, roj = 2;
        
    	for(int s=0; s<numbers.length(); s++) {
            int firstChk = 0;
			for(int i=0; i<H; i++) Arrays.fill(flag[i], 0);

            flag[loi][loj] = 1;
            flag[roi][roj] = 1;
            lq.add(new int[] {loi, loj});
            rq.add(new int[] {roi, roj});

    		while(!lq.isEmpty() || !rq.isEmpty()) {
    			int[] tmp = lq.poll();
        		if(tmp == null) break;
        		int finChk = 0;
        		int lfi = tmp[0], lfj = tmp[1];
        		tmp = rq.poll();
                if(tmp == null) break;
        		int rfi = tmp[0], rfj = tmp[1];
        		if(graph[lfi].charAt(lfj) == numbers.charAt(s)) {
        			if(firstChk == 1)answer += (flag[lfi][lfj] - 1);
        			else answer += flag[lfi][lfj];
        			
        			loi = lfi;
        			loj = lfj;
        			finChk = 1;		
        		}else if(graph[rfi].charAt(rfj) == numbers.charAt(s)) {
        			if(firstChk == 1)answer += (flag[rfi][rfj] - 1);
        			else answer += flag[rfi][rfj];
        			
        			roi = rfi;
        			roj = rfj;
        			finChk = 1;
        		}
        		
        		if(finChk == 1) {
        			lq.clear();
        			rq.clear();
        			break;
        		}
        		for(int d=0; d<8; d++) {
        			int lni = lfi + di[d], lnj = lfj + dj[d], rni = rfi + di[d], rnj = rfj + dj[d];
        			if(lni >=0 && lnj >=0 && lni<H && lnj <W ) {
        				int tmpWeight = 0;
        				if(0<=d && d<=3) tmpWeight = flag[lfi][lfj] + 2;
        				else tmpWeight = flag[lfi][lfj] + 3;
        				if(flag[lni][lnj] == 0 || (flag[lni][lnj] !=0 && flag[lni][lnj] > tmpWeight)){
            				lq.add(new int[]{lni, lnj});
            				flag[lni][lnj] = tmpWeight;
        				}
        			}
        			if(rni >=0 && rnj >=0 && rni<H && rnj <W) {
        				int tmpWeight = 0;
        				if(0<=d && d<=3) tmpWeight = flag[rfi][rfj] + 2;
        				else tmpWeight = flag[rfi][rfj] + 3;
        				if(flag[rni][rnj] == 0 || (flag[rni][rnj] !=0 && flag[rni][rnj] > tmpWeight)){
            				rq.add(new int[]{rni, rnj});
            				flag[rni][rnj] = tmpWeight;
        				}
        			}
        		}
        		firstChk = 1;
    		}
    	}
    	return answer;
    }
}*/