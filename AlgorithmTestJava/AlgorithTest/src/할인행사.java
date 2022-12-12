/*import java.util.*;

class Solution {
	public int solution(String[] want, int[] number, String[] discount) {
		int answer = 0;
		Map<String, Integer> map = new HashMap<>(), disc = new HashMap<>();
		for (int i = 0; i < want.length; i++) map.put(want[i], number[i]);
		
		for (int i = 0; i < discount.length - 9; i++) {
			for(int j = i; j < i+10; j++) disc.put(discount[j], 0);
			for(int j = i; j < i+10; j++) disc.put(discount[j], disc.get(discount[j]) + 1);
			
			int chk = 0;
			
			Iterator<String> it = map.keySet().iterator();
			while(it.hasNext()) {
				String key = (String)it.next();
				if(!disc.containsKey(key) || disc.get(key) < map.get(key)) {
					chk = 1;
					break;
				}
			}			
			if (chk == 0) answer++;
			disc.clear();
		}
		return answer;
	}
}

public class 할인행사 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new String[] { "banana", "apple", "rice", "pork", "pot" },
				new int[] { 3, 2, 2, 2, 1 }, new String[] { "chicken", "apple", "apple", "banana", "rice", "apple",
						"pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana" }));
	}
}*/