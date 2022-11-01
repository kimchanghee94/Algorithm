/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

#define MAX 30

char graph[MAX][MAX];
int flag[MAX][MAX];
int di[4] = { 1, -1, 0, 0 }, dj[4] = { 0, 0, 1, -1 };
int N, house_cnt;

void dfs(int fi, int fj){
	flag[fi][fj] = 1;
	house_cnt++;
	for (int d = 0; d < 4; d++){
		int ni = fi + di[d], nj = fj + dj[d];
		if (ni >= 0 && nj >= 0 && ni < N && nj < N &&
			!flag[ni][nj] && graph[ni][nj] == '1'){
			dfs(ni, nj);
		}
	}
}

int main(){
	int group_cnt = 0;
	int house_arr[MAX*MAX];
	memset(house_arr, 0, sizeof(house_arr));
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%s", graph[i]);
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (!flag[i][j] && graph[i][j] == '1'){
				dfs(i, j);
				house_arr[group_cnt++] = house_cnt;
				house_cnt = 0;
			}
		}
	}
	sort(house_arr, house_arr + group_cnt);
	printf("%d\n", group_cnt);
	for (int i = 0; i < group_cnt; i++) printf("%d\n", house_arr[i]);
}*/