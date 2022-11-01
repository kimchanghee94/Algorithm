/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
using namespace std;

#define MAX 302

int N, M;
int graph[2][MAX][MAX], flag[MAX][MAX];
int di[4] = { 1, -1, 0, 0 }, dj[4] = { 0, 0, 1, -1 };

void dfs(int fi, int fj){
	flag[fi][fj] = 1;
	for (int d = 0; d < 4; d++) {
		int ni = fi + di[d], nj = fj + dj[d];
		if (ni >= 0 && ni < N && nj >= 0 && nj < M && !flag[ni][nj] && graph[0][ni][nj] > 0) dfs(ni, nj);
	}
}

void simulator(){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (graph[0][i][j]){
				int sea = 0;
				for (int d = 0; d < 4; d++){
					int ni = i + di[d], nj = j + dj[d];
					if (graph[0][ni][nj] <= 0) sea++;
				}
				graph[1][i][j] = sea;
			}
		}
	}

	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++)	graph[0][i][j] -= graph[1][i][j], graph[1][i][j] = 0;	
}

int main(){
	int day = 0;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) scanf("%d", &graph[0][i][j]);
	while (1){
		int fin = 0;
		for (int i = 0; i < N; i++)	for (int j = 0; j < M; j++)	if (graph[0][i][j]>0 && !flag[i][j]) fin++, dfs(i, j);
		if (fin > 1) {
			printf("%d", day);
			break;
		}
		else if(!fin){
			printf("0");
			break;
		}
		for (int i = 0; i < N; i++) memset(flag[i], 0, sizeof(int)*M);
		simulator();
		day++;
	}
}*/