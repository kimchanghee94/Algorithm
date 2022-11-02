/*#include <string>
#include <vector>
#include <queue>
using namespace std;

#define MAX 52

queue<pair<int, int>> q;
int flag[MAX][MAX];
int di[4] = { 1, -1, 0, 0 }, dj[4] = { 0, 0, 1, -1 };

bool simul(vector<vector<int>> R, int ni, int nj, int fi, int fj){
	double ci = (double)(ni + fi) / 2, cj = (double)(nj + fj) / 2;
	for (int i = 0; i<R.size(); i++){
		if (R[i][1]<ci && ci<R[i][3] && R[i][0]<cj && cj<R[i][2]) return 0;
	}
	for (int i = 0; i<R.size(); i++){
		if (((R[i][1] == ci || R[i][3] == ci) && R[i][0] <= cj && cj <= R[i][2]) ||
			((R[i][0] == cj || R[i][2] == cj) && R[i][1] <= ci && ci <= R[i][3])) return 1;
	}
	return 0;
}

int bfs(vector<vector<int>> R, int cX, int cY, int iX, int iY){
	q.push(pair<int, int>(cY, cX));
	flag[cY][cX] = 1;

	while (!q.empty()){
		int fi = q.front().first, fj = q.front().second;
		q.pop();
		if (fi == iY && fj == iX) return flag[fi][fj] - 1;
		for (int d = 0; d<4; d++){
			int ni = fi + di[d], nj = fj + dj[d];
			if (!flag[ni][nj] && simul(R, ni, nj, fi, fj)) flag[ni][nj] = flag[fi][fj] + 1, q.push(pair<int, int>(ni, nj));
		}
	}
}

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
	int answer = bfs(rectangle, characterX, characterY, itemX, itemY);
	return answer;
}*/