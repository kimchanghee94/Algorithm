/*#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 10

int answer, flag[MAX];

void backtrack(int k, vector<vector<int>> d, int cnt, int tmp_ans){
	for (int i = 0; i < d.size(); i++){
		if (k >= d[i][0] && !flag[i]){
			flag[i] = 1;
			backtrack(k - d[i][1], d, cnt + 1, tmp_ans + 1);
			flag[i] = 0;
		}
		//k>=d[i][0]�̶�� ���� ������ ��� �ε����� ��ĥ���� ����.
		//cnt+1�� ���� �׻� d.size()�� �� �� ����. ���� ���⼭ ó���ϵ��� �ߴ�.
		answer = max(answer, tmp_ans);
		
		//backtrack(k, d, cnt+1, tmp_ans)�� ������� ���� �����δ� �ߺ��� ������ ó���� �ʹ� ���� �ð��ʰ��� �ɸ���.
		//�� ������ �׷������� ����� ���� �ִ�. �װ� �ƴ϶�� ��ó�� �ѹ��� ����ϴ� ������� �������
		//��ó�� ������ �����δ� cnt 0, 1 ...�� ���� ��� �ε����� �����ϸ� �ڿ����� ��� ������ ���� ���� ����ϱ� ����
		//���� "�Ҽ� ã��" �ڵ忡���� backtrack�Ʒ� �κ��� ���� �ϳ��� �����ϵ��� �Ͽ���.
	}
}

int solution(int k, vector<vector<int>> dungeons) {
	backtrack(k, dungeons, 0, 0);
	return answer;
}*/