/*
Priority Queue의 경우 1층 2층 3층과 같이 depth를 보면
1층다음 2개 2층다음 4개 이런식으로 커져간다.
총 {1 2 4 8} 4층의 노드가 있을 때 마지막 노드까지 찾아야되는 경우 아래 3개의 층을 따라가 총 3번만 대소비교를 하면 되므로 logn이라는 시간복잡도가 나온다.
반대로 추가나 삭제도 위의 원리로 마찬가지다
다만 모든 n개의 노드를 정렬해야될 경우 n개의 노드 * logn으로 nlogn이 된다.

import java.util.*;

class Solution {
    public int solution(int n, int k, int[] enemy) {
        int i = 0;
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        
        while(i < enemy.length) {
        	if(pq.size() < k) pq.add(enemy[i]);
        	else if(pq.peek() < enemy[i] && pq.peek() <= n) {
        		n -= pq.poll();
        		pq.add(enemy[i]);
        	}else if(n < enemy[i]) break;
        	else n-=enemy[i];
        	i++;
        }
        return i;
    }
}

public class 디펜스게임 {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(0,0,new int[] {}));
	}
}*/