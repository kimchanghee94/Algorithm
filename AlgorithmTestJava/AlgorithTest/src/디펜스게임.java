/*
Priority Queue�� ��� 1�� 2�� 3���� ���� depth�� ����
1������ 2�� 2������ 4�� �̷������� Ŀ������.
�� {1 2 4 8} 4���� ��尡 ���� �� ������ ������ ã�ƾߵǴ� ��� �Ʒ� 3���� ���� ���� �� 3���� ��Һ񱳸� �ϸ� �ǹǷ� logn�̶�� �ð����⵵�� ���´�.
�ݴ�� �߰��� ������ ���� ������ ����������
�ٸ� ��� n���� ��带 �����ؾߵ� ��� n���� ��� * logn���� nlogn�� �ȴ�.

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

public class ���潺���� {
	public static void main(String[] args) {
		Solution sol = new Solution();
		System.out.println(sol.solution(0,0,new int[] {}));
	}
}*/