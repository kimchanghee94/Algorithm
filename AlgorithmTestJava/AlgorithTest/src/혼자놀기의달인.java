/*
import java.util.*;

class Solution {
    public int solution(int[] cards) {
        List<Integer> list = new ArrayList<>();
        for(int i=0; i<cards.length; i++) {
        	int tmpAns = 0;
        	int tmpCards = cards[i];
        	cards[i] = 0;
        	while(tmpCards != 0) {
        		int tmpIdx = tmpCards;
        		tmpAns++;
        		tmpCards = cards[tmpIdx-1];
        		cards[tmpIdx-1] = 0;
        	}
        	if(tmpAns != 0) list.add(tmpAns);
        }
        
        if(list.size()<2) return 0;
        Collections.sort(list, Collections.reverseOrder());
        return list.get(0) * list.get(1);
    }
}

public class È¥ÀÚ³î±âÀÇ´ÞÀÎ {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new int[] {8,6,3,7,2,5,1,4}));
	}
}*/