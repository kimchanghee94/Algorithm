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
		//k>=d[i][0]이라는 조건 때문에 모든 인덱스를 거칠수가 없다.
		//cnt+1의 값이 항상 d.size()로 될 수 없다. 따라서 여기서 처리하도록 했다.
		answer = max(answer, tmp_ans);
		
		//backtrack(k, d, cnt+1, tmp_ans)를 사용하지 않은 이유로는 중복된 데이터 처리가 너무 많아 시간초과가 걸린다.
		//위 로직은 그래프에서 사용할 때가 있다. 그게 아니라면 위처럼 한번만 사용하는 방법으로 고려하자
		//위처럼 가능한 이유로는 cnt 0, 1 ...에 따라 모든 인덱스를 검토하며 자연스레 모든 순서에 따른 값을 고려하기 때문
		//따라서 "소수 찾기" 코드에서도 backtrack아랫 부분을 지워 하나만 선언하도록 하였다.
	}
}

int solution(int k, vector<vector<int>> dungeons) {
	backtrack(k, dungeons, 0, 0);
	return answer;
}*/