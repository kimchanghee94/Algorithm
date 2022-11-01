/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <queue>
using namespace std;

#define MAX 102

struct pos{
	int x, y, z;
	pos(int i, int j, int k){
		x = i, y = j, z = k;
	}
};

queue<pos> q;

int N, M, H, unripe, total_day;
int box[MAX][MAX][MAX];
int di[6] = { 1, -1, 0, 0, 0, 0 };
int dj[6] = { 0, 0, 1, -1, 0, 0 };
int dh[6] = { 0, 0, 0, 0, 1, -1 };

void bfs(){
	while (!q.empty()){
		int tmp_day = q.size();
		for (int day = 0; day < tmp_day; day++){
			int fi = q.front().x, fj = q.front().y, fh = q.front().z;
			q.pop();

			for (int d = 0; d < 6; d++){
				int ni = fi + di[d], nj = fj + dj[d], nh = fh + dh[d];
				if (ni >= 0 && nj >= 0 && nh >= 0 &&
					ni < N && nj < M && nh < H &&
					!box[nh][ni][nj]){
					box[nh][ni][nj] = 1;
					unripe--;
					q.push(pos(ni, nj, nh));
				}
			}
		}
		total_day++;
	}
}

int main(){
	scanf("%d %d %d", &M, &N, &H);
	for (int h = 0; h < H; h++)	{
		for (int i = 0; i < N; i++)	{
			for (int j = 0; j < M; j++)	{
				scanf("%d", &box[h][i][j]);
				if (box[h][i][j] == 1) q.push(pos(i, j, h));
				else if (!box[h][i][j]) unripe++;
			}
		}
	}
	if (!unripe) printf("0");
	else {
		bfs();
		if (!unripe) printf("%d", total_day - 1);
		else printf("-1");
	}
}*/