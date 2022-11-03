/*#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 52
#define SMAX 7

int flag[MAX][MAX];
int di[4] = { 1, 0, -1, 0 }, dj[4] = { 0, 1, 0, -1 };
int N, shp_b, shp_t, answer;
vector<pair<int, int>> blk_b[MAX*MAX], blk_t[MAX*MAX];

void moveZero(int bidx, int tidx, int cnt){
	int bfi = MAX, bfj = MAX, tfi = MAX, tfj = MAX;
	for (int i = 0; i < cnt; i++) bfi = min(bfi, blk_b[bidx][i].first), bfj = min(bfj, blk_b[bidx][i].second),
		tfi = min(tfi, blk_t[tidx][i].first), tfj = min(tfj, blk_t[tidx][i].second);
	for (int i = 0; i < cnt; i++) blk_b[bidx][i].first -= bfi, blk_b[bidx][i].second -= bfj,
		blk_t[tidx][i].first -= tfi, blk_t[tidx][i].second -= tfj;
}

int rotation(int bidx, int tidx, int cnt){
	for (int d = 0; d < 4; d++){
	int chk = 0;
		moveZero(bidx, tidx, cnt);
		for (int i = 0; i < cnt; i++){
			int fi = blk_b[bidx][i].first, fj = blk_b[bidx][i].second;
			for (int j = 0; j < cnt; j++){
				int ni = blk_t[tidx][j].first, nj = blk_t[tidx][j].second;
				if (fi == ni && fj == nj){
					chk++;
					if (chk == cnt)	return 1;
				}
			}
		}
		for (int r = 0; r < cnt; r++) {
			int ti = blk_t[tidx][r].first, tj = blk_t[tidx][r].second;
			blk_t[tidx][r].first = tj, blk_t[tidx][r].second = N - ti - 1;
		}
	}
	return 0;
}

void simulation(){
	for (int i = 0; i < shp_b; i++){
		int fcnt = blk_b[i].size();
		for (int j = 0; j < shp_t; j++){
			int ncnt = blk_t[j].size();
			if (fcnt == ncnt && 1<=fcnt && fcnt<3){
				answer+=fcnt, blk_t[j].clear();
				break;
			}
			else if (fcnt == ncnt && rotation(i, j, fcnt)){
				answer += fcnt,	blk_t[j].clear();
				break;
			}
		}
	}
}

void dfs(vector<vector<int>> game_board, int fi, int fj, int comp){
	if (!comp) blk_b[shp_b].push_back(pair<int, int>(fi, fj));
	else blk_t[shp_t].push_back(pair<int, int>(fi, fj));
	flag[fi][fj] = 1;
	for (int d = 0; d < 4; d++){
		int ni = fi + di[d], nj = fj + dj[d];
		if (ni >= 0 && nj >= 0 && ni < N && nj < N && !flag[ni][nj] && game_board[ni][nj] == comp) dfs(game_board, ni, nj, comp);
	}
}

int solution(vector<vector<int>> game_board, vector<vector<int>> table) {
	N = game_board.size();
	for (int i = 0; i < N; i++)	for (int j = 0; j < N; j++)	if (!game_board[i][j] && !flag[i][j]) dfs(game_board, i, j, 0), shp_b++;
	for (int i = 0; i < N; i++) memset(flag[i], 0, sizeof(flag[i]));
	for (int i = 0; i < N; i++)	for (int j = 0; j < N; j++)	if (table[i][j] && !flag[i][j])	dfs(table, i, j, 1), shp_t++;
	simulation();
	return answer;
}

int main(){
	vector<vector<int>> game_board =
	{ { 0, 0, 0
	}, { 1, 1, 0
	}, { 1, 1, 1
	} };

	vector<vector<int>> table =
	{ { 1, 1, 1
	}, { 1, 0, 0
	}, { 0, 0, 0
	} };

	printf("%d\n",solution(game_board, table));
}*/