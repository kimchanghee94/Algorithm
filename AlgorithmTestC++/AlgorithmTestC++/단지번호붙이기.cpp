#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

#define MAX 30

char graph[MAX][MAX];
int flag[MAX][MAX];
int di[4] = { 1, -1, 0, 0 }, dj[4] = { 0, 0, 1, -1 };
int N;

void dfs(int fi, int fj){
	flag[fi][fj] = 1;
	for (int d = 0; d < 4; d++){
		int ni = fi + di[d], nj = fj + dj[d];
		if (ni >= 0 && nj >= 0 && ni < N && nj < N &&
			!flag[ni][nj] && graph[ni][nj] == '1'){

		}
	}
}

int main(){
	int house_cnt = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%s", graph[i]);
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (!flag[i][j] && graph[i][j] == '1'){
				dfs(i, j);
				house_cnt++;
			}
		}
	}
	printf("%d", house_cnt);
}