/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <queue>
using namespace std;

#define MAX 100002

queue<int> q;
int N, M, flag[MAX];
int di[3] = { 1, -1};

void bfs(){
	q.push(N);
	flag[N] = 1;

	while (!q.empty()){
		int fi = q.front();
		q.pop();

		if (fi == M) {
			while (!q.empty()) q.pop();
			printf("%d", flag[fi] - 1);
			break;
		}

		for (int d = 0; d < 3; d++){
			int ni = (d == 2) ? fi * 2 : fi + di[d];
			if (ni >= 0 && ni < MAX - 1 && !flag[ni]){
				flag[ni] = flag[fi] + 1;
				q.push(ni);
			}
		}
	}
}

int main(void){
	scanf("%d %d", &N, &M);
	bfs();
}*/