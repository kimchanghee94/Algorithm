/*class Solution {
	public int solution(int[] queue1, int[] queue2) {
		int answer = 0;
		long sum1 = 0L, sum2 = 0L;

		int i1 = 0, i2 = 0;
		int s1 = queue1.length, s2 = queue2.length;
		int[] q1 = new int[s1*3], q2 = new int[s2*3];
				
		for (int i = 0; i < s1; i++) {
			sum1 += queue1[i];
			q1[i] = queue1[i];
			sum2 += queue2[i];
			q2[i] = queue2[i];
		}
		if ((sum1 + sum2) % 2 != 0)
			return -1;

		while (sum1 != sum2) {
			if (sum1 < sum2 && i2 < s2 - 1) {
				sum2 -= q2[i2];
				sum1 += q2[i2];
				q1[s1++] = q2[i2++];
			} 
			else if (sum1 > sum2 && i1 < s1 - 1) {
				sum1 -= q1[i1];
				sum2 += q1[i1];
				q2[s2++] = q1[i1++];
			}
			else return -1;
			if(tmpSum1 == sum1 && tmpSum2 == sum2) return -1;

			answer++;
		}
		return answer;
	}
}*/

/* 
import java.util.*;

class Solution {
	public int solution(int[] queue1, int[] queue2) {
		int answer = 0;
		long sum1 = 0L, sum2 = 0L;
		Queue<Integer> q1 = new LinkedList<>(), q2 = new LinkedList<>();
		for (int i = 0; i < queue1.length; i++) {
			q1.add(queue1[i]);
			sum1 += queue1[i];
			q2.add(queue2[i]);
			sum2 += queue2[i];
		}

		if ((sum1 + sum2) % 2 != 0)
			return -1;
		
		int maxCnt = queue1.length * 3;
		
		while (sum1 != sum2) {
			if (sum1 < sum2 && q2.size() > 1) {
				sum2 -= q2.peek();
				sum1 += q2.peek();
				q1.add(q2.poll());
				answer++;
			} 
			else if(sum1 > sum2 && q1.size() > 1) {
				sum1 -= q1.peek();
				sum2 += q1.peek();
				q2.add(q1.poll());
				answer++;
			}
			else return -1;
			
			if(--maxCnt == 0) return -1;

		}
		return answer;
	}
}

import java.util.*;

class Solution {
	public int solution(int[] queue1, int[] queue2) {
		int answer = 0;
		long sum1 = 0L, sum2 = 0L;
		Queue<Integer> q1 = new LinkedList<>(), q2 = new LinkedList<>();
		for (int i = 0; i < queue1.length; i++) {
			q1.add(queue1[i]);
			sum1 += queue1[i];
			q2.add(queue2[i]);
			sum2 += queue2[i];
		}

		if ((sum1 + sum2) % 2 != 0)
			return -1;

		while (sum1 != sum2) {
			if (sum1 < sum2 && q2.size() > 1) {
				sum2 -= q2.peek();
				sum1 += q2.peek();
				q1.add(q2.poll());
				answer++;
			} 
			else if(sum1 > sum2 && q1.size() > 1) {
				sum1 -= q1.peek();
				sum2 += q1.peek();
				q2.add(q1.poll());
				answer++;
			}
			else return -1;
			
			if(q1.size() >= queue1.length*3 || q2.size() >= queue2.length*3) return -1;

		}
		return answer;
	}
}*/
/*
public class 두큐합같게만들기 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(new int[] {1,4}, new int[] {3,4}));
	}
}*/
