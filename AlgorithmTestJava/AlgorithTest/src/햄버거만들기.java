/*class Solution {
	public int solution(int[] ingredient) {
		int answer = 0;
		String hbg = "1231";
		StringBuffer sb = new StringBuffer();
		for (int i = 0; i < ingredient.length; i++) sb.append(ingredient[i]);
		for (int i = 0; i < sb.length() - 3; i++) {
			if (hbg.equals(sb.substring(i, i+4))) {
				sb = sb.replace(i, i + 4, "");
				answer++;
				if(i<3) i =- 1;
				else i -= 4;
			}
		}
		return answer;
	}
}

public class 햄버거만들기 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new int[] { 2, 1, 1, 2, 3, 1, 2, 3, 1 }));
		System.out.println(sol.solution(new int[] { 2,2,1,2,3,1,2,3,1,1,3,1,2,3,1,2,3,1}));
	}
}*/
