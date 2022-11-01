/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

#define MAX 105

queue<pair<int, int>> q;
char graph[MAX][MAX];
int flag[MAX][MAX];

int di[4] = { 1, -1, 0, 0 };
int dj[4] = { 0, 0, 1, -1 };

void bfs(int N, int M){
	q.push(pair<int,int>(0,0));
	flag[0][0] = 1;

	while (!q.empty()){
		int fi = q.front().first;
		int fj = q.front().second;
		q.pop();

		for (int d = 0; d < 4; d++){
			int ni = fi + di[d];
			int nj = fj + dj[d];

			if (graph[ni][nj] == '1' && !flag[ni][nj] &&
				ni >= 0 && nj >= 0 && ni < N && nj < M){
				flag[ni][nj] = flag[fi][fj] + 1;
				q.push(pair<int, int>(ni, nj));
			}
		}
	}
	printf("%d", flag[N - 1][M - 1]);
}

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)	scanf("%s", graph[i]);
	bfs(N, M);
}*/