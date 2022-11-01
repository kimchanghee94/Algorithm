/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

#define MAX 102

int N, rain;
int graph[2][MAX][MAX];
int di[4] = { 1, -1, 0, 0 }, dj[4] = { 0, 0, 1, -1 };

void dfs(int fi, int fj){
	graph[1][fi][fj] = 1;
	for (int d = 0; d < 4; d++){
		int ni = fi + di[d], nj = fj + dj[d];
		if (ni >= 0 && nj >= 0 && ni < N && nj < N && graph[0][ni][nj] > rain && !graph[1][ni][nj]) dfs(ni, nj);
	}
}

int main(){
	int safe = 1, maxH = 1, minH = 100;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			scanf("%d", &graph[0][i][j]);
			maxH = max(maxH, graph[0][i][j]);
			minH = min(minH, graph[0][i][j]);
		}
	}
	for (rain = minH; rain < maxH; rain++){
		int tmp_safe = 0;
		for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) if (graph[0][i][j] > rain && !graph[1][i][j]) tmp_safe++, dfs(i, j);
		for (int i = 0; i < N; i++) memset(graph[1][i], 0, sizeof(int) * N);
		safe = max(safe, tmp_safe);
	}
	printf("%d", safe);
}*/