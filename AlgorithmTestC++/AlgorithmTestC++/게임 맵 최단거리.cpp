/*#include<vector>
#include <queue>
using namespace std;

#define MAX 102
queue<pair<int, int>> q;
int di[4] = { 1, -1, 0, 0 }, dj[4] = { 0, 0, 1, -1 }, flag[MAX][MAX];

int bfs(vector<vector<int>> maps){
	int N = maps.size(), M = maps[0].size();
	q.push(pair<int, int>(0, 0));
	flag[0][0] = 1;
	while (!q.empty()){
		int fi = q.front().first, fj = q.front().second;
		q.pop();
		if (fi == N - 1 && fj == M - 1) return flag[fi][fj];
		for (int d = 0; d<4; d++){
			int ni = fi + di[d], nj = fj + dj[d];
			if (ni >= 0 && nj >= 0 && ni<N && nj<M && !flag[ni][nj] && maps[ni][nj]){
				flag[ni][nj] = flag[fi][fj] + 1;
				q.push(pair<int, int>(ni, nj));
			}
		}
	}
	return -1;
}

int solution(vector<vector<int>> maps)
{
	int answer = 0;
	answer = bfs(maps);
	return answer;
}*/